
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct bit_entry {int version; int length; int offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int ) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct bit_entry VAR_5;

 if (!FUNC_0(VAR_0, 'd', &VAR_5)) {
  if (VAR_5.version == 1 && VAR_5.length >= 2) {
   u16 VAR_6 = FUNC_2(VAR_0, VAR_5.offset);
   if (VAR_6) {
    *VAR_1 = FUNC_1(VAR_0, VAR_6 + 0x00);
    switch (*VAR_1) {
    case 0x20:
    case 0x21:
    case 0x30:
    case 0x40:
    case 0x41:
    case 0x42:
     *VAR_2 = FUNC_1(VAR_0, VAR_6 + 0x01);
     *VAR_4 = FUNC_1(VAR_0, VAR_6 + 0x02);
     *VAR_3 = FUNC_1(VAR_0, VAR_6 + 0x03);
     return VAR_6;
    default:
     break;
    }
   }
  }
 }

 return 0x0000;
}
