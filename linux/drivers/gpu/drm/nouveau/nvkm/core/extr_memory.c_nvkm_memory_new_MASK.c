
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_instmem {int dummy; } ;
struct nvkm_device {struct nvkm_instmem* imem; } ;
typedef enum nvkm_memory_target { ____Placeholder_nvkm_memory_target } nvkm_memory_target ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_instmem*,int ,int ,int,struct nvkm_memory**) ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(struct nvkm_device *VAR_2, enum nvkm_memory_target VAR_3,
  u64 VAR_4, u32 VAR_5, bool VAR_6,
  struct nvkm_memory **VAR_7)
{
 struct nvkm_instmem *VAR_8 = VAR_2->imem;
 struct nvkm_memory *VAR_9;
 int VAR_10 = -VAR_0;

 if (FUNC_1(VAR_3 != VAR_1 || !VAR_8))
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_4, VAR_5, VAR_6, &VAR_9);
 if (VAR_10)
  return VAR_10;

 *VAR_7 = VAR_9;
 return 0;
}
