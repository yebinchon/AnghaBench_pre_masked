
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_gpuobj {int dummy; } ;


 int FUNC_0 (struct nvkm_gpuobj*,int,int) ;

void
FUNC_1(struct nvkm_gpuobj *VAR_0, u32 VAR_1, void *VAR_2,
        u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 4)
  FUNC_0(VAR_0, VAR_1 + VAR_4, *(u32 *)(VAR_2 + VAR_4));
}
