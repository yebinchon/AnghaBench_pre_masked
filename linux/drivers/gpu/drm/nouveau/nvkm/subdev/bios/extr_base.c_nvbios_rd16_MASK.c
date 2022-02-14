
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct nvkm_bios {int * data; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_bios*,size_t*,int) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u32 VAR_1)
{
 if (FUNC_1(FUNC_2(VAR_0, &VAR_1, 2)))
  return FUNC_0(&VAR_0->data[VAR_1]);
 return 0x0000;
}
