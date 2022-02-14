
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pegasus {int is_open; int intf; int pm_mutex; int init; int irq; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pegasus* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_0)
{
 struct pegasus *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->pm_mutex);
 FUNC_5(VAR_1->irq);
 FUNC_0(&VAR_1->init);
 VAR_1->is_open = 0;
 FUNC_3(&VAR_1->pm_mutex);

 FUNC_4(VAR_1->intf);
}
