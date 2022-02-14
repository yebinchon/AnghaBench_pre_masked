
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;
struct bit_entry {int version; int length; int offset; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_subdev*,char*) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,int) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_0->subdev;
 struct bit_entry VAR_4;

 if (FUNC_0(VAR_0, 'x', &VAR_4)) {
  FUNC_1(VAR_3, "BIT 'x' table not present\n");
  return 0x0000;
 }

 *VAR_1 = VAR_4.version;
 *VAR_2 = VAR_4.length;
 if (*VAR_1 != 1 || *VAR_2 < 3) {
  FUNC_2(VAR_3, "BIT 'x' table %d/%d unknown\n", *VAR_1, *VAR_2);
  return 0x0000;
 }

 return VAR_4.offset;
}
