
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_subdev {TYPE_4__* device; } ;
struct TYPE_6__ {scalar_t__ max_freq; } ;
struct TYPE_5__ {scalar_t__ max_freq; } ;
struct nvbios_pll {TYPE_2__ vco2; TYPE_1__ vco1; } ;
struct TYPE_7__ {struct nvkm_subdev subdev; } ;
struct nv40_clk {TYPE_3__ base; } ;
struct TYPE_8__ {int bios; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,struct nvbios_pll*,scalar_t__,int*,int*,int*,int*,int*) ;
 int FUNC_1 (int ,scalar_t__,struct nvbios_pll*) ;

__attribute__((used)) static int
FUNC_2(struct nv40_clk *VAR_1, u32 VAR_2, u32 VAR_3,
    int *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8)
{
 struct nvkm_subdev *VAR_9 = &VAR_1->base.subdev;
 struct nvbios_pll VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_9->device->bios, VAR_2, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_3 < VAR_10.vco1.max_freq)
  VAR_10.vco2.max_freq = 0;

 VAR_11 = FUNC_0(VAR_9, &VAR_10, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11 == 0)
  return -VAR_0;

 return VAR_11;
}
