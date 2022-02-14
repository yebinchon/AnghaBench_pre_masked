
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct usb_interface {TYPE_2__ dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {scalar_t__ bInterfaceClass; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct ims_pcu {scalar_t__ bootloader_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ims_pcu*) ;
 int FUNC_1 (struct ims_pcu*) ;
 int FUNC_2 (struct ims_pcu*) ;
 int FUNC_3 (struct ims_pcu*) ;
 int FUNC_4 (struct ims_pcu*) ;
 int FUNC_5 (int *,int *) ;
 struct ims_pcu* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_2)
{
 struct ims_pcu *VAR_3 = FUNC_6(VAR_2);
 struct usb_host_interface *VAR_4 = VAR_2->cur_altsetting;

 FUNC_7(VAR_2, ((void*)0));





 if (VAR_4->desc.bInterfaceClass != VAR_0)
  return;

 FUNC_5(&VAR_2->dev.kobj, &VAR_1);

 FUNC_3(VAR_3);

 if (VAR_3->bootloader_mode)
  FUNC_2(VAR_3);
 else
  FUNC_1(VAR_3);

 FUNC_0(VAR_3);
 FUNC_4(VAR_3);
}
