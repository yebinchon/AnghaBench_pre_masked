
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_ram {int ranks; int part_mask; } ;
struct nvkm_fb {int dummy; } ;
struct TYPE_2__ {void** r_gpio; void** r_mr; void** r_timing; void* r_0x611200; void* r_0x100e24; void* r_0x100e20; int r_0x100da0; void* r_0x10071c; void* r_0x100718; void* r_0x100714; void* r_0x100710; void* r_0x1005a4; void* r_0x1005a0; void* r_0x10053c; void* r_0x1002dc; void* r_0x1002d4; void* r_0x1002d0; void* r_0x10021c; void* r_0x100210; void* r_0x100200; void* r_0x00400c; void* r_0x004008; void* r_0x00c040; void* r_0x002504; } ;
struct nv50_ram {TYPE_1__ hwsq; struct nvkm_ram base; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int ) ;
 struct nv50_ram* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct nvkm_fb*,struct nvkm_ram*) ;
 int VAR_2 ;

int
FUNC_5(struct nvkm_fb *VAR_3, struct nvkm_ram **VAR_4)
{
 struct nv50_ram *VAR_5;
 int VAR_6, VAR_7;

 if (!(VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1)))
  return -VAR_0;
 *VAR_4 = &VAR_5->base;

 VAR_6 = FUNC_4(&VAR_2, VAR_3, &VAR_5->base);
 if (VAR_6)
  return VAR_6;

 VAR_5->hwsq.r_0x002504 = FUNC_0(0x002504);
 VAR_5->hwsq.r_0x00c040 = FUNC_0(0x00c040);
 VAR_5->hwsq.r_0x004008 = FUNC_0(0x004008);
 VAR_5->hwsq.r_0x00400c = FUNC_0(0x00400c);
 VAR_5->hwsq.r_0x100200 = FUNC_0(0x100200);
 VAR_5->hwsq.r_0x100210 = FUNC_0(0x100210);
 VAR_5->hwsq.r_0x10021c = FUNC_0(0x10021c);
 VAR_5->hwsq.r_0x1002d0 = FUNC_0(0x1002d0);
 VAR_5->hwsq.r_0x1002d4 = FUNC_0(0x1002d4);
 VAR_5->hwsq.r_0x1002dc = FUNC_0(0x1002dc);
 VAR_5->hwsq.r_0x10053c = FUNC_0(0x10053c);
 VAR_5->hwsq.r_0x1005a0 = FUNC_0(0x1005a0);
 VAR_5->hwsq.r_0x1005a4 = FUNC_0(0x1005a4);
 VAR_5->hwsq.r_0x100710 = FUNC_0(0x100710);
 VAR_5->hwsq.r_0x100714 = FUNC_0(0x100714);
 VAR_5->hwsq.r_0x100718 = FUNC_0(0x100718);
 VAR_5->hwsq.r_0x10071c = FUNC_0(0x10071c);
 VAR_5->hwsq.r_0x100da0 = FUNC_2(0x100da0, 4, VAR_5->base.part_mask);
 VAR_5->hwsq.r_0x100e20 = FUNC_0(0x100e20);
 VAR_5->hwsq.r_0x100e24 = FUNC_0(0x100e24);
 VAR_5->hwsq.r_0x611200 = FUNC_0(0x611200);

 for (VAR_7 = 0; VAR_7 < 9; VAR_7++)
  VAR_5->hwsq.r_timing[VAR_7] = FUNC_0(0x100220 + (VAR_7 * 0x04));

 if (VAR_5->base.ranks > 1) {
  VAR_5->hwsq.r_mr[0] = FUNC_1(0x1002c0, 0x1002c8);
  VAR_5->hwsq.r_mr[1] = FUNC_1(0x1002c4, 0x1002cc);
  VAR_5->hwsq.r_mr[2] = FUNC_1(0x1002e0, 0x1002e8);
  VAR_5->hwsq.r_mr[3] = FUNC_1(0x1002e4, 0x1002ec);
 } else {
  VAR_5->hwsq.r_mr[0] = FUNC_0(0x1002c0);
  VAR_5->hwsq.r_mr[1] = FUNC_0(0x1002c4);
  VAR_5->hwsq.r_mr[2] = FUNC_0(0x1002e0);
  VAR_5->hwsq.r_mr[3] = FUNC_0(0x1002e4);
 }

 VAR_5->hwsq.r_gpio[0] = FUNC_0(0x00e104);
 VAR_5->hwsq.r_gpio[1] = FUNC_0(0x00e108);
 VAR_5->hwsq.r_gpio[2] = FUNC_0(0x00e120);
 VAR_5->hwsq.r_gpio[3] = FUNC_0(0x00e124);

 return 0;
}
