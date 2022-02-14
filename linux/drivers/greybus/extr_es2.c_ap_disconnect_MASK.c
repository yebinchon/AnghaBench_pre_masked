
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct es2_ap_dev {int cport_in; int hd; } ;


 int FUNC_0 (struct es2_ap_dev*) ;
 int FUNC_1 (struct es2_ap_dev*,int *) ;
 int FUNC_2 (struct es2_ap_dev*) ;
 int FUNC_3 (int ) ;
 struct es2_ap_dev* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct es2_ap_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_1->hd);

 FUNC_1(VAR_1, &VAR_1->cport_in);
 FUNC_0(VAR_1);

 FUNC_2(VAR_1);
}
