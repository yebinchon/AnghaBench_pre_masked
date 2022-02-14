
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_ram_func {int dummy; } ;
struct nvkm_ram {int dummy; } ;
struct nvkm_fb {struct nvkm_subdev subdev; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_4__ {void* r_0x13d8f4; void* r_0x611200; void* r_0x61c140; void* r_0x1373f8; void* r_0x1373f0; void* r_0x1373ec; void* r_0x137360; void* r_0x137310; void* r_0x10fb08; void* r_0x10fb04; void* r_0x10f9b4; void* r_0x10f9b0; void* r_0x10f998; void* r_0x10f990; void* r_0x10f98c; void* r_0x10f988; void* r_0x10f830; void* r_0x10f824; void* r_0x10f808; void* r_0x10f800; void* r_0x10f614; void* r_0x10f610; void* r_0x10f314; void* r_0x10f310; void* r_0x10f210; void* r_0x10f200; void* r_0x10f090; void* r_0x10f050; void* r_0x100b0c; void* r_0x10f914; void* r_0x10f910; void* r_0x10f348; void* r_0x10f344; void* r_0x10f340; void* r_0x10f338; void* r_0x10f300; void* r_0x10f2a0; void* r_0x10f29c; void* r_0x10f298; void* r_0x10f294; void* r_0x10f290; void* r_0x137390; void* r_0x132100; void* r_0x132004; void* r_0x132000; void* r_0x137330; void* r_0x137320; void* r_0x10fe24; void* r_0x10fe20; } ;
struct gf100_ram {TYPE_2__ fuc; int mempll; int refpll; struct nvkm_ram base; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_ram_func const*,struct nvkm_fb*,struct nvkm_ram*) ;
 struct gf100_ram* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvkm_bios*,int,int *) ;
 int FUNC_3 (struct nvkm_subdev*,char*) ;
 void* FUNC_4 (int) ;

int
FUNC_5(const struct nvkm_ram_func *VAR_2,
        struct nvkm_fb *VAR_3, struct nvkm_ram **VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_3->subdev;
 struct nvkm_bios *VAR_6 = VAR_5->device->bios;
 struct gf100_ram *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 *VAR_4 = &VAR_7->base;

 VAR_8 = FUNC_0(VAR_2, VAR_3, &VAR_7->base);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, 0x0c, &VAR_7->refpll);
 if (VAR_8) {
  FUNC_3(VAR_5, "mclk refpll data not found\n");
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_6, 0x04, &VAR_7->mempll);
 if (VAR_8) {
  FUNC_3(VAR_5, "mclk pll data not found\n");
  return VAR_8;
 }

 VAR_7->fuc.r_0x10fe20 = FUNC_4(0x10fe20);
 VAR_7->fuc.r_0x10fe24 = FUNC_4(0x10fe24);
 VAR_7->fuc.r_0x137320 = FUNC_4(0x137320);
 VAR_7->fuc.r_0x137330 = FUNC_4(0x137330);

 VAR_7->fuc.r_0x132000 = FUNC_4(0x132000);
 VAR_7->fuc.r_0x132004 = FUNC_4(0x132004);
 VAR_7->fuc.r_0x132100 = FUNC_4(0x132100);

 VAR_7->fuc.r_0x137390 = FUNC_4(0x137390);

 VAR_7->fuc.r_0x10f290 = FUNC_4(0x10f290);
 VAR_7->fuc.r_0x10f294 = FUNC_4(0x10f294);
 VAR_7->fuc.r_0x10f298 = FUNC_4(0x10f298);
 VAR_7->fuc.r_0x10f29c = FUNC_4(0x10f29c);
 VAR_7->fuc.r_0x10f2a0 = FUNC_4(0x10f2a0);

 VAR_7->fuc.r_0x10f300 = FUNC_4(0x10f300);
 VAR_7->fuc.r_0x10f338 = FUNC_4(0x10f338);
 VAR_7->fuc.r_0x10f340 = FUNC_4(0x10f340);
 VAR_7->fuc.r_0x10f344 = FUNC_4(0x10f344);
 VAR_7->fuc.r_0x10f348 = FUNC_4(0x10f348);

 VAR_7->fuc.r_0x10f910 = FUNC_4(0x10f910);
 VAR_7->fuc.r_0x10f914 = FUNC_4(0x10f914);

 VAR_7->fuc.r_0x100b0c = FUNC_4(0x100b0c);
 VAR_7->fuc.r_0x10f050 = FUNC_4(0x10f050);
 VAR_7->fuc.r_0x10f090 = FUNC_4(0x10f090);
 VAR_7->fuc.r_0x10f200 = FUNC_4(0x10f200);
 VAR_7->fuc.r_0x10f210 = FUNC_4(0x10f210);
 VAR_7->fuc.r_0x10f310 = FUNC_4(0x10f310);
 VAR_7->fuc.r_0x10f314 = FUNC_4(0x10f314);
 VAR_7->fuc.r_0x10f610 = FUNC_4(0x10f610);
 VAR_7->fuc.r_0x10f614 = FUNC_4(0x10f614);
 VAR_7->fuc.r_0x10f800 = FUNC_4(0x10f800);
 VAR_7->fuc.r_0x10f808 = FUNC_4(0x10f808);
 VAR_7->fuc.r_0x10f824 = FUNC_4(0x10f824);
 VAR_7->fuc.r_0x10f830 = FUNC_4(0x10f830);
 VAR_7->fuc.r_0x10f988 = FUNC_4(0x10f988);
 VAR_7->fuc.r_0x10f98c = FUNC_4(0x10f98c);
 VAR_7->fuc.r_0x10f990 = FUNC_4(0x10f990);
 VAR_7->fuc.r_0x10f998 = FUNC_4(0x10f998);
 VAR_7->fuc.r_0x10f9b0 = FUNC_4(0x10f9b0);
 VAR_7->fuc.r_0x10f9b4 = FUNC_4(0x10f9b4);
 VAR_7->fuc.r_0x10fb04 = FUNC_4(0x10fb04);
 VAR_7->fuc.r_0x10fb08 = FUNC_4(0x10fb08);
 VAR_7->fuc.r_0x137310 = FUNC_4(0x137300);
 VAR_7->fuc.r_0x137310 = FUNC_4(0x137310);
 VAR_7->fuc.r_0x137360 = FUNC_4(0x137360);
 VAR_7->fuc.r_0x1373ec = FUNC_4(0x1373ec);
 VAR_7->fuc.r_0x1373f0 = FUNC_4(0x1373f0);
 VAR_7->fuc.r_0x1373f8 = FUNC_4(0x1373f8);

 VAR_7->fuc.r_0x61c140 = FUNC_4(0x61c140);
 VAR_7->fuc.r_0x611200 = FUNC_4(0x611200);

 VAR_7->fuc.r_0x13d8f4 = FUNC_4(0x13d8f4);
 return 0;
}
