
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int crystal; } ;
struct nvkm_clk {int dummy; } ;
struct gk20a_pll {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gk20a_clk {TYPE_1__ base; } ;
typedef enum nv_clk_src { ____Placeholder_nv_clk_src } nv_clk_src ;


 int VAR_0 ;
 int VAR_1 ;
 struct gk20a_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_2 (struct gk20a_clk*,struct gk20a_pll*) ;


 int FUNC_3 (struct nvkm_subdev*,char*,int) ;

int
FUNC_4(struct nvkm_clk *VAR_2, enum nv_clk_src VAR_3)
{
 struct gk20a_clk *VAR_4 = FUNC_0(VAR_2);
 struct nvkm_subdev *VAR_5 = &VAR_4->base.subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 struct gk20a_pll VAR_7;

 switch (VAR_3) {
 case 129:
  return VAR_6->crystal;
 case 128:
  FUNC_2(VAR_4, &VAR_7);
  return FUNC_1(VAR_4, &VAR_7) / VAR_1;
 default:
  FUNC_3(VAR_5, "invalid clock source %d\n", VAR_3);
  return -VAR_0;
 }
}
