
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {scalar_t__ bmp_offset; } ;
struct bit_entry {int version; scalar_t__ offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2,
    u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 struct bit_entry VAR_7;
 u32 VAR_8 = 0;

 if (!FUNC_0(VAR_0, 'P', &VAR_7)) {
  if (VAR_7.version <= 2) {
   VAR_8 = FUNC_3(VAR_0, VAR_7.offset + 0);
   if (VAR_8) {
    *VAR_1 = FUNC_1(VAR_0, VAR_8 + 0);
    *VAR_2 = FUNC_1(VAR_0, VAR_8 + 1);
    if (*VAR_1 >= 0x40 && *VAR_1 < 0x41) {
     *VAR_3 = FUNC_1(VAR_0, VAR_8 + 5);
     *VAR_4 = FUNC_1(VAR_0, VAR_8 + 2);
     *VAR_5 = FUNC_1(VAR_0, VAR_8 + 4);
     *VAR_6 = FUNC_1(VAR_0, VAR_8 + 3);
     return VAR_8;
    } else
    if (*VAR_1 >= 0x20 && *VAR_1 < 0x40) {
     *VAR_3 = FUNC_1(VAR_0, VAR_8 + 2);
     *VAR_4 = FUNC_1(VAR_0, VAR_8 + 3);
     *VAR_5 = FUNC_1(VAR_0, VAR_8 + 4);
     *VAR_6 = FUNC_1(VAR_0, VAR_8 + 5);
     return VAR_8;
    }
   }
  }
 }

 if (VAR_0->bmp_offset) {
  if (FUNC_1(VAR_0, VAR_0->bmp_offset + 6) >= 0x25) {
   VAR_8 = FUNC_2(VAR_0, VAR_0->bmp_offset + 0x94);
   if (VAR_8) {
    *VAR_2 = FUNC_1(VAR_0, VAR_8 + 0);
    *VAR_1 = FUNC_1(VAR_0, VAR_8 + 1);
    *VAR_3 = FUNC_1(VAR_0, VAR_8 + 2);
    *VAR_4 = FUNC_1(VAR_0, VAR_8 + 3);
    *VAR_5 = 0;
    *VAR_6 = 0;
    return VAR_8;
   }
  }
 }

 return 0;
}
