
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,scalar_t__) ;

__attribute__((used)) static u32
FUNC_3(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3,
        u8 *VAR_4)
{
 struct bit_entry VAR_5;
 u32 VAR_6;

 if (FUNC_0(VAR_0, 'P', &VAR_5) || VAR_5.version != 2 ||
     VAR_5.length < 0x2c)
  return 0;

 VAR_6 = FUNC_2(VAR_0, VAR_5.offset + 0x28);
 if (!VAR_6)
  return 0;

 *VAR_1 = FUNC_1(VAR_0, VAR_6 + 0);
 switch (*VAR_1) {
 case 0x10:
 case 0x20:
  *VAR_2 = FUNC_1(VAR_0, VAR_6 + 1);
  *VAR_4 = FUNC_1(VAR_0, VAR_6 + 2);
  *VAR_3 = FUNC_1(VAR_0, VAR_6 + 3);
  return VAR_6;
 default:
  break;
 }

 return 0;
}
