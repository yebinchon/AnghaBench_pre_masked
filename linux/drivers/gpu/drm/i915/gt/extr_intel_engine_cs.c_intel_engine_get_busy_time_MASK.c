
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ stats; } ;
typedef int ktime_t ;


 int FUNC_0 (struct intel_engine_cs*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

ktime_t FUNC_3(struct intel_engine_cs *VAR_0)
{
 unsigned int VAR_1;
 ktime_t VAR_2;

 do {
  VAR_1 = FUNC_1(&VAR_0->stats.lock);
  VAR_2 = FUNC_0(VAR_0);
 } while (FUNC_2(&VAR_0->stats.lock, VAR_1));

 return VAR_2;
}
