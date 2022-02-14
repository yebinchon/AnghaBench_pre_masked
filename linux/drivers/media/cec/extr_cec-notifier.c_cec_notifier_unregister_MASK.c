
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_notifier {int lock; TYPE_1__* cec_adap; int * callback; } ;
struct TYPE_2__ {int * notifier; } ;


 int FUNC_0 (struct cec_notifier*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cec_notifier *VAR_0)
{

 if (!VAR_0->callback)
  return;

 FUNC_1(&VAR_0->lock);
 VAR_0->callback = ((void*)0);
 VAR_0->cec_adap->notifier = ((void*)0);
 VAR_0->cec_adap = ((void*)0);
 FUNC_2(&VAR_0->lock);
 FUNC_0(VAR_0);
}
