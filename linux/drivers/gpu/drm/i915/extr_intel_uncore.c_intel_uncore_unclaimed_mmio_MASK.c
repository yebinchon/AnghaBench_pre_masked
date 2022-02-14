
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {TYPE_1__* debug; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct intel_uncore*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct intel_uncore *VAR_0)
{
 bool VAR_1;

 FUNC_1(&VAR_0->debug->lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->debug->lock);

 return VAR_1;
}
