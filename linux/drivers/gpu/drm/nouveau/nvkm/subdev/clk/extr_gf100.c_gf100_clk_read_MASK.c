
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int crystal; } ;
struct nvkm_clk {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gf100_clk {TYPE_1__ base; } ;
typedef enum nv_clk_src { ____Placeholder_nv_clk_src } nv_clk_src ;


 int VAR_0 ;
 struct gf100_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (TYPE_1__*,int const) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct gf100_clk*,int) ;
 int FUNC_5 (struct gf100_clk*,int ,int,int) ;
 int FUNC_6 (struct gf100_clk*,int) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_clk *VAR_1, enum nv_clk_src VAR_2)
{
 struct gf100_clk *VAR_3 = FUNC_0(VAR_1);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;

 switch (VAR_2) {
 case 143:
  return VAR_5->crystal;
 case 141:
  return 100000;
 case 130:
  return FUNC_6(VAR_3, 0x00e800);
 case 129:
  return FUNC_6(VAR_3, 0x00e820);

 case 133:
  return FUNC_5(VAR_3, 0, 0x137320, 0x137330);
 case 134:
  return FUNC_6(VAR_3, 0x132020);
 case 135:
  return FUNC_6(VAR_3, 0x132000);
 case 137:
  return FUNC_5(VAR_3, 0, 0x137300, 0x137310);
 case 136:
  if (FUNC_3(VAR_5, 0x1373f0) & 0x00000002)
   return FUNC_1(&VAR_3->base, 135);
  return FUNC_1(&VAR_3->base, 137);

 case 142:
  return FUNC_4(VAR_3, 0x00);
 case 131:
  return FUNC_4(VAR_3, 0x01);
 case 138:
  return FUNC_4(VAR_3, 0x02);
 case 139:
  return FUNC_4(VAR_3, 0x07);
 case 140:
  return FUNC_4(VAR_3, 0x08);
 case 144:
  return FUNC_4(VAR_3, 0x09);
 case 132:
  return FUNC_4(VAR_3, 0x0c);
 case 128:
  return FUNC_4(VAR_3, 0x0e);
 default:
  FUNC_2(VAR_4, "invalid clock source %d\n", VAR_2);
  return -VAR_0;
 }
}
