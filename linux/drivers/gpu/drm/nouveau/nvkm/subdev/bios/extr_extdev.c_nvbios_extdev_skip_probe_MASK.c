
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;


 int FUNC_0 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;

bool
FUNC_2(struct nvkm_bios *VAR_0)
{
 u8 VAR_1, VAR_2, VAR_3, VAR_4;
 u16 VAR_5 = FUNC_0(VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 && VAR_1 == 0x40 && VAR_2 >= 5) {
  u8 VAR_6 = FUNC_1(VAR_0, VAR_5 - VAR_2 + 4);
  if (VAR_6 & 1)
   return 1;
 }
 return 0;
}
