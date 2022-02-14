
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct nvkm_device_tegra_func {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct drm_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_0 ;
 struct drm_device* FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct nvkm_device**) ;
 int FUNC_7 (struct nvkm_device_tegra_func const*,struct platform_device*,int ,int ,int,int,unsigned long long,struct nvkm_device**) ;
 int FUNC_8 (struct platform_device*,struct drm_device*) ;

struct drm_device *
FUNC_9(const struct nvkm_device_tegra_func *VAR_3,
          struct platform_device *VAR_4,
          struct nvkm_device **VAR_5)
{
 struct drm_device *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_1, VAR_2,
        1, 1, ~0ULL, VAR_5);
 if (VAR_7)
  goto err_free;

 VAR_6 = FUNC_3(&VAR_0, &VAR_4->dev);
 if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  goto err_free;
 }

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  goto err_put;

 FUNC_8(VAR_4, VAR_6);

 return VAR_6;

err_put:
 FUNC_4(VAR_6);
err_free:
 FUNC_6(VAR_5);

 return FUNC_0(VAR_7);
}
