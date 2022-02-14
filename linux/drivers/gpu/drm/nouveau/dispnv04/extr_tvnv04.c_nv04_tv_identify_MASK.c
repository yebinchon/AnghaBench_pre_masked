
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_i2c_bus {int dummy; } ;
struct nvkm_i2c {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int VAR_1 ;
 struct nvkm_i2c_bus* FUNC_1 (struct nvkm_i2c*,int) ;
 int FUNC_2 (struct nvkm_i2c_bus*,char*,int ,int *,int *) ;
 struct nvkm_i2c* FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_2, int VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_0(VAR_2);
 struct nvkm_i2c *VAR_5 = FUNC_3(&VAR_4->client.device);
 struct nvkm_i2c_bus *VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6) {
  return FUNC_2(VAR_6, "TV encoder",
       VAR_1,
       ((void*)0), ((void*)0));
 }
 return -VAR_0;
}
