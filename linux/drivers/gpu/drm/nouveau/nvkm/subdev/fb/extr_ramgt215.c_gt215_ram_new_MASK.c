
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_ram {int ranks; int part_mask; } ;
struct nvkm_fb {int dummy; } ;
struct TYPE_2__ {void** r_gpio; void** r_mr; void* r_0x611200; void* r_0x111400; void* r_0x1111e0; void* r_0x111104; void* r_0x111100; void* r_0x1110e0; void* r_0x10f804; void* r_0x100da0; void* r_0x1007e0; void* r_0x1007a0; void* r_0x100760; void* r_0x100720; void* r_0x10071c; void* r_0x100718; void* r_0x100714; void* r_0x100700; void* r_0x1005a4; void* r_0x1005a0; void* r_0x10053c; void* r_0x1002dc; void* r_0x1002d4; void* r_0x1002d0; void* r_0x100264; void** r_0x100220; void* r_0x100210; void* r_0x100200; void* r_0x100080; void* r_0x004168; void* r_0x004128; void* r_0x004018; void* r_0x004004; void* r_0x004000; void* r_0x002504; void* r_0x001700; void* r_0x001610; } ;
struct gt215_ram {TYPE_1__ fuc; struct nvkm_ram base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gt215_ram* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_fb*,struct nvkm_ram*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int,int) ;
 void* FUNC_4 (int,int,int ) ;

int
FUNC_5(struct nvkm_fb *VAR_3, struct nvkm_ram **VAR_4)
{
 struct gt215_ram *VAR_5;
 int VAR_6, VAR_7;

 if (!(VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1)))
  return -VAR_0;
 *VAR_4 = &VAR_5->base;

 VAR_6 = FUNC_1(&VAR_2, VAR_3, &VAR_5->base);
 if (VAR_6)
  return VAR_6;

 VAR_5->fuc.r_0x001610 = FUNC_2(0x001610);
 VAR_5->fuc.r_0x001700 = FUNC_2(0x001700);
 VAR_5->fuc.r_0x002504 = FUNC_2(0x002504);
 VAR_5->fuc.r_0x004000 = FUNC_2(0x004000);
 VAR_5->fuc.r_0x004004 = FUNC_2(0x004004);
 VAR_5->fuc.r_0x004018 = FUNC_2(0x004018);
 VAR_5->fuc.r_0x004128 = FUNC_2(0x004128);
 VAR_5->fuc.r_0x004168 = FUNC_2(0x004168);
 VAR_5->fuc.r_0x100080 = FUNC_2(0x100080);
 VAR_5->fuc.r_0x100200 = FUNC_2(0x100200);
 VAR_5->fuc.r_0x100210 = FUNC_2(0x100210);
 for (VAR_7 = 0; VAR_7 < 9; VAR_7++)
  VAR_5->fuc.r_0x100220[VAR_7] = FUNC_2(0x100220 + (VAR_7 * 4));
 VAR_5->fuc.r_0x100264 = FUNC_2(0x100264);
 VAR_5->fuc.r_0x1002d0 = FUNC_2(0x1002d0);
 VAR_5->fuc.r_0x1002d4 = FUNC_2(0x1002d4);
 VAR_5->fuc.r_0x1002dc = FUNC_2(0x1002dc);
 VAR_5->fuc.r_0x10053c = FUNC_2(0x10053c);
 VAR_5->fuc.r_0x1005a0 = FUNC_2(0x1005a0);
 VAR_5->fuc.r_0x1005a4 = FUNC_2(0x1005a4);
 VAR_5->fuc.r_0x100700 = FUNC_2(0x100700);
 VAR_5->fuc.r_0x100714 = FUNC_2(0x100714);
 VAR_5->fuc.r_0x100718 = FUNC_2(0x100718);
 VAR_5->fuc.r_0x10071c = FUNC_2(0x10071c);
 VAR_5->fuc.r_0x100720 = FUNC_2(0x100720);
 VAR_5->fuc.r_0x100760 = FUNC_4(0x100760, 4, VAR_5->base.part_mask);
 VAR_5->fuc.r_0x1007a0 = FUNC_4(0x1007a0, 4, VAR_5->base.part_mask);
 VAR_5->fuc.r_0x1007e0 = FUNC_4(0x1007e0, 4, VAR_5->base.part_mask);
 VAR_5->fuc.r_0x100da0 = FUNC_4(0x100da0, 4, VAR_5->base.part_mask);
 VAR_5->fuc.r_0x10f804 = FUNC_2(0x10f804);
 VAR_5->fuc.r_0x1110e0 = FUNC_4(0x1110e0, 4, VAR_5->base.part_mask);
 VAR_5->fuc.r_0x111100 = FUNC_2(0x111100);
 VAR_5->fuc.r_0x111104 = FUNC_2(0x111104);
 VAR_5->fuc.r_0x1111e0 = FUNC_2(0x1111e0);
 VAR_5->fuc.r_0x111400 = FUNC_2(0x111400);
 VAR_5->fuc.r_0x611200 = FUNC_2(0x611200);

 if (VAR_5->base.ranks > 1) {
  VAR_5->fuc.r_mr[0] = FUNC_3(0x1002c0, 0x1002c8);
  VAR_5->fuc.r_mr[1] = FUNC_3(0x1002c4, 0x1002cc);
  VAR_5->fuc.r_mr[2] = FUNC_3(0x1002e0, 0x1002e8);
  VAR_5->fuc.r_mr[3] = FUNC_3(0x1002e4, 0x1002ec);
 } else {
  VAR_5->fuc.r_mr[0] = FUNC_2(0x1002c0);
  VAR_5->fuc.r_mr[1] = FUNC_2(0x1002c4);
  VAR_5->fuc.r_mr[2] = FUNC_2(0x1002e0);
  VAR_5->fuc.r_mr[3] = FUNC_2(0x1002e4);
 }
 VAR_5->fuc.r_gpio[0] = FUNC_2(0x00e104);
 VAR_5->fuc.r_gpio[1] = FUNC_2(0x00e108);
 VAR_5->fuc.r_gpio[2] = FUNC_2(0x00e120);
 VAR_5->fuc.r_gpio[3] = FUNC_2(0x00e124);

 return 0;
}
