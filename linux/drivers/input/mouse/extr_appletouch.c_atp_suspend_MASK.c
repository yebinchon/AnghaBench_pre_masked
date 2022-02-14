
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct atp {int urb; } ;
typedef int pm_message_t ;


 struct atp* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct atp *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->urb);
 return 0;
}
