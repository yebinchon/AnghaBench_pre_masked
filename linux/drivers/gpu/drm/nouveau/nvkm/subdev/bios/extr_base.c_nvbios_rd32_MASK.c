
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nvkm_bios {int * data; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_bios*,size_t*,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u32 VAR_1)
{
 if (FUNC_1(FUNC_2(VAR_0, &VAR_1, 4)))
  return FUNC_0(&VAR_0->data[VAR_1]);
 return 0x00000000;
}
