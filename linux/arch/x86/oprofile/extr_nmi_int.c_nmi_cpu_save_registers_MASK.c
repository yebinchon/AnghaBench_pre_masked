
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_msrs {struct op_msr* controls; struct op_msr* counters; } ;
struct op_msr {int saved; scalar_t__ addr; } ;
struct TYPE_2__ {unsigned int num_counters; unsigned int num_controls; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct op_msrs *VAR_1)
{
 struct op_msr *VAR_2 = VAR_1->counters;
 struct op_msr *VAR_3 = VAR_1->controls;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_counters; ++VAR_4) {
  if (VAR_2[VAR_4].addr)
   FUNC_0(VAR_2[VAR_4].addr, VAR_2[VAR_4].saved);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->num_controls; ++VAR_4) {
  if (VAR_3[VAR_4].addr)
   FUNC_0(VAR_3[VAR_4].addr, VAR_3[VAR_4].saved);
 }
}
