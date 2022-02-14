
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_xtensa {int gpu_fw; scalar_t__ addr; TYPE_2__ engine; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__ const,int ) ;
 struct nvkm_xtensa* FUNC_2 (struct nvkm_engine*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_engine *VAR_0, bool VAR_1)
{
 struct nvkm_xtensa *VAR_2 = FUNC_2(VAR_0);
 struct nvkm_device *VAR_3 = VAR_2->engine.subdev.device;
 const u32 VAR_4 = VAR_2->addr;

 FUNC_1(VAR_3, VAR_4 + 0xd84, 0);
 FUNC_1(VAR_3, VAR_4 + 0xd94, 0);

 if (!VAR_1)
  FUNC_0(&VAR_2->gpu_fw);
 return 0;
}
