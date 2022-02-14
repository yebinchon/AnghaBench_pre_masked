
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_file {int lock; int contexts; } ;
struct drm_file {struct tegra_drm_file* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (struct tegra_drm_file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_1, struct drm_file *VAR_2)
{
 struct tegra_drm_file *VAR_3 = VAR_2->driver_priv;

 FUNC_4(&VAR_3->lock);
 FUNC_1(&VAR_3->contexts, VAR_0, ((void*)0));
 FUNC_5(&VAR_3->lock);

 FUNC_0(&VAR_3->contexts);
 FUNC_3(&VAR_3->lock);
 FUNC_2(VAR_3);
}
