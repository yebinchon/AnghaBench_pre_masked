
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gk20a_clk {TYPE_2__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nvkm_device*,int ,int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int ) ;

__attribute__((used)) static void
FUNC_3(struct gk20a_clk *VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_4->base.subdev.device;


 FUNC_1(VAR_5, VAR_2, FUNC_0(VAR_3), 0);

 FUNC_1(VAR_5, VAR_0, VAR_1, 0);
 FUNC_2(VAR_5, VAR_0);
}
