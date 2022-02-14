
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
struct mcp77_clk {TYPE_1__ base; } ;
typedef enum nv_clk_src { ____Placeholder_nv_clk_src } nv_clk_src ;


 struct mcp77_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (TYPE_1__*,int const) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct mcp77_clk*) ;
 int FUNC_5 (struct mcp77_clk*,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_clk *VAR_0, enum nv_clk_src VAR_1)
{
 struct mcp77_clk *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_3 = &VAR_2->base.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_3(VAR_4, 0x00c054);
 u32 VAR_6 = 0;

 switch (VAR_1) {
 case 135:
  return VAR_4->crystal;
 case 131:
  return 100000;
 case 133:
  return FUNC_1(&VAR_2->base, 131) * 4;
 case 134:
  return FUNC_1(&VAR_2->base, 131) * 2 / 3;
 case 132:
  switch (VAR_5 & 0x000c0000) {
  case 0x00000000: return FUNC_1(&VAR_2->base, 134);
  case 0x00040000: break;
  case 0x00080000: return FUNC_1(&VAR_2->base, 133);
  case 0x000c0000: return FUNC_1(&VAR_2->base, 137);
  }
  break;
 case 136:
  VAR_6 = (FUNC_3(VAR_4, 0x004028) & 0x00070000) >> 16;

  switch (VAR_5 & 0x00000003) {
  case 0x00000000: return FUNC_1(&VAR_2->base, 135) >> VAR_6;
  case 0x00000001: return 0;
  case 0x00000002: return FUNC_1(&VAR_2->base, 133) >> VAR_6;
  case 0x00000003: return FUNC_5(VAR_2, 0x004028) >> VAR_6;
  }
  break;
 case 137:
  if ((VAR_5 & 0x03000000) != 0x03000000)
   return FUNC_1(&VAR_2->base, 136);

  if ((VAR_5 & 0x00000200) == 0x00000000)
   return FUNC_1(&VAR_2->base, 136);

  switch (VAR_5 & 0x00000c00) {
  case 0x00000000: return FUNC_1(&VAR_2->base, 131);
  case 0x00000400: return FUNC_1(&VAR_2->base, 133);
  case 0x00000800: return FUNC_1(&VAR_2->base, 134);
  default: return 0;
  }
 case 129:
  VAR_6 = (FUNC_3(VAR_4, 0x004020) & 0x00070000) >> 16;
  switch (VAR_5 & 0x00000030) {
  case 0x00000000:
   if (VAR_5 & 0x00000040)
    return FUNC_1(&VAR_2->base, 131) >> VAR_6;
   return FUNC_1(&VAR_2->base, 135) >> VAR_6;
  case 0x00000010: break;
  case 0x00000020: return FUNC_5(VAR_2, 0x004028) >> VAR_6;
  case 0x00000030: return FUNC_5(VAR_2, 0x004020) >> VAR_6;
  }
  break;
 case 130:
  return 0;
  break;
 case 128:
  VAR_6 = (FUNC_4(VAR_2) & 0x00000700) >> 8;

  switch (VAR_5 & 0x00400000) {
  case 0x00400000:
   return FUNC_1(&VAR_2->base, 136) >> VAR_6;
   break;
  default:
   return 500000 >> VAR_6;
   break;
  }
  break;
 default:
  break;
 }

 FUNC_2(VAR_3, "unknown clock source %d %08x\n", VAR_1, VAR_5);
 return 0;
}
