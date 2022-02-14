
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_bios {int dummy; } ;


 unsigned char FUNC_0 (struct nvkm_bios*,int ) ;

int
FUNC_1(struct nvkm_bios *VAR_0, u32 VAR_1, const char *VAR_2, u32 VAR_3)
{
 unsigned char VAR_4, VAR_5;

 while (VAR_3--) {
  VAR_4 = FUNC_0(VAR_0, VAR_1++);
  VAR_5 = *(VAR_2++);
  if (VAR_4 != VAR_5)
   return VAR_4 - VAR_5;
 }
 return 0;
}
