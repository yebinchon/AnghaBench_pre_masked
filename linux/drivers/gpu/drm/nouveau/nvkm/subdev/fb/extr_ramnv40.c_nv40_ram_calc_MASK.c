
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_3__* device; } ;
struct nvkm_ram {int dummy; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_pll {scalar_t__ max_p; scalar_t__ bias_p; } ;
struct TYPE_5__ {TYPE_1__* fb; } ;
struct nv40_ram {int ctrl; int coef; TYPE_2__ base; } ;
struct TYPE_6__ {struct nvkm_bios* bios; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct nvkm_subdev*,struct nvbios_pll*,int ,int*,int*,int*,int*,int*) ;
 struct nv40_ram* FUNC_2 (struct nvkm_ram*) ;
 int FUNC_3 (struct nvkm_bios*,int,struct nvbios_pll*) ;
 int FUNC_4 (struct nvkm_subdev*,char*) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_ram *VAR_0, u32 VAR_1)
{
 struct nv40_ram *VAR_2 = FUNC_2(VAR_0);
 struct nvkm_subdev *VAR_3 = &VAR_2->base.fb->subdev;
 struct nvkm_bios *VAR_4 = VAR_3->device->bios;
 struct nvbios_pll VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_3(VAR_4, 0x04, &VAR_5);
 if (VAR_11) {
  FUNC_4(VAR_3, "mclk pll data not found\n");
  return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_3, &VAR_5, VAR_1, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_2->ctrl = 0x80000000 | (VAR_10 << 16);
 VAR_2->ctrl |= FUNC_0(VAR_5.bias_p + VAR_10, (int)VAR_5.max_p) << 20;
 if (VAR_8 == VAR_9) {
  VAR_2->ctrl |= 0x00000100;
  VAR_2->coef = (VAR_6 << 8) | VAR_7;
 } else {
  VAR_2->ctrl |= 0x40000000;
  VAR_2->coef = (VAR_8 << 24) | (VAR_9 << 16) | (VAR_6 << 8) | VAR_7;
 }

 return 0;
}
