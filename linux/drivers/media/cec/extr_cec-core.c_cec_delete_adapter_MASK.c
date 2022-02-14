
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_adapter {int rc; TYPE_1__* ops; scalar_t__ kthread_config; scalar_t__ kthread; } ;
struct TYPE_2__ {int (* adap_free ) (struct cec_adapter*) ;} ;


 scalar_t__ FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cec_adapter*) ;

void FUNC_5(struct cec_adapter *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;
 FUNC_2(VAR_0->kthread);
 if (VAR_0->kthread_config)
  FUNC_2(VAR_0->kthread_config);
 if (VAR_0->ops->adap_free)
  VAR_0->ops->adap_free(VAR_0);



 FUNC_1(VAR_0);
}
