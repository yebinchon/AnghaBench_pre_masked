
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct gt215_clk_info {int host_out; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gt215_clk {TYPE_2__ base; struct gt215_clk_info* eng; } ;




 int FUNC_0 (struct gt215_clk*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (struct gt215_clk*,int,size_t) ;

__attribute__((used)) static void
FUNC_4(struct gt215_clk *VAR_1)
{
 struct gt215_clk_info *VAR_2 = &VAR_1->eng[VAR_0];
 struct nvkm_device *VAR_3 = VAR_1->base.subdev.device;
 u32 VAR_4 = (FUNC_1(VAR_3, 0xc040));

 switch (VAR_2->host_out) {
 case 129:
  if ((VAR_4 & 0x30000000) == 0) {
   FUNC_2(VAR_3, 0xc040, VAR_4 | 0x20000000);
   FUNC_0(VAR_1, 0x4194);
  }
  break;
 case 128:
  FUNC_3(VAR_1, 0x1d, VAR_0);
  if ((VAR_4 & 0x30000000) >= 0x20000000) {
   FUNC_2(VAR_3, 0xc040, VAR_4 & ~0x30000000);
  }
  break;
 default:
  break;
 }


 FUNC_2(VAR_3, 0xc044, 0x3e);
}
