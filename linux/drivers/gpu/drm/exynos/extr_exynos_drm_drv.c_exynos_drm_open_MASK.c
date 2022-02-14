
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {struct drm_exynos_file_private* driver_priv; } ;
struct drm_exynos_file_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_file*) ;
 int FUNC_1 (struct drm_exynos_file_private*) ;
 struct drm_exynos_file_private* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 struct drm_exynos_file_private *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->driver_priv = VAR_4;
 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  goto err_file_priv_free;

 return VAR_5;

err_file_priv_free:
 FUNC_1(VAR_4);
 VAR_3->driver_priv = ((void*)0);
 return VAR_5;
}
