
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nv50_clk {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nv50_clk*,int) ;

__attribute__((used)) static u32
FUNC_4(struct nv50_clk *VAR_2, u32 VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_2->base.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6, VAR_7 = FUNC_2(VAR_5, 0x00c040);

 switch (VAR_3) {
 case 0x004028:
  VAR_6 = !!(VAR_7 & 0x00200000);
  break;
 case 0x004020:
  VAR_6 = !!(VAR_7 & 0x00400000);
  break;
 case 0x004008:
  VAR_6 = !!(VAR_7 & 0x00010000);
  break;
 case 0x004030:
  VAR_6 = !!(VAR_7 & 0x02000000);
  break;
 case 0x00e810:
  return FUNC_0(&VAR_2->base, VAR_0);
 default:
  FUNC_1(VAR_4, "bad pll %06x\n", VAR_3);
  return 0;
 }

 if (VAR_6)
  return FUNC_0(&VAR_2->base, VAR_1);

 return FUNC_3(VAR_2, VAR_3);
}
