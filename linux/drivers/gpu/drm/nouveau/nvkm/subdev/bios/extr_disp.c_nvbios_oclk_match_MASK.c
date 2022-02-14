
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;


 int FUNC_0 (struct nvkm_bios*,int) ;

u16
FUNC_1(struct nvkm_bios *VAR_0, u16 VAR_1, u32 VAR_2)
{
 while (VAR_1) {
  if (VAR_2 / 10 >= FUNC_0(VAR_0, VAR_1 + 0x00))
   return FUNC_0(VAR_0, VAR_1 + 0x02);
  VAR_1 += 0x04;
 }
 return 0x0000;
}
