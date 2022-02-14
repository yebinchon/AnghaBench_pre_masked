
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_uncore {scalar_t__ fifo_count; int i915; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct intel_uncore*) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct intel_uncore *VAR_2)
{
 u32 VAR_3;



 if (FUNC_1(VAR_2->i915))
  VAR_3 = FUNC_2(VAR_2);
 else
  VAR_3 = VAR_2->fifo_count;

 if (VAR_3 <= VAR_0) {
  if (FUNC_3((VAR_3 = FUNC_2(VAR_2)) >
        VAR_0,
        VAR_1)) {
   FUNC_0("GT_FIFO timeout, entries: %u\n", VAR_3);
   return;
  }
 }

 VAR_2->fifo_count = VAR_3 - 1;
}
