
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_clk {TYPE_1__ subdev; } ;
struct gk20a_pll {int dummy; } ;
struct gk20a_clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gk20a_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct gk20a_clk*) ;
 scalar_t__ FUNC_2 (struct gk20a_clk*) ;
 int FUNC_3 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_4 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_5 (struct gk20a_clk*,int ) ;
 int FUNC_6 (struct nvkm_device*,int ,int ,int) ;

void
FUNC_7(struct nvkm_clk *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_2->subdev.device;
 struct gk20a_clk *VAR_4 = FUNC_0(VAR_2);


 if (FUNC_2(VAR_4)) {
  struct gk20a_pll VAR_5;
  u32 VAR_6;

  FUNC_4(VAR_4, &VAR_5);
  VAR_6 = FUNC_3(VAR_4, &VAR_5);
  FUNC_5(VAR_4, VAR_6);
 }

 FUNC_1(VAR_4);


 FUNC_6(VAR_3, VAR_0, VAR_1, 1);
}
