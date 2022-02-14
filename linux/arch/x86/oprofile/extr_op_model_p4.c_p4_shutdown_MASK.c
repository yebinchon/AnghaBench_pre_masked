
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct op_msrs {TYPE_2__* controls; TYPE_1__* counters; } ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct TYPE_3__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct op_msrs const * const VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_2->counters[VAR_3].addr)
   FUNC_1(VAR_2->counters[VAR_3].addr);
 }





 for (VAR_3 = VAR_1; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_2->controls[VAR_3].addr)
   FUNC_0(VAR_2->controls[VAR_3].addr);
 }
}
