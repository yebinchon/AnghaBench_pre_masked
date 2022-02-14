
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct bcm203x_data {int buffer; int fw_data; int urb; int work; int shutdown; } ;


 int FUNC_0 (char*,struct usb_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct bcm203x_data* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct bcm203x_data *VAR_1 = FUNC_5(VAR_0);

 FUNC_0("intf %p", VAR_0);

 FUNC_1(&VAR_1->shutdown);
 FUNC_2(&VAR_1->work);

 FUNC_6(VAR_1->urb);

 FUNC_7(VAR_0, ((void*)0));

 FUNC_4(VAR_1->urb);
 FUNC_3(VAR_1->fw_data);
 FUNC_3(VAR_1->buffer);
}
