
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidraw {int minor; } ;
struct hiddev {int minor; } ;
struct hid_device {int quirks; int bus; int claimed; unsigned int maxcollection; int version; int phys; int name; int dev; struct hid_collection* collection; scalar_t__ hidraw; scalar_t__ hiddev; int (* ff_init ) (struct hid_device*) ;TYPE_1__* driver; int (* hiddev_connect ) (struct hid_device*,unsigned int) ;} ;
struct hid_collection {scalar_t__ type; int usage; } ;
struct TYPE_2__ {int raw_event; } ;


 int FUNC_0 (char const**) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hid_device*,char*) ;
 scalar_t__ FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,char*,char*,char const*,int,int,char const*,int ,int ) ;
 int FUNC_5 (struct hid_device*,char*,int) ;
 int FUNC_6 (struct hid_device*,unsigned int) ;
 int FUNC_7 (struct hid_device*) ;
 scalar_t__ FUNC_8 (char*,char*,...) ;
 int FUNC_9 (struct hid_device*,unsigned int) ;
 int FUNC_10 (struct hid_device*) ;

int FUNC_11(struct hid_device *VAR_18, unsigned int VAR_19)
{
 static const char *VAR_20[] = { "Device", "Pointer", "Mouse", "Device",
  "Joystick", "Gamepad", "Keyboard", "Keypad",
  "Multi-Axis Controller"
 };
 const char *VAR_21, *VAR_22;
 char VAR_23[64] = "";
 unsigned int VAR_24;
 int VAR_25;
 int VAR_26;

 if (VAR_18->quirks & VAR_13)
  VAR_19 |= (VAR_9 | VAR_8);
 if (VAR_18->quirks & VAR_14)
  VAR_19 |= VAR_11;
 if (VAR_18->bus != 128)
  VAR_19 &= ~VAR_8;
 if (FUNC_3(VAR_18))
  VAR_19 |= VAR_9;

 if ((VAR_19 & VAR_10) && !FUNC_6(VAR_18,
    VAR_19 & VAR_11))
  VAR_18->claimed |= VAR_4;

 if ((VAR_19 & VAR_8) && VAR_18->hiddev_connect &&
   !VAR_18->hiddev_connect(VAR_18,
    VAR_19 & VAR_9))
  VAR_18->claimed |= VAR_2;
 if ((VAR_19 & VAR_12) && !FUNC_7(VAR_18))
  VAR_18->claimed |= VAR_3;

 if (VAR_19 & VAR_6)
  VAR_18->claimed |= VAR_1;



 if (!VAR_18->claimed && !VAR_18->driver->raw_event) {
  FUNC_2(VAR_18, "device has no listeners, quitting\n");
  return -VAR_0;
 }

 if ((VAR_18->claimed & VAR_4) &&
   (VAR_19 & VAR_7) && VAR_18->ff_init)
  VAR_18->ff_init(VAR_18);

 VAR_25 = 0;
 if (VAR_18->claimed & VAR_4)
  VAR_25 += FUNC_8(VAR_23 + VAR_25, "input");
 if (VAR_18->claimed & VAR_2)
  VAR_25 += FUNC_8(VAR_23 + VAR_25, "%shiddev%d", VAR_25 ? "," : "",
    ((struct hiddev *)VAR_18->hiddev)->minor);
 if (VAR_18->claimed & VAR_3)
  VAR_25 += FUNC_8(VAR_23 + VAR_25, "%shidraw%d", VAR_25 ? "," : "",
    ((struct hidraw *)VAR_18->hidraw)->minor);

 VAR_21 = "Device";
 for (VAR_24 = 0; VAR_24 < VAR_18->maxcollection; VAR_24++) {
  struct hid_collection *VAR_27 = &VAR_18->collection[VAR_24];
  if (VAR_27->type == VAR_5 &&
     (VAR_27->usage & VAR_16) == VAR_15 &&
     (VAR_27->usage & 0xffff) < FUNC_0(VAR_20)) {
   VAR_21 = VAR_20[VAR_27->usage & 0xffff];
   break;
  }
 }

 switch (VAR_18->bus) {
 case 128:
  VAR_22 = "USB";
  break;
 case 130:
  VAR_22 = "BLUETOOTH";
  break;
 case 129:
  VAR_22 = "I2C";
  break;
 default:
  VAR_22 = "<UNKNOWN>";
 }

 VAR_26 = FUNC_1(&VAR_18->dev, &VAR_17);
 if (VAR_26)
  FUNC_5(VAR_18,
    "can't create sysfs country code attribute err: %d\n", VAR_26);

 FUNC_4(VAR_18, "%s: %s HID v%x.%02x %s [%s] on %s\n",
   VAR_23, VAR_22, VAR_18->version >> 8, VAR_18->version & 0xff,
   VAR_21, VAR_18->name, VAR_18->phys);

 return 0;
}
