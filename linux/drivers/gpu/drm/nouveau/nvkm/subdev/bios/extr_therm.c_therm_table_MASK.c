
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int subdev; } ;
struct bit_entry {int version; scalar_t__ offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static u32
FUNC_4(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct bit_entry VAR_5;
 u32 VAR_6 = 0;

 if (!FUNC_0(VAR_0, 'P', &VAR_5)) {
  if (VAR_5.version == 1)
   VAR_6 = FUNC_2(VAR_0, VAR_5.offset + 12);
  else if (VAR_5.version == 2)
   VAR_6 = FUNC_2(VAR_0, VAR_5.offset + 16);
  else
   FUNC_3(&VAR_0->subdev,
       "unknown offset for thermal in BIT P %d\n",
       VAR_5.version);
 }


 if (!VAR_6)
  return 0;

 *VAR_1 = FUNC_1(VAR_0, VAR_6 + 0);
 *VAR_2 = FUNC_1(VAR_0, VAR_6 + 1);
 *VAR_3 = FUNC_1(VAR_0, VAR_6 + 2);
 *VAR_4 = FUNC_1(VAR_0, VAR_6 + 3);
 return VAR_6 + FUNC_1(VAR_0, VAR_6 + 1);
}
