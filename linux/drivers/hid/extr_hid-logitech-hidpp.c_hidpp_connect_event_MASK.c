
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct TYPE_2__ {int online; scalar_t__ ps; int level; int status; } ;
struct hidpp_device {int quirks; int protocol_major; char* name; int capabilities; struct input_dev* delayed_input; TYPE_1__ battery; int connected; struct hid_device* hid_dev; } ;
struct hid_device {char* name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ,char*,char*) ;
 int FUNC_2 (struct hidpp_device*) ;
 int FUNC_3 (struct hid_device*,char*,...) ;
 int FUNC_4 (struct hidpp_device*) ;
 int FUNC_5 (struct hidpp_device*) ;
 int FUNC_6 (struct hidpp_device*) ;
 int FUNC_7 (struct hidpp_device*) ;
 int FUNC_8 (struct hidpp_device*) ;
 int FUNC_9 (struct hidpp_device*) ;
 int FUNC_10 (struct hidpp_device*) ;
 struct input_dev* FUNC_11 (struct hid_device*) ;
 char* FUNC_12 (struct hidpp_device*) ;
 int FUNC_13 (struct hidpp_device*) ;
 int FUNC_14 (struct hidpp_device*,struct input_dev*) ;
 int FUNC_15 (struct hidpp_device*) ;
 int FUNC_16 (struct input_dev*) ;
 int FUNC_17 (struct input_dev*) ;
 int FUNC_18 (struct hid_device*,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (struct hid_device*,int) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (struct hid_device*,int) ;

__attribute__((used)) static void FUNC_23(struct hidpp_device *VAR_14)
{
 struct hid_device *VAR_15 = VAR_14->hid_dev;
 int VAR_16 = 0;
 bool VAR_17 = FUNC_0(&VAR_14->connected);
 struct input_dev *VAR_18;
 char *VAR_19, *VAR_20;

 if (!VAR_17) {
  if (VAR_14->battery.ps) {
   VAR_14->battery.online = 0;
   VAR_14->battery.status = VAR_13;
   VAR_14->battery.level = VAR_12;
   FUNC_21(VAR_14->battery.ps);
  }
  return;
 }

 if (VAR_14->quirks & VAR_6) {
  VAR_16 = FUNC_22(VAR_15, VAR_17);
  if (VAR_16)
   return;
 } else if (VAR_14->quirks & VAR_5) {
  VAR_16 = FUNC_20(VAR_15, VAR_17);
  if (VAR_16)
   return;
 } else if (VAR_14->quirks & VAR_4) {
  VAR_16 = FUNC_18(VAR_15, VAR_17);
  if (VAR_16)
   return;
 }

 if (VAR_14->quirks & VAR_9) {
  VAR_16 = FUNC_9(VAR_14);
  if (VAR_16)
   return;
 }

 if (VAR_14->quirks & VAR_8) {
  VAR_16 = FUNC_6(VAR_14);
  if (VAR_16)
   return;
 }

 if (VAR_14->quirks & VAR_7) {
  VAR_16 = FUNC_4(VAR_14);
  if (VAR_16)
   return;
 }



 if (!VAR_14->protocol_major) {
  VAR_16 = FUNC_15(VAR_14);
  if (VAR_16) {
   FUNC_3(VAR_15, "Can not get the protocol version.\n");
   return;
  }
 }

 if (VAR_14->name == VAR_15->name && VAR_14->protocol_major >= 2) {
  VAR_19 = FUNC_12(VAR_14);
  if (VAR_19) {
   VAR_20 = FUNC_1(&VAR_15->dev, VAR_0,
         "%s", VAR_19);
   FUNC_19(VAR_19);
   if (!VAR_20)
    return;

   VAR_14->name = VAR_20;
  }
 }

 FUNC_13(VAR_14);


 if (VAR_14->capabilities & VAR_2) {
  FUNC_5(VAR_14);
  if (VAR_14->capabilities & VAR_1)
   FUNC_7(VAR_14);
  else
   FUNC_8(VAR_14);
 } else if (VAR_14->capabilities & VAR_3) {
  FUNC_10(VAR_14);
 }
 if (VAR_14->battery.ps)
  FUNC_21(VAR_14->battery.ps);

 if (VAR_14->quirks & VAR_10)
  FUNC_2(VAR_14);

 if (!(VAR_14->quirks & VAR_11) || VAR_14->delayed_input)

  return;

 VAR_18 = FUNC_11(VAR_15);
 if (!VAR_18) {
  FUNC_3(VAR_15, "cannot allocate new input device: %d\n", VAR_16);
  return;
 }

 FUNC_14(VAR_14, VAR_18);

 VAR_16 = FUNC_17(VAR_18);
 if (VAR_16)
  FUNC_16(VAR_18);

 VAR_14->delayed_input = VAR_18;
}
