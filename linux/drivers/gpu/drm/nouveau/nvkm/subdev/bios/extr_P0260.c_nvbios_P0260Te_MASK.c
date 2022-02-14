
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_3(struct nvkm_bios *VAR_0,
        u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 struct bit_entry VAR_7;
 u32 VAR_8 = 0x00000000;

 if (!FUNC_0(VAR_0, 'P', &VAR_7)) {
  if (VAR_7.version == 2 && VAR_7.length > 0x63)
   VAR_8 = FUNC_2(VAR_0, VAR_7.offset + 0x60);
  if (VAR_8) {
   *VAR_1 = FUNC_1(VAR_0, VAR_8 + 0);
   switch (*VAR_1) {
   case 0x10:
    *VAR_2 = FUNC_1(VAR_0, VAR_8 + 1);
    *VAR_3 = FUNC_1(VAR_0, VAR_8 + 2);
    *VAR_4 = 4;
    *VAR_5 = FUNC_1(VAR_0, VAR_8 + 3);
    *VAR_6 = 4;
    return VAR_8;
   default:
    break;
   }
  }
 }

 return 0x00000000;
}
