
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* funcs; } ;
struct analogix_dp_device {int clock; int dev; int aux; TYPE_2__* plat_data; TYPE_3__ connector; int bridge; } ;
struct TYPE_5__ {scalar_t__ panel; } ;
struct TYPE_4__ {int (* destroy ) (TYPE_3__*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;

void FUNC_8(struct analogix_dp_device *VAR_0)
{
 FUNC_1(VAR_0->bridge);
 VAR_0->connector.funcs->destroy(&VAR_0->connector);

 if (VAR_0->plat_data->panel) {
  if (FUNC_5(VAR_0->plat_data->panel))
   FUNC_0("failed to turnoff the panel\n");
  FUNC_4(VAR_0->plat_data->panel);
 }

 FUNC_3(&VAR_0->aux);
 FUNC_6(VAR_0->dev);
 FUNC_2(VAR_0->clock);
}
