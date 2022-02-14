
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_clk {TYPE_1__ subdev; } ;
struct gm20b_clk {int base; } ;
struct gk20a_pll {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct gk20a_pll*) ;
 int FUNC_2 (int *,struct gk20a_pll*) ;
 struct gm20b_clk* FUNC_3 (struct nvkm_clk*) ;
 int FUNC_4 (struct gm20b_clk*) ;
 int FUNC_5 (struct gm20b_clk*,int ) ;
 int FUNC_6 (struct nvkm_device*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct nvkm_clk *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_2->subdev.device;
 struct gm20b_clk *VAR_4 = FUNC_3(VAR_2);


 if (FUNC_0(&VAR_4->base)) {
  struct gk20a_pll VAR_5;
  u32 VAR_6;

  FUNC_2(&VAR_4->base, &VAR_5);
  VAR_6 = FUNC_1(&VAR_4->base, &VAR_5);
  FUNC_5(VAR_4, VAR_6);
 }

 FUNC_4(VAR_4);


 FUNC_6(VAR_3, VAR_0, VAR_1, 1);
}
