
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
struct nv40_clk {TYPE_1__ base; } ;
typedef enum nv_clk_src { ____Placeholder_nv_clk_src } nv_clk_src ;


 int VAR_0 ;
 struct nv40_clk* FUNC_0 (struct nvkm_clk*) ;





 int FUNC_1 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nv40_clk*,int) ;
 int FUNC_4 (struct nv40_clk*,int) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_clk *VAR_1, enum nv_clk_src VAR_2)
{
 struct nv40_clk *VAR_3 = FUNC_0(VAR_1);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = FUNC_2(VAR_5, 0x00c040);

 switch (VAR_2) {
 case 131:
  return VAR_5->crystal;
 case 130:
  return 100000;
 case 132:
  return FUNC_3(VAR_3, (VAR_6 & 0x00000003) >> 0);
 case 128:
  return FUNC_3(VAR_3, (VAR_6 & 0x00000030) >> 4);
 case 129:
  return FUNC_4(VAR_3, 0x4020);
 default:
  break;
 }

 FUNC_1(VAR_4, "unknown clock source %d %08x\n", VAR_2, VAR_6);
 return -VAR_0;
}
