
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct pegasus {int pm_mutex; int irq; scalar_t__ is_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pegasus*,int ,int ) ;
 struct pegasus* FUNC_3 (struct usb_interface*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_4)
{
 struct pegasus *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0;

 FUNC_0(&VAR_5->pm_mutex);
 if (VAR_5->is_open) {
  VAR_6 = FUNC_2(VAR_5, VAR_3,
       VAR_2);
  if (!VAR_6 && FUNC_4(VAR_5->irq, VAR_1) < 0)
   VAR_6 = -VAR_0;
 }
 FUNC_1(&VAR_5->pm_mutex);

 return VAR_6;
}
