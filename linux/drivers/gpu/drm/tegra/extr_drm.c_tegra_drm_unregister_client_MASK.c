
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_client {int * drm; int list; } ;
struct tegra_drm {int clients_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct tegra_drm *VAR_0,
    struct tegra_drm_client *VAR_1)
{
 FUNC_1(&VAR_0->clients_lock);
 FUNC_0(&VAR_1->list);
 VAR_1->drm = ((void*)0);
 FUNC_2(&VAR_0->clients_lock);

 return 0;
}
