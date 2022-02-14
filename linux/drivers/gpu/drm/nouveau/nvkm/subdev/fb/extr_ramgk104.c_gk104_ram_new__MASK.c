
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_ram_func {int dummy; } ;
struct nvkm_ram {int type; } ;
struct nvkm_fb {struct nvkm_subdev subdev; } ;
struct nvkm_device {int gpio; struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_2__ {int* r_funcMV; int* r_func2E; void* r_0x100750; void* r_0x100710; void* r_0x10f6bc; void* r_0x10f65c; void* r_0x137320; void* r_0x1373f4; void* r_0x1373f0; void* r_0x10f824; void* r_0x10f69c; void* r_0x10f090; void* r_0x10f318; void* r_0x10f314; void* r_0x10f310; void* r_0x10f210; void* r_0x10f200; void* r_0x62c000; void** r_mr; void* r_0x10f914; void* r_0x10f910; void* r_0x10f978; void* r_0x10f82c; void* r_0x10f800; void* r_0x1373ec; void* r_0x10f830; void* r_0x10f60c; void* r_0x10f670; void* r_0x10f808; void* r_0x10f6b8; void* r_0x10f694; void* r_0x10f698; void* r_0x10f870; void* r_0x10f224; void* r_0x100778; void* r_0x100770; void* r_0x10f610; void* r_0x10f614; void* r_0x10f604; void* r_0x10fec8; void* r_0x10fec4; void* r_0x10f24c; void* r_0x10f250; void* r_0x10f2e8; void* r_0x10f2cc; void* r_0x10f2ac; void* r_0x10f2a8; void* r_0x10f2a4; void* r_0x10f2a0; void* r_0x10f29c; void* r_0x10f298; void* r_0x10f294; void* r_0x10f290; void* r_0x10f248; void* r_0x132040; void* r_0x132004; void* r_0x132000; void* r_0x132034; void* r_0x132030; void* r_0x132024; void* r_0x132028; void* r_0x132020; void* r_gpiotrig; void* r_gpio2E; void* r_gpioMV; int mempll; int refpll; } ;
struct gk104_ram {int parts; int pmask; int pnuts; TYPE_1__ fuc; struct nvkm_ram base; int cfg; } ;
struct dcb_gpio_func {int line; int* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;


 int FUNC_1 (struct nvkm_ram_func const*,struct nvkm_fb*,struct nvkm_ram*) ;
 int FUNC_2 (struct gk104_ram*,int ,int) ;
 struct gk104_ram* FUNC_3 (int,int ) ;
 int FUNC_4 (struct nvkm_bios*,int,int *) ;
 int FUNC_5 (struct nvkm_subdev*) ;
 int FUNC_6 (struct nvkm_subdev*,char*) ;
 int FUNC_7 (int ,int ,int,int ,struct dcb_gpio_func*) ;
 void* FUNC_8 (struct nvkm_device*,int) ;
 void* FUNC_9 (int) ;

int
FUNC_10(const struct nvkm_ram_func *VAR_4, struct nvkm_fb *VAR_5,
        struct nvkm_ram **VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_5->subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 struct nvkm_bios *VAR_9 = VAR_8->bios;
 struct dcb_gpio_func VAR_10;
 struct gk104_ram *VAR_11;
 int VAR_12, VAR_13;
 u8 VAR_14 = FUNC_5(VAR_7);
 u32 VAR_15;

 if (!(VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_3)))
  return -VAR_2;
 *VAR_6 = &VAR_11->base;

 VAR_12 = FUNC_1(VAR_4, VAR_5, &VAR_11->base);
 if (VAR_12)
  return VAR_12;

 FUNC_0(&VAR_11->cfg);






 VAR_11->parts = FUNC_8(VAR_8, 0x022438);
 VAR_11->pmask = FUNC_8(VAR_8, 0x022554);
 VAR_11->pnuts = 0;
 for (VAR_13 = 0, VAR_15 = 0; VAR_13 < VAR_11->parts; VAR_13++) {
  if (!(VAR_11->pmask & (1 << VAR_13))) {
   u32 VAR_16 = FUNC_8(VAR_8, 0x110204 + (VAR_13 * 0x1000));
   if (VAR_15 && VAR_15 != VAR_16) {
    VAR_11->pnuts |= (1 << VAR_13);
    continue;
   }
   VAR_15 = VAR_16;
  }
 }
 for (VAR_13 = 0; !VAR_12; VAR_13++) {
  VAR_12 = FUNC_2(VAR_11, VAR_14, VAR_13);
  if (VAR_12 && VAR_12 != -VAR_1) {
   FUNC_6(VAR_7, "failed to parse ramcfg data\n");
   return VAR_12;
  }
 }


 VAR_12 = FUNC_4(VAR_9, 0x0c, &VAR_11->fuc.refpll);
 if (VAR_12) {
  FUNC_6(VAR_7, "mclk refpll data not found\n");
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_9, 0x04, &VAR_11->fuc.mempll);
 if (VAR_12) {
  FUNC_6(VAR_7, "mclk pll data not found\n");
  return VAR_12;
 }


 VAR_12 = FUNC_7(VAR_8->gpio, 0, 0x18, VAR_0, &VAR_10);
 if (VAR_12 == 0) {
  VAR_11->fuc.r_gpioMV = FUNC_9(0x00d610 + (VAR_10.line * 0x04));
  VAR_11->fuc.r_funcMV[0] = (VAR_10.log[0] ^ 2) << 12;
  VAR_11->fuc.r_funcMV[1] = (VAR_10.log[1] ^ 2) << 12;
 }

 VAR_12 = FUNC_7(VAR_8->gpio, 0, 0x2e, VAR_0, &VAR_10);
 if (VAR_12 == 0) {
  VAR_11->fuc.r_gpio2E = FUNC_9(0x00d610 + (VAR_10.line * 0x04));
  VAR_11->fuc.r_func2E[0] = (VAR_10.log[0] ^ 2) << 12;
  VAR_11->fuc.r_func2E[1] = (VAR_10.log[1] ^ 2) << 12;
 }

 VAR_11->fuc.r_gpiotrig = FUNC_9(0x00d604);

 VAR_11->fuc.r_0x132020 = FUNC_9(0x132020);
 VAR_11->fuc.r_0x132028 = FUNC_9(0x132028);
 VAR_11->fuc.r_0x132024 = FUNC_9(0x132024);
 VAR_11->fuc.r_0x132030 = FUNC_9(0x132030);
 VAR_11->fuc.r_0x132034 = FUNC_9(0x132034);
 VAR_11->fuc.r_0x132000 = FUNC_9(0x132000);
 VAR_11->fuc.r_0x132004 = FUNC_9(0x132004);
 VAR_11->fuc.r_0x132040 = FUNC_9(0x132040);

 VAR_11->fuc.r_0x10f248 = FUNC_9(0x10f248);
 VAR_11->fuc.r_0x10f290 = FUNC_9(0x10f290);
 VAR_11->fuc.r_0x10f294 = FUNC_9(0x10f294);
 VAR_11->fuc.r_0x10f298 = FUNC_9(0x10f298);
 VAR_11->fuc.r_0x10f29c = FUNC_9(0x10f29c);
 VAR_11->fuc.r_0x10f2a0 = FUNC_9(0x10f2a0);
 VAR_11->fuc.r_0x10f2a4 = FUNC_9(0x10f2a4);
 VAR_11->fuc.r_0x10f2a8 = FUNC_9(0x10f2a8);
 VAR_11->fuc.r_0x10f2ac = FUNC_9(0x10f2ac);
 VAR_11->fuc.r_0x10f2cc = FUNC_9(0x10f2cc);
 VAR_11->fuc.r_0x10f2e8 = FUNC_9(0x10f2e8);
 VAR_11->fuc.r_0x10f250 = FUNC_9(0x10f250);
 VAR_11->fuc.r_0x10f24c = FUNC_9(0x10f24c);
 VAR_11->fuc.r_0x10fec4 = FUNC_9(0x10fec4);
 VAR_11->fuc.r_0x10fec8 = FUNC_9(0x10fec8);
 VAR_11->fuc.r_0x10f604 = FUNC_9(0x10f604);
 VAR_11->fuc.r_0x10f614 = FUNC_9(0x10f614);
 VAR_11->fuc.r_0x10f610 = FUNC_9(0x10f610);
 VAR_11->fuc.r_0x100770 = FUNC_9(0x100770);
 VAR_11->fuc.r_0x100778 = FUNC_9(0x100778);
 VAR_11->fuc.r_0x10f224 = FUNC_9(0x10f224);

 VAR_11->fuc.r_0x10f870 = FUNC_9(0x10f870);
 VAR_11->fuc.r_0x10f698 = FUNC_9(0x10f698);
 VAR_11->fuc.r_0x10f694 = FUNC_9(0x10f694);
 VAR_11->fuc.r_0x10f6b8 = FUNC_9(0x10f6b8);
 VAR_11->fuc.r_0x10f808 = FUNC_9(0x10f808);
 VAR_11->fuc.r_0x10f670 = FUNC_9(0x10f670);
 VAR_11->fuc.r_0x10f60c = FUNC_9(0x10f60c);
 VAR_11->fuc.r_0x10f830 = FUNC_9(0x10f830);
 VAR_11->fuc.r_0x1373ec = FUNC_9(0x1373ec);
 VAR_11->fuc.r_0x10f800 = FUNC_9(0x10f800);
 VAR_11->fuc.r_0x10f82c = FUNC_9(0x10f82c);

 VAR_11->fuc.r_0x10f978 = FUNC_9(0x10f978);
 VAR_11->fuc.r_0x10f910 = FUNC_9(0x10f910);
 VAR_11->fuc.r_0x10f914 = FUNC_9(0x10f914);

 switch (VAR_11->base.type) {
 case 128:
  VAR_11->fuc.r_mr[0] = FUNC_9(0x10f300);
  VAR_11->fuc.r_mr[1] = FUNC_9(0x10f330);
  VAR_11->fuc.r_mr[2] = FUNC_9(0x10f334);
  VAR_11->fuc.r_mr[3] = FUNC_9(0x10f338);
  VAR_11->fuc.r_mr[4] = FUNC_9(0x10f33c);
  VAR_11->fuc.r_mr[5] = FUNC_9(0x10f340);
  VAR_11->fuc.r_mr[6] = FUNC_9(0x10f344);
  VAR_11->fuc.r_mr[7] = FUNC_9(0x10f348);
  VAR_11->fuc.r_mr[8] = FUNC_9(0x10f354);
  VAR_11->fuc.r_mr[15] = FUNC_9(0x10f34c);
  break;
 case 129:
  VAR_11->fuc.r_mr[0] = FUNC_9(0x10f300);
  VAR_11->fuc.r_mr[1] = FUNC_9(0x10f304);
  VAR_11->fuc.r_mr[2] = FUNC_9(0x10f320);
  break;
 default:
  break;
 }

 VAR_11->fuc.r_0x62c000 = FUNC_9(0x62c000);
 VAR_11->fuc.r_0x10f200 = FUNC_9(0x10f200);
 VAR_11->fuc.r_0x10f210 = FUNC_9(0x10f210);
 VAR_11->fuc.r_0x10f310 = FUNC_9(0x10f310);
 VAR_11->fuc.r_0x10f314 = FUNC_9(0x10f314);
 VAR_11->fuc.r_0x10f318 = FUNC_9(0x10f318);
 VAR_11->fuc.r_0x10f090 = FUNC_9(0x10f090);
 VAR_11->fuc.r_0x10f69c = FUNC_9(0x10f69c);
 VAR_11->fuc.r_0x10f824 = FUNC_9(0x10f824);
 VAR_11->fuc.r_0x1373f0 = FUNC_9(0x1373f0);
 VAR_11->fuc.r_0x1373f4 = FUNC_9(0x1373f4);
 VAR_11->fuc.r_0x137320 = FUNC_9(0x137320);
 VAR_11->fuc.r_0x10f65c = FUNC_9(0x10f65c);
 VAR_11->fuc.r_0x10f6bc = FUNC_9(0x10f6bc);
 VAR_11->fuc.r_0x100710 = FUNC_9(0x100710);
 VAR_11->fuc.r_0x100750 = FUNC_9(0x100750);
 return 0;
}
