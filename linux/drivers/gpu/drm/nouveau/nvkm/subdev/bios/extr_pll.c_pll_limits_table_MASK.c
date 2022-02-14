
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {scalar_t__ bmp_offset; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_4 (struct nvkm_bios*,scalar_t__) ;

__attribute__((used)) static u32
FUNC_5(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct bit_entry VAR_5;
 u32 VAR_6 = 0x0000;

 if (!FUNC_0(VAR_0, 'C', &VAR_5)) {
  if (VAR_5.version == 1 && VAR_5.length >= 10)
   VAR_6 = FUNC_3(VAR_0, VAR_5.offset + 8);
  if (VAR_5.version == 2 && VAR_5.length >= 4)
   VAR_6 = FUNC_4(VAR_0, VAR_5.offset + 0);
  if (VAR_6) {
   *VAR_1 = FUNC_2(VAR_0, VAR_6 + 0);
   *VAR_2 = FUNC_2(VAR_0, VAR_6 + 1);
   *VAR_4 = FUNC_2(VAR_0, VAR_6 + 2);
   *VAR_3 = FUNC_2(VAR_0, VAR_6 + 3);
   return VAR_6;
  }
 }

 if (FUNC_1(VAR_0) >= 0x0524) {
  VAR_6 = FUNC_3(VAR_0, VAR_0->bmp_offset + 142);
  if (VAR_6) {
   *VAR_1 = FUNC_2(VAR_0, VAR_6 + 0);
   *VAR_2 = 1;
   *VAR_3 = 1;
   *VAR_4 = 0x18;
   return VAR_6;
  }
 }

 *VAR_1 = 0x00;
 return VAR_6;
}
