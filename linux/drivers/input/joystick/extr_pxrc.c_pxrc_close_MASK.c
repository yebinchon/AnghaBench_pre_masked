
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxrc {int is_open; int pm_mutex; int urb; } ;
struct input_dev {int dummy; } ;


 struct pxrc* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_0)
{
 struct pxrc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->pm_mutex);
 FUNC_3(VAR_1->urb);
 VAR_1->is_open = 0;
 FUNC_2(&VAR_1->pm_mutex);
}
