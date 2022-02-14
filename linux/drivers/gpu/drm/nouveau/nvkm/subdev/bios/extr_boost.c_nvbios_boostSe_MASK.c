
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;



u32
FUNC_0(struct nvkm_bios *VAR_0, int VAR_1,
        u32 VAR_2, u8 *VAR_3, u8 *VAR_4, u8 VAR_5, u8 VAR_6)
{
 if (VAR_2 && VAR_1 < VAR_5) {
  VAR_2 = VAR_2 + *VAR_4 + (VAR_1 * VAR_6);
  *VAR_4 = VAR_6;
  return VAR_2;
 }
 return 0;
}
