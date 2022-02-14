
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int lock; TYPE_1__* debug; int user_forcewake_count; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct intel_uncore *VAR_1)
{
 FUNC_3(&VAR_1->lock);
 if (!VAR_1->user_forcewake_count++) {
  FUNC_0(VAR_1, VAR_0);
  FUNC_2(&VAR_1->debug->lock);
  FUNC_1(VAR_1->debug);
  FUNC_4(&VAR_1->debug->lock);
 }
 FUNC_5(&VAR_1->lock);
}
