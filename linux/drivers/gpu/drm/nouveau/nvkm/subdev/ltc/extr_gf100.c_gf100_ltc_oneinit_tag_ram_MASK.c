
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_ram {int size; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {int num_tags; int ltc_nr; int tag_base; int tag_ram; TYPE_1__ subdev; } ;
struct nvkm_fb {int tags; struct nvkm_ram* ram; } ;
struct nvkm_device {struct nvkm_fb* fb; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int,int) ;
 int FUNC_4 (struct nvkm_device*,int ,int,int,int,int,int,int *) ;
 int FUNC_5 (struct nvkm_device*,int) ;

int
FUNC_6(struct nvkm_ltc *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 struct nvkm_fb *VAR_3 = VAR_2->fb;
 struct nvkm_ram *VAR_4 = VAR_3->ram;
 u32 VAR_5 = (FUNC_5(VAR_2, 0x100c80) & 0x00001000) ? 16 : 17;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;


 if (!VAR_4) {
  VAR_1->num_tags = 0;
  goto mm_init;
 }


 VAR_1->num_tags = (VAR_4->size >> 17) / 4;
 if (VAR_1->num_tags > (1 << VAR_5))
  VAR_1->num_tags = 1 << VAR_5;
 VAR_1->num_tags = (VAR_1->num_tags + 63) & ~63;

 VAR_8 = VAR_1->ltc_nr * 0x800;
 VAR_7 = (VAR_8 < 0x6000) ? 0x6000 : VAR_8;
 VAR_6 = (VAR_1->num_tags / 64) * 0x6000 + VAR_7;
 VAR_6 += VAR_8;

 VAR_9 = FUNC_4(VAR_2, VAR_0, 0x01, 12, VAR_6,
      1, 1, &VAR_1->tag_ram);
 if (VAR_9) {
  VAR_1->num_tags = 0;
 } else {
  u64 VAR_10 = FUNC_1(VAR_1->tag_ram) + VAR_7;

  VAR_10 += VAR_8 - 1;
  FUNC_0(VAR_10, VAR_8);

  VAR_1->tag_base = VAR_10;
 }

mm_init:
 FUNC_2(&VAR_3->tags);
 return FUNC_3(&VAR_3->tags, 0, 0, VAR_1->num_tags, 1);
}
