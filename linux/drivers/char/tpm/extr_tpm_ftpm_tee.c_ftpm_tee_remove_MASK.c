
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct ftpm_tee_private {int ctx; int session; int shm; TYPE_1__* chip; } ;
struct TYPE_2__ {int dev; } ;


 struct ftpm_tee_private* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct ftpm_tee_private *VAR_1 = FUNC_0(&VAR_0->dev);


 FUNC_5(VAR_1->chip);


 FUNC_1(&VAR_1->chip->dev);


 FUNC_4(VAR_1->shm);


 FUNC_3(VAR_1->ctx, VAR_1->session);


 FUNC_2(VAR_1->ctx);



 return 0;
}
