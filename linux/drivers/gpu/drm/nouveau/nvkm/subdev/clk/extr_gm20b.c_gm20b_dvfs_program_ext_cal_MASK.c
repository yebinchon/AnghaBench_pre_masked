
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct gm20b_clk {TYPE_3__ base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nvkm_device*,int ,int ,int) ;
 int FUNC_3 (struct nvkm_device*,int ) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct gm20b_clk *VAR_3, u32 VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_3->base.base.subdev.device;
 u32 VAR_6;

 FUNC_2(VAR_5, VAR_2, FUNC_1(VAR_0 + 1),
    VAR_4);
 FUNC_5(1);

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (!(VAR_6 & FUNC_0(25))) {

  VAR_6 |= FUNC_0(25) | FUNC_0(16);
  FUNC_4(VAR_5, VAR_1, VAR_6);
 }
}
