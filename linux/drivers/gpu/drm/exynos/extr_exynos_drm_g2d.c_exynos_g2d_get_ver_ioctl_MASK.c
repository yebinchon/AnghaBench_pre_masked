
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_exynos_g2d_get_ver {int minor; int major; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct drm_device *VAR_2, void *VAR_3,
        struct drm_file *VAR_4)
{
 struct drm_exynos_g2d_get_ver *VAR_5 = VAR_3;

 VAR_5->major = VAR_0;
 VAR_5->minor = VAR_1;

 return 0;
}
