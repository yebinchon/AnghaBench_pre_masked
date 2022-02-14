
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_device {int dummy; } ;
struct gt215_clk_info {scalar_t__ fb_delay; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gt215_clk {TYPE_2__ base; struct gt215_clk_info* eng; } ;


 scalar_t__ FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,scalar_t__) ;
 int FUNC_2 (struct gt215_clk*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct gt215_clk *VAR_0, int VAR_1)
{
 struct gt215_clk_info *VAR_2 = &VAR_0->eng[VAR_1];
 struct nvkm_device *VAR_3 = VAR_0->base.subdev.device;
 u32 VAR_4 = FUNC_0(VAR_3, 0x10002c);

 if (VAR_4 < VAR_2->fb_delay)
  FUNC_1(VAR_3, 0x10002c, VAR_2->fb_delay);

 FUNC_2(VAR_0, 0x00, 0x004200, VAR_1);

 if (VAR_4 > VAR_2->fb_delay)
  FUNC_1(VAR_3, 0x10002c, VAR_2->fb_delay);
}
