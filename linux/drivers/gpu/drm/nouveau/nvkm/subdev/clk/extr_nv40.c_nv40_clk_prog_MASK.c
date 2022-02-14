
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct nvkm_clk {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv40_clk {int npll_ctrl; int spll; int ctrl; int npll_coef; TYPE_2__ base; } ;


 int FUNC_0 (int) ;
 struct nv40_clk* FUNC_1 (struct nvkm_clk*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_clk *VAR_0)
{
 struct nv40_clk *VAR_1 = FUNC_1(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.subdev.device;
 FUNC_2(VAR_2, 0x00c040, 0x00000333, 0x00000000);
 FUNC_3(VAR_2, 0x004004, VAR_1->npll_coef);
 FUNC_2(VAR_2, 0x004000, 0xc0070100, VAR_1->npll_ctrl);
 FUNC_2(VAR_2, 0x004008, 0xc007ffff, VAR_1->spll);
 FUNC_0(5);
 FUNC_2(VAR_2, 0x00c040, 0x00000333, VAR_1->ctrl);
 return 0;
}
