
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int crystal; int chipset; } ;
struct nvkm_clk {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nv50_clk {TYPE_1__ base; } ;
typedef enum nv_clk_src { ____Placeholder_nv_clk_src } nv_clk_src ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 struct nv50_clk* FUNC_1 (struct nvkm_clk*) ;
 int FUNC_2 (TYPE_1__*,int const) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nv50_clk*) ;
 int FUNC_6 (struct nv50_clk*,int) ;

int
FUNC_7(struct nvkm_clk *VAR_1, enum nv_clk_src VAR_2)
{
 struct nv50_clk *VAR_3 = FUNC_1(VAR_1);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = FUNC_4(VAR_5, 0x00c040);
 u32 VAR_7 = 0;

 switch (VAR_2) {
 case 137:
  return VAR_5->crystal;
 case 131:
  return 100000;
 case 135:
  return FUNC_0((u64)FUNC_2(&VAR_3->base, 131) * 27778, 10000);
 case 134:
  return FUNC_2(&VAR_3->base, 135) * 3;
 case 133:
  return FUNC_2(&VAR_3->base, 135) * 3 / 2;
 case 132:
  switch (VAR_6 & 0x30000000) {
  case 0x00000000: return FUNC_2(&VAR_3->base, 131);
  case 0x10000000: break;
  case 0x20000000:
  case 0x30000000: return FUNC_2(&VAR_3->base, 135);
  }
  break;
 case 138:
  if (!(VAR_6 & 0x00100000))
   VAR_7 = (FUNC_4(VAR_5, 0x004028) & 0x00070000) >> 16;
  switch (VAR_6 & 0x00000003) {
  case 0x00000000: return FUNC_2(&VAR_3->base, 137) >> VAR_7;
  case 0x00000001: return FUNC_2(&VAR_3->base, 136);
  case 0x00000002: return FUNC_6(VAR_3, 0x004020) >> VAR_7;
  case 0x00000003: return FUNC_6(VAR_3, 0x004028) >> VAR_7;
  }
  break;
 case 129:
  VAR_7 = (FUNC_4(VAR_5, 0x004020) & 0x00070000) >> 16;
  switch (VAR_6 & 0x00000030) {
  case 0x00000000:
   if (VAR_6 & 0x00000080)
    return FUNC_2(&VAR_3->base, 132) >> VAR_7;
   return FUNC_2(&VAR_3->base, 137) >> VAR_7;
  case 0x00000010: break;
  case 0x00000020: return FUNC_6(VAR_3, 0x004028) >> VAR_7;
  case 0x00000030: return FUNC_6(VAR_3, 0x004020) >> VAR_7;
  }
  break;
 case 130:
  VAR_7 = (FUNC_4(VAR_5, 0x004008) & 0x00070000) >> 16;
  if (FUNC_4(VAR_5, 0x004008) & 0x00000200) {
   switch (VAR_6 & 0x0000c000) {
   case 0x00000000:
    return FUNC_2(&VAR_3->base, 137) >> VAR_7;
   case 0x00008000:
   case 0x0000c000:
    return FUNC_2(&VAR_3->base, 131) >> VAR_7;
   }
  } else {
   return FUNC_6(VAR_3, 0x004008) >> VAR_7;
  }
  break;
 case 128:
  VAR_7 = (FUNC_5(VAR_3) & 0x00000700) >> 8;
  switch (VAR_5->chipset) {
  case 0x84:
  case 0x86:
  case 0x92:
  case 0x94:
  case 0x96:
  case 0xa0:
   switch (VAR_6 & 0x00000c00) {
   case 0x00000000:
    if (VAR_5->chipset == 0xa0)
     return FUNC_2(&VAR_3->base, 138) >> VAR_7;
    return FUNC_2(&VAR_3->base, 137) >> VAR_7;
   case 0x00000400:
    return 0;
   case 0x00000800:
    if (VAR_6 & 0x01000000)
     return FUNC_6(VAR_3, 0x004028) >> VAR_7;
    return FUNC_6(VAR_3, 0x004030) >> VAR_7;
   case 0x00000c00:
    return FUNC_2(&VAR_3->base, 138) >> VAR_7;
   }
   break;
  case 0x98:
   switch (VAR_6 & 0x00000c00) {
   case 0x00000000:
    return FUNC_2(&VAR_3->base, 138) >> VAR_7;
   case 0x00000400:
    return 0;
   case 0x00000800:
    return FUNC_2(&VAR_3->base, 133) >> VAR_7;
   case 0x00000c00:
    return FUNC_2(&VAR_3->base, 130) >> VAR_7;
   }
   break;
  }
  break;
 case 136:
  switch (VAR_5->chipset) {
  case 0x50:
  case 0xa0:
   return FUNC_6(VAR_3, 0x00e810) >> 2;
  case 0x84:
  case 0x86:
  case 0x92:
  case 0x94:
  case 0x96:
  case 0x98:
   VAR_7 = (FUNC_5(VAR_3) & 0x00000007) >> 0;
   switch (VAR_6 & 0x0c000000) {
   case 0x00000000: return FUNC_2(&VAR_3->base, 131);
   case 0x04000000: break;
   case 0x08000000: return FUNC_2(&VAR_3->base, 135);
   case 0x0c000000:
    return FUNC_2(&VAR_3->base, 134) >> VAR_7;
   }
   break;
  default:
   break;
  }
 default:
  break;
 }

 FUNC_3(VAR_4, "unknown clock source %d %08x\n", VAR_2, VAR_6);
 return -VAR_0;
}
