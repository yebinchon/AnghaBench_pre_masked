
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct atp {TYPE_1__* intf; struct usb_device* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int ,int ,char*,int,int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct atp *VAR_12)
{
 struct usb_device *VAR_13 = VAR_12->udev;
 char *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_14 = FUNC_3(8, VAR_7);
 if (!VAR_14) {
  FUNC_0(&VAR_12->intf->dev, "Out of memory\n");
  return -VAR_6;
 }

 VAR_15 = FUNC_4(VAR_13, FUNC_5(VAR_13, 0),
   VAR_0,
   VAR_8 | VAR_11 | VAR_10,
   VAR_2,
   VAR_1, VAR_14, 8, 5000);

 if (VAR_15 != 8) {
  FUNC_1("atp_geyser_init: read error\n");
  for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
   FUNC_1("appletouch[%d]: %d\n", VAR_16, VAR_14[VAR_16]);

  FUNC_0(&VAR_12->intf->dev, "Failed to read mode from device.\n");
  VAR_17 = -VAR_5;
  goto out_free;
 }


 VAR_14[0] = VAR_3;

 VAR_15 = FUNC_4(VAR_13, FUNC_6(VAR_13, 0),
   VAR_4,
   VAR_9 | VAR_11 | VAR_10,
   VAR_2,
   VAR_1, VAR_14, 8, 5000);

 if (VAR_15 != 8) {
  FUNC_1("atp_geyser_init: write error\n");
  for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
   FUNC_1("appletouch[%d]: %d\n", VAR_16, VAR_14[VAR_16]);

  FUNC_0(&VAR_12->intf->dev, "Failed to request geyser raw mode\n");
  VAR_17 = -VAR_5;
  goto out_free;
 }
 VAR_17 = 0;
out_free:
 FUNC_2(VAR_14);
 return VAR_17;
}
