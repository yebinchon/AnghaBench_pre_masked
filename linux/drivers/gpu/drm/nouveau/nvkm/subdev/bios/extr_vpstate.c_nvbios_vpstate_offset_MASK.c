
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;

__attribute__((used)) static u32
FUNC_2(struct nvkm_bios *VAR_0)
{
 struct bit_entry VAR_1;

 if (!FUNC_0(VAR_0, 'P', &VAR_1)) {
  if (VAR_1.version == 2 && VAR_1.length >= 0x3c)
   return FUNC_1(VAR_0, VAR_1.offset + 0x38);
 }

 return 0x0000;
}
