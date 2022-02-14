
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_xtensa_func {int dummy; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_xtensa {struct nvkm_engine engine; int addr; struct nvkm_xtensa_func const* func; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_xtensa* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,struct nvkm_engine*) ;
 int VAR_2 ;

int
FUNC_2(const struct nvkm_xtensa_func *VAR_3,
   struct nvkm_device *VAR_4, int VAR_5, bool VAR_6,
   u32 VAR_7, struct nvkm_engine **VAR_8)
{
 struct nvkm_xtensa *VAR_9;

 if (!(VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 VAR_9->func = VAR_3;
 VAR_9->addr = VAR_7;
 *VAR_8 = &VAR_9->engine;

 return FUNC_1(&VAR_2, VAR_4, VAR_5,
    VAR_6, &VAR_9->engine);
}
