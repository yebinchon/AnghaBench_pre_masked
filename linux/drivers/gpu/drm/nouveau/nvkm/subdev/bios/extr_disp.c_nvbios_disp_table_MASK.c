
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct bit_entry {int version; int offset; } ;


 int FUNC_0 (struct nvkm_bios*,unsigned char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int ) ;

u16
FUNC_3(struct nvkm_bios *VAR_0,
    u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 struct bit_entry VAR_6;

 if (!FUNC_0(VAR_0, 'U', &VAR_6)) {
  if (VAR_6.version == 1) {
   u16 VAR_7 = FUNC_2(VAR_0, VAR_6.offset);
   if (VAR_7) {
    *VAR_1 = FUNC_1(VAR_0, VAR_7 + 0x00);
    switch (*VAR_1) {
    case 0x20:
    case 0x21:
    case 0x22:
     *VAR_2 = FUNC_1(VAR_0, VAR_7 + 0x01);
     *VAR_4 = FUNC_1(VAR_0, VAR_7 + 0x02);
     *VAR_3 = FUNC_1(VAR_0, VAR_7 + 0x03);
     *VAR_5 = FUNC_1(VAR_0, VAR_7 + 0x04);
     return VAR_7;
    default:
     break;
    }
   }
  }
 }

 return 0x0000;
}
