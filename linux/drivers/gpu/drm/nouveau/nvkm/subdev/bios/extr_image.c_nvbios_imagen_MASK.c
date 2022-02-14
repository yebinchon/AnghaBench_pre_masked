
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;
struct nvbios_pcirT {int image_type; int last; int image_size; } ;
struct nvbios_npdeT {int last; int image_size; } ;
struct nvbios_image {int type; int last; int size; scalar_t__ base; } ;


 int FUNC_0 (struct nvkm_bios*,scalar_t__,struct nvbios_npdeT*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__,int *,int *,struct nvbios_pcirT*) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_subdev*,char*,scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_4(struct nvkm_bios *VAR_0, struct nvbios_image *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->subdev;
 struct nvbios_pcirT VAR_3;
 struct nvbios_npdeT VAR_4;
 u8 VAR_5;
 u16 VAR_6;
 u32 VAR_7;

 switch ((VAR_7 = FUNC_2(VAR_0, VAR_1->base + 0x00))) {
 case 0xaa55:
 case 0xbb77:
 case 0x4e56:
  break;
 default:
  FUNC_3(VAR_2, "%08x: ROM signature (%04x) unknown\n",
      VAR_1->base, VAR_7);
  return 0;
 }

 if (!(VAR_7 = FUNC_1(VAR_0, VAR_1->base, &VAR_5, &VAR_6, &VAR_3)))
  return 0;
 VAR_1->size = VAR_3.image_size;
 VAR_1->type = VAR_3.image_type;
 VAR_1->last = VAR_3.last;

 if (VAR_1->type != 0x70) {
  if (!(VAR_7 = FUNC_0(VAR_0, VAR_1->base, &VAR_4)))
   return 1;
  VAR_1->size = VAR_4.image_size;
  VAR_1->last = VAR_4.last;
 } else {
  VAR_1->last = 1;
 }

 return 1;
}
