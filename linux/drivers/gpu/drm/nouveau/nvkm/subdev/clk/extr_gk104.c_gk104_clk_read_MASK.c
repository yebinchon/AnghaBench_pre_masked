
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int crystal; } ;
struct nvkm_clk {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gk104_clk {TYPE_1__ base; } ;
typedef enum nv_clk_src { ____Placeholder_nv_clk_src } nv_clk_src ;


 int VAR_0 ;
 struct gk104_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct gk104_clk*,int) ;
 int FUNC_3 (struct gk104_clk*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_clk *VAR_1, enum nv_clk_src VAR_2)
{
 struct gk104_clk *VAR_3 = FUNC_0(VAR_1);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;

 switch (VAR_2) {
 case 137:
  return VAR_5->crystal;
 case 135:
  return 100000;
 case 131:
  return FUNC_3(VAR_3);
 case 136:
  return FUNC_2(VAR_3, 0x00);
 case 129:
  return FUNC_2(VAR_3, 0x01);
 case 132:
  return FUNC_2(VAR_3, 0x02);
 case 133:
  return FUNC_2(VAR_3, 0x07);
 case 134:
  return FUNC_2(VAR_3, 0x08);
 case 130:
  return FUNC_2(VAR_3, 0x0c);
 case 128:
  return FUNC_2(VAR_3, 0x0e);
 default:
  FUNC_1(VAR_4, "invalid clock source %d\n", VAR_2);
  return -VAR_0;
 }
}
