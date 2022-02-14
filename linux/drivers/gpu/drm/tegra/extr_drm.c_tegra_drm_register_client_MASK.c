
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_client {struct tegra_drm* drm; int list; } ;
struct tegra_drm {int clients_lock; int clients; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct tegra_drm *VAR_0,
         struct tegra_drm_client *VAR_1)
{
 FUNC_1(&VAR_0->clients_lock);
 FUNC_0(&VAR_1->list, &VAR_0->clients);
 VAR_1->drm = VAR_0;
 FUNC_2(&VAR_0->clients_lock);

 return 0;
}
