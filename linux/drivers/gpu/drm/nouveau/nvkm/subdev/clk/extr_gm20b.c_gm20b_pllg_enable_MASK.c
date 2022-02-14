
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct gm20b_clk {TYPE_3__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nvkm_device*,int ,int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct gm20b_clk *VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_5->base.base.subdev.device;

 FUNC_1(VAR_6, VAR_0, VAR_1, VAR_1);
 FUNC_2(VAR_6, VAR_0);


 FUNC_3(40);


 FUNC_1(VAR_6, VAR_0, VAR_2,
         VAR_2);
 FUNC_2(VAR_6, VAR_0);


 FUNC_1(VAR_6, VAR_3, FUNC_0(VAR_4),
    FUNC_0(VAR_4));

 return 0;
}
