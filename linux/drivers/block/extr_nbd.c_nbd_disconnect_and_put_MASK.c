
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_device {TYPE_1__* config; int recv_workq; int config_lock; } ;
struct TYPE_2__ {int runtime_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nbd_device*) ;
 int FUNC_4 (struct nbd_device*) ;
 int FUNC_5 (struct nbd_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct nbd_device *VAR_1)
{
 FUNC_1(&VAR_1->config_lock);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->config_lock);





 FUNC_0(VAR_1->recv_workq);
 if (FUNC_6(VAR_0,
          &VAR_1->config->runtime_flags))
  FUNC_4(VAR_1);
}
