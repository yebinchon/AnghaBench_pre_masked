
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backoff_srcu; int flags; int queue; } ;
struct intel_gt {TYPE_1__ reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int) ;

int FUNC_7(struct intel_gt *VAR_2, int *VAR_3)
{
 FUNC_0(&VAR_2->reset.backoff_srcu);
 FUNC_1();

 FUNC_2();
 while (FUNC_5(VAR_1, &VAR_2->reset.flags)) {
  FUNC_3();

  if (FUNC_6(VAR_2->reset.queue,
          !FUNC_5(VAR_1,
             &VAR_2->reset.flags)))
   return -VAR_0;

  FUNC_2();
 }
 *VAR_3 = FUNC_4(&VAR_2->reset.backoff_srcu);
 FUNC_3();

 return 0;
}
