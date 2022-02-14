
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pll_mapping {int reg; int type; } ;
struct nvkm_bios {int dummy; } ;


 int FUNC_0 (struct nvkm_bios*,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int*,int*,int*,int*) ;
 struct pll_mapping* FUNC_3 (struct nvkm_bios*) ;

__attribute__((used)) static u32
FUNC_4(struct nvkm_bios *VAR_0, u32 VAR_1, u32 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct pll_mapping *VAR_5;
 u8 VAR_6, VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_0, VAR_3, &VAR_6, &VAR_7, VAR_4);
 if (VAR_8 && *VAR_3 >= 0x30) {
  VAR_8 += VAR_6;
  while (VAR_7--) {
   if (FUNC_1(VAR_0, VAR_8 + 3) == VAR_1) {
    *VAR_2 = FUNC_0(VAR_0, VAR_8 + 0);
    return VAR_8;
   }
   VAR_8 += *VAR_4;
  }
  return 0x0000;
 }

 VAR_5 = FUNC_3(VAR_0);
 while (VAR_5 && VAR_5->reg) {
  if (VAR_5->reg == VAR_1 && *VAR_3 >= 0x20) {
   u32 VAR_9 = (VAR_8 += VAR_6);
   *VAR_2 = VAR_5->type;
   while (VAR_7--) {
    if (FUNC_1(VAR_0, VAR_8) == VAR_5->reg)
     return VAR_8;
    VAR_8 += *VAR_4;
   }
   return VAR_9;
  } else
  if (VAR_5->reg == VAR_1) {
   *VAR_2 = VAR_5->type;
   return VAR_8 + 1;
  }
  VAR_5++;
 }

 return 0x0000;
}
