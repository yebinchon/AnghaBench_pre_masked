
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_gpuobj* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj*) ;
 int FUNC_2 (struct nvkm_gpuobj**) ;

int
FUNC_3(struct nvkm_device *VAR_2, u32 VAR_3, int VAR_4, bool VAR_5,
  struct nvkm_gpuobj *VAR_6, struct nvkm_gpuobj **VAR_7)
{
 struct nvkm_gpuobj *VAR_8;
 int VAR_9;

 if (!(VAR_8 = *VAR_7 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
 if (VAR_9)
  FUNC_2(VAR_7);
 return VAR_9;
}
