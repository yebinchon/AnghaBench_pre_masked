
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvkm_bios {int bmp_offset; } ;
struct bit_entry {int length; int offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*) ;

__attribute__((used)) static u16
FUNC_2(struct nvkm_bios *VAR_0, u16 *VAR_1)
{
 struct bit_entry VAR_2;

 if (!FUNC_0(VAR_0, 'I', &VAR_2)) {
  *VAR_1 = VAR_2.length;
  return VAR_2.offset;
 }

 if (FUNC_1(VAR_0) >= 0x0510) {
  *VAR_1 = 14;
  return VAR_0->bmp_offset + 75;
 }

 return 0x0000;
}
