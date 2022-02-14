
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* force_wake_get ) (struct intel_uncore*,unsigned int) ;} ;
struct intel_uncore {int lock; int fifo_count; TYPE_1__ funcs; int i915; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int) ;
 int FUNC_4 (struct intel_uncore*) ;
 int FUNC_5 (struct intel_uncore*) ;
 scalar_t__ FUNC_6 (struct intel_uncore*) ;
 int FUNC_7 (struct intel_uncore*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct intel_uncore*,unsigned int) ;

__attribute__((used)) static void FUNC_13(struct intel_uncore *VAR_3,
         unsigned int VAR_4)
{
 FUNC_0(!FUNC_7(VAR_3));


 if (FUNC_1(VAR_3->i915)) {
  FUNC_3(VAR_3, VAR_0,
         FUNC_2(VAR_3, VAR_0) |
         VAR_1 |
         VAR_2);
 }

 FUNC_8();
 FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_10(&VAR_3->lock);
  VAR_3->funcs.force_wake_get(VAR_3, VAR_4);

  if (FUNC_6(VAR_3))
   VAR_3->fifo_count = FUNC_4(VAR_3);
  FUNC_11(&VAR_3->lock);
 }
 FUNC_9();
}
