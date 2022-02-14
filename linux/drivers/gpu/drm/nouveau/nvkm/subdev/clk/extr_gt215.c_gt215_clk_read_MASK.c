
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int crystal; } ;
struct nvkm_clk {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gt215_clk {TYPE_1__ base; } ;
typedef enum nv_clk_src { ____Placeholder_nv_clk_src } nv_clk_src ;


 int VAR_0 ;
 struct gt215_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct gt215_clk*,int,int) ;
 int FUNC_4 (struct gt215_clk*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_clk *VAR_1, enum nv_clk_src VAR_2)
{
 struct gt215_clk *VAR_3 = FUNC_0(VAR_1);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6;

 switch (VAR_2) {
 case 134:
  return VAR_5->crystal;
 case 136:
 case 135:
  return FUNC_4(VAR_3, 0x00, 0x4200);
 case 129:
  return FUNC_4(VAR_3, 0x01, 0x4220);
 case 131:
  return FUNC_4(VAR_3, 0x02, 0x4000);
 case 133:
  return FUNC_3(VAR_3, 0x20, 0);
 case 128:
  return FUNC_3(VAR_3, 0x21, 0);
 case 130:
  return FUNC_3(VAR_3, 0x25, 0);
 case 132:
  VAR_6 = (FUNC_2(VAR_5, 0xc040) & 0x30000000) >> 28;
  switch (VAR_6) {
  case 0:
   return FUNC_3(VAR_3, 0x1d, 0);
  case 2:
  case 3:
   return 277000;
  default:
   FUNC_1(VAR_4, "unknown HOST clock source %d\n", VAR_6);
   return -VAR_0;
  }
 default:
  FUNC_1(VAR_4, "invalid clock source %d\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
