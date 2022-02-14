
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {struct drm_exynos_file_private* driver_priv; } ;
struct drm_exynos_file_private {int userptr_list; int event_list; int inuse_cmdlist; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct drm_exynos_file_private *VAR_2 = VAR_1->driver_priv;

 FUNC_0(&VAR_2->inuse_cmdlist);
 FUNC_0(&VAR_2->event_list);
 FUNC_0(&VAR_2->userptr_list);

 return 0;
}
