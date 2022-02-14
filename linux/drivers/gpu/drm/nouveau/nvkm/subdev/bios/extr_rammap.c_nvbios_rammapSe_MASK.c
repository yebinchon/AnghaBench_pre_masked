
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;



u32
FUNC_0(struct nvkm_bios *VAR_0, u32 VAR_1,
  u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5, int VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 if (VAR_6 < VAR_4) {
  VAR_1 = VAR_1 + VAR_3 + (VAR_6 * VAR_5);
  *VAR_7 = VAR_2;
  *VAR_8 = VAR_5;
  return VAR_1;
 }
 return 0;
}
