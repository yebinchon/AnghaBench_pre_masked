
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* funcs; } ;
struct rockchip_dp_device {int adp; TYPE_2__ encoder; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* destroy ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rockchip_dp_device* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, struct device *VAR_2,
          void *VAR_3)
{
 struct rockchip_dp_device *VAR_4 = FUNC_2(VAR_1);

 FUNC_1(VAR_4->adp);
 VAR_4->encoder.funcs->destroy(&VAR_4->encoder);

 VAR_4->adp = FUNC_0(-VAR_0);
}
