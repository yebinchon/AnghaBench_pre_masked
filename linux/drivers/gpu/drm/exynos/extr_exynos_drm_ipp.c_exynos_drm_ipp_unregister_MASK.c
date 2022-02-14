
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp {int task; int head; int todo_list; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct device *VAR_0,
          struct exynos_drm_ipp *VAR_1)
{
 FUNC_0(VAR_1->task);
 FUNC_0(!FUNC_2(&VAR_1->todo_list));
 FUNC_1(&VAR_1->head);
}
