
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;


 int FUNC_0 (struct nvkm_bios*,int*,int*,int*,int*) ;

u32
FUNC_1(struct nvkm_bios *VAR_0, int VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 u8 VAR_4, VAR_5;
 u32 VAR_6 = FUNC_0(VAR_0, VAR_2, &VAR_4, &VAR_5, VAR_3);
 if (VAR_6 && VAR_1 < VAR_5) {
  VAR_6 = VAR_6 + VAR_4 + (VAR_1 * *VAR_3);
  return VAR_6;
 }
 return 0;
}
