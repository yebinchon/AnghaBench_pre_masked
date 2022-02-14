
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct gf100_clk_info {int dsrc; int ddiv; int ssel; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gf100_clk {TYPE_2__ base; struct gf100_clk_info* eng; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int ) ;
 int FUNC_1 (struct nvkm_device*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct gf100_clk *VAR_0, int VAR_1)
{
 struct gf100_clk_info *VAR_2 = &VAR_0->eng[VAR_1];
 struct nvkm_device *VAR_3 = VAR_0->base.subdev.device;
 if (VAR_1 < 7 && !VAR_2->ssel) {
  FUNC_0(VAR_3, 0x1371d0 + (VAR_1 * 0x04), 0x80003f3f, VAR_2->ddiv);
  FUNC_1(VAR_3, 0x137160 + (VAR_1 * 0x04), VAR_2->dsrc);
 }
}
