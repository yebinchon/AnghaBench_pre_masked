
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enabled; int lock; scalar_t__ active; int total; } ;
struct intel_engine_cs {TYPE_1__ stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_engine_cs*) ;
 int FUNC_2 (struct intel_engine_cs*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct intel_engine_cs *VAR_0)
{
 unsigned long VAR_1;

 if (!FUNC_2(VAR_0))
  return;

 FUNC_3(&VAR_0->stats.lock, VAR_1);
 FUNC_0(VAR_0->stats.enabled == 0);
 if (--VAR_0->stats.enabled == 0) {
  VAR_0->stats.total = FUNC_1(VAR_0);
  VAR_0->stats.active = 0;
 }
 FUNC_4(&VAR_0->stats.lock, VAR_1);
}
