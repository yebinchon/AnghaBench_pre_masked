
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm_file {int lock; int contexts; } ;
struct drm_file {struct tegra_drm_file* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct tegra_drm_file* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 struct tegra_drm_file *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->contexts);
 FUNC_2(&VAR_4->lock);
 VAR_3->driver_priv = VAR_4;

 return 0;
}
