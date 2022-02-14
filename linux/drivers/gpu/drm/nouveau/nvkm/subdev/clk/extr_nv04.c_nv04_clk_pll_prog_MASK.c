
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_pll_vals {int dummy; } ;
struct nvkm_devinit {int dummy; } ;
struct nvkm_device {TYPE_3__* bios; struct nvkm_devinit* devinit; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_clk {TYPE_1__ subdev; } ;
struct TYPE_5__ {int chip; } ;
struct TYPE_6__ {TYPE_2__ version; } ;


 int FUNC_0 (struct nvkm_devinit*,int,struct nvkm_pll_vals*) ;
 int FUNC_1 (struct nvkm_devinit*,int,struct nvkm_pll_vals*) ;
 int FUNC_2 (struct nvkm_devinit*,int,struct nvkm_pll_vals*) ;

int
FUNC_3(struct nvkm_clk *VAR_0, u32 VAR_1, struct nvkm_pll_vals *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 struct nvkm_devinit *VAR_4 = VAR_3->devinit;
 int VAR_5 = VAR_3->bios->version.chip;

 if (VAR_5 == 0x30 || VAR_5 == 0x31 || VAR_5 == 0x35 || VAR_5 == 0x36 ||
     VAR_5 >= 0x40) {
  if (VAR_1 > 0x405c)
   FUNC_0(VAR_4, VAR_1, VAR_2);
  else
   FUNC_1(VAR_4, VAR_1, VAR_2);
 } else
  FUNC_2(VAR_4, VAR_1, VAR_2);

 return 0;
}
