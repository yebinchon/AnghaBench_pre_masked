
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvkm_bios {int bmp_offset; int subdev; } ;
struct nvbios_init {int * subdev; } ;


 int FUNC_0 (struct nvkm_bios*) ;
 int FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

__attribute__((used)) static u16
FUNC_3(struct nvkm_bios *VAR_0, int VAR_1)
{
 struct nvbios_init VAR_2 = { .subdev = &VAR_0->subdev };
 u16 VAR_3 = FUNC_0(VAR_0), VAR_4;

 if (VAR_3 && VAR_3 < 0x0510) {
  if (VAR_1 > 1 || VAR_3 < 0x0100)
   return 0x0000;

  VAR_4 = VAR_0->bmp_offset + (VAR_3 < 0x0200 ? 14 : 18);
  return FUNC_2(VAR_0, VAR_4 + (VAR_1 * 2));
 }

 VAR_4 = FUNC_1(&VAR_2);
 if (VAR_4)
  return FUNC_2(VAR_0, VAR_4 + (VAR_1 * 2));

 return 0x0000;
}
