
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_bios {int data; } ;


 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int) ;

__attribute__((used)) static u32
FUNC_2(void *VAR_0, u32 VAR_1, u32 VAR_2, struct nvkm_bios *VAR_3)
{
 u32 VAR_4 = (VAR_1 + VAR_2 + 0xfff) & ~0xfff;
 u32 VAR_5 = VAR_1 & ~0x00000fff;
 u32 VAR_6 = VAR_4 - VAR_5;

 if (FUNC_1(VAR_3, VAR_4) >= 0) {
  int VAR_7 = FUNC_0(VAR_3->data, VAR_5, VAR_6);
  if (VAR_7 == VAR_6)
   return VAR_6;
 }

 return 0;
}
