
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct nvkm_device_tegra_func {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int ) ;
 struct drm_device* FUNC_4 (struct nvkm_device_tegra_func const*,struct platform_device*,struct nvkm_device**) ;
 struct nvkm_device_tegra_func* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 const struct nvkm_device_tegra_func *VAR_1;
 struct nvkm_device *VAR_2 = ((void*)0);
 struct drm_device *VAR_3;
 int VAR_4;

 VAR_1 = FUNC_5(&VAR_0->dev);

 VAR_3 = FUNC_4(VAR_1, VAR_0, &VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_3(VAR_3, 0);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3);
  return VAR_4;
 }

 return 0;
}
