
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_clk {int dummy; } ;
struct nvbios_pll {int refclk; } ;
struct gt215_clk_info {int pll; int fb_delay; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct gt215_clk {TYPE_2__ base; } ;
struct TYPE_3__ {int bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gt215_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (TYPE_2__*,int,int,struct gt215_clk_info*) ;
 int FUNC_2 (struct nvkm_subdev*,struct nvbios_pll*,int,int*,int *,int*,int*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,struct nvbios_pll*) ;

int
FUNC_5(struct nvkm_clk *VAR_2, int VAR_3, u32 VAR_4, u32 VAR_5,
        struct gt215_clk_info *VAR_6)
{
 struct gt215_clk *VAR_7 = FUNC_0(VAR_2);
 struct nvkm_subdev *VAR_8 = &VAR_7->base.subdev;
 struct nvbios_pll VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_6->pll = 0;



 VAR_14 = FUNC_1(&VAR_7->base, VAR_3, VAR_5, VAR_6);
 VAR_13 = VAR_5 - VAR_14;
 if (!VAR_4 || (VAR_13 >= -2000 && VAR_13 < 3000)) {
  goto out;
 }


 VAR_14 = FUNC_4(VAR_8->device->bios, VAR_4, &VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_1(&VAR_7->base, VAR_3 - 0x10, VAR_9.refclk, VAR_6);
 if (VAR_14 != VAR_9.refclk)
  return -VAR_0;

 VAR_14 = FUNC_2(VAR_8, &VAR_9, VAR_5, &VAR_11, ((void*)0), &VAR_12, &VAR_10);
 if (VAR_14 >= 0) {
  VAR_6->pll = (VAR_10 << 16) | (VAR_11 << 8) | VAR_12;
 }

out:
 VAR_6->fb_delay = FUNC_3(((VAR_5 + 7566) / 15133), (u32) 18);
 return VAR_14 ? VAR_14 : -VAR_1;
}
