
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct isku_device {scalar_t__ roccat_claimed; } ;
struct hid_report {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct hid_device {TYPE_1__ dev; } ;
struct TYPE_5__ {scalar_t__ bInterfaceProtocol; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 scalar_t__ VAR_0 ;
 struct isku_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct isku_device*,int *) ;
 int FUNC_2 (struct isku_device*,int *) ;
 struct usb_interface* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_1,
  struct hid_report *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_3(VAR_1->dev.parent);
 struct isku_device *VAR_6 = FUNC_0(VAR_1);

 if (VAR_5->cur_altsetting->desc.bInterfaceProtocol
   != VAR_0)
  return 0;

 if (VAR_6 == ((void*)0))
  return 0;

 FUNC_1(VAR_6, VAR_3);

 if (VAR_6->roccat_claimed)
  FUNC_2(VAR_6, VAR_3);

 return 0;
}
