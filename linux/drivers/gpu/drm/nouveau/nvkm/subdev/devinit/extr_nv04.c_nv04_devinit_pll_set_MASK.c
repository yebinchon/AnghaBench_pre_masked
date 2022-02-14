
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_pll_vals {int N1; int M1; int N2; int M2; int log2P; int refclk; } ;
struct nvkm_devinit {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {int chip; } ;
struct nvkm_bios {TYPE_2__ version; } ;
struct nvbios_pll {int refclk; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,int,int*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int,struct nvbios_pll*) ;
 int FUNC_2 (struct nvkm_devinit*,int,struct nvkm_pll_vals*) ;
 int FUNC_3 (struct nvkm_devinit*,int,struct nvkm_pll_vals*) ;
 int FUNC_4 (struct nvkm_devinit*,int,struct nvkm_pll_vals*) ;

int
FUNC_5(struct nvkm_devinit *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->subdev;
 struct nvkm_bios *VAR_5 = VAR_4->device->bios;
 struct nvkm_pll_vals VAR_6;
 struct nvbios_pll VAR_7;
 int VAR_8 = VAR_5->version.chip;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_5, VAR_2 > 0x405c ? VAR_2 : VAR_2 - 4, &VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_4, &VAR_7, VAR_3, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13);
 if (!VAR_14)
  return -VAR_0;

 VAR_6.refclk = VAR_7.refclk;
 VAR_6.N1 = VAR_9;
 VAR_6.M1 = VAR_10;
 VAR_6.N2 = VAR_11;
 VAR_6.M2 = VAR_12;
 VAR_6.log2P = VAR_13;

 if (VAR_8 == 0x30 || VAR_8 == 0x31 || VAR_8 == 0x35 || VAR_8 == 0x36 ||
     VAR_8 >= 0x40) {
  if (VAR_2 > 0x405c)
   FUNC_2(VAR_1, VAR_2, &VAR_6);
  else
   FUNC_3(VAR_1, VAR_2, &VAR_6);
 } else
  FUNC_4(VAR_1, VAR_2, &VAR_6);

 return 0;
}
