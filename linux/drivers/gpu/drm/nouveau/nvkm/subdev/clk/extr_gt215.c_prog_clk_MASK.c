
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct gt215_clk_info {int clk; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gt215_clk {TYPE_2__ base; struct gt215_clk_info* eng; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gt215_clk *VAR_0, int VAR_1, int VAR_2)
{
 struct gt215_clk_info *VAR_3 = &VAR_0->eng[VAR_2];
 struct nvkm_device *VAR_4 = VAR_0->base.subdev.device;
 FUNC_0(VAR_4, 0x004120 + (VAR_1 * 4), 0x003f3141, 0x00000101 | VAR_3->clk);
}
