
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct bit_entry {int version; scalar_t__ offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct bit_entry VAR_5;
 u32 VAR_6 = 0;

 if (!FUNC_0(VAR_0, 'P', &VAR_5)) {
  if (VAR_5.version == 2)
   VAR_6 = FUNC_2(VAR_0, VAR_5.offset + 0x0c);
  else
  if (VAR_5.version == 1)
   VAR_6 = FUNC_2(VAR_0, VAR_5.offset + 0x10);

  if (VAR_6) {
   *VAR_1 = FUNC_1(VAR_0, VAR_6 + 0);
   switch (*VAR_1) {
   case 0x12:
    *VAR_2 = 5;
    *VAR_3 = FUNC_1(VAR_0, VAR_6 + 2);
    *VAR_4 = FUNC_1(VAR_0, VAR_6 + 1);
    return VAR_6;
   case 0x20:
    *VAR_2 = FUNC_1(VAR_0, VAR_6 + 1);
    *VAR_3 = FUNC_1(VAR_0, VAR_6 + 2);
    *VAR_4 = FUNC_1(VAR_0, VAR_6 + 3);
    return VAR_6;
   case 0x30:
   case 0x40:
   case 0x50:
    *VAR_2 = FUNC_1(VAR_0, VAR_6 + 1);
    *VAR_3 = FUNC_1(VAR_0, VAR_6 + 3);
    *VAR_4 = FUNC_1(VAR_0, VAR_6 + 2);
    return VAR_6;
   }
  }
 }

 return 0;
}
