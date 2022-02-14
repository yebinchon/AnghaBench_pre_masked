
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct hid_device_id {unsigned long driver_data; } ;
struct TYPE_6__ {int parent; } ;
struct hid_device {TYPE_3__ dev; } ;
struct corsair_drvdata {unsigned long quirks; } ;
struct TYPE_4__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct corsair_drvdata* FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct corsair_drvdata*) ;
 int FUNC_5 (struct hid_device*,char*) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*) ;
 struct usb_interface* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_5, const struct hid_device_id *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = VAR_6->driver_data;
 struct corsair_drvdata *VAR_9;
 struct usb_interface *VAR_10 = FUNC_8(VAR_5->dev.parent);

 VAR_9 = FUNC_0(&VAR_5->dev, sizeof(struct corsair_drvdata),
          VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_2;
 VAR_9->quirks = VAR_8;
 FUNC_4(VAR_5, VAR_9);

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 != 0) {
  FUNC_1(VAR_5, "parse failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_2(VAR_5, VAR_4);
 if (VAR_7 != 0) {
  FUNC_1(VAR_5, "hw start failed\n");
  return VAR_7;
 }

 if (VAR_10->cur_altsetting->desc.bInterfaceNumber == 0) {
  if (VAR_8 & VAR_1) {
   VAR_7 = FUNC_7(VAR_5);
   if (VAR_7 != 0)
    FUNC_5(VAR_5, "Failed to initialize K90 macro functions.\n");
  }
  if (VAR_8 & VAR_0) {
   VAR_7 = FUNC_6(VAR_5);
   if (VAR_7 != 0)
    FUNC_5(VAR_5, "Failed to initialize K90 backlight.\n");
  }
 }

 return 0;
}
