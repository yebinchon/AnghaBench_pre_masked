
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {scalar_t__ bit_offset; } ;
struct bit_entry {void* offset; void* length; scalar_t__ version; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 void* FUNC_2 (struct nvkm_bios*,scalar_t__) ;

int
FUNC_3(struct nvkm_bios *VAR_2, u8 VAR_3, struct bit_entry *VAR_4)
{
 if (FUNC_0(VAR_2->bit_offset)) {
  u8 VAR_5 = FUNC_1(VAR_2, VAR_2->bit_offset + 10);
  u32 VAR_6 = VAR_2->bit_offset + 12;
  while (VAR_5--) {
   if (FUNC_1(VAR_2, VAR_6 + 0) == VAR_3) {
    VAR_4->id = FUNC_1(VAR_2, VAR_6 + 0);
    VAR_4->version = FUNC_1(VAR_2, VAR_6 + 1);
    VAR_4->length = FUNC_2(VAR_2, VAR_6 + 2);
    VAR_4->offset = FUNC_2(VAR_2, VAR_6 + 4);
    return 0;
   }

   VAR_6 += FUNC_1(VAR_2, VAR_2->bit_offset + 9);
  }

  return -VAR_1;
 }

 return -VAR_0;
}
