
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct pegasus {int pm_mutex; int init; int irq; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct pegasus* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct pegasus *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->pm_mutex);
 FUNC_4(VAR_2->irq);
 FUNC_0(&VAR_2->init);
 FUNC_2(&VAR_2->pm_mutex);

 return 0;
}
