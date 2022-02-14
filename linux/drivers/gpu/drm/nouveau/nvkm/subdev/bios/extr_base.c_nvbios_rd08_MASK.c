
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct nvkm_bios {int* data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_bios*,size_t*,int) ;

u8
FUNC_2(struct nvkm_bios *VAR_0, u32 VAR_1)
{
 if (FUNC_0(FUNC_1(VAR_0, &VAR_1, 1)))
  return VAR_0->data[VAR_1];
 return 0x00;
}
