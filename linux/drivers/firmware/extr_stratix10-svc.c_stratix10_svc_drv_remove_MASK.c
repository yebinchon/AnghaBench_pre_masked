
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stratix10_svc_controller {int node; scalar_t__ genpool; int * task; int svc_fifo; } ;
struct stratix10_svc {int stratix10_svc_rsu; } ;
struct platform_device {int dev; } ;


 struct stratix10_svc* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct stratix10_svc_controller* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct stratix10_svc *VAR_1 = FUNC_0(&VAR_0->dev);
 struct stratix10_svc_controller *VAR_2 = FUNC_6(VAR_0);

 FUNC_5(VAR_1->stratix10_svc_rsu);

 FUNC_2(&VAR_2->svc_fifo);
 if (VAR_2->task) {
  FUNC_3(VAR_2->task);
  VAR_2->task = ((void*)0);
 }
 if (VAR_2->genpool)
  FUNC_1(VAR_2->genpool);
 FUNC_4(&VAR_2->node);

 return 0;
}
