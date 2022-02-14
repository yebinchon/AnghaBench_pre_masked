
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_regs; unsigned long* priority_mask; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned long *VAR_1,
 unsigned long *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_regs; VAR_3++) {
  VAR_2[VAR_3] =
   VAR_1[VAR_3] & VAR_0->priority_mask[VAR_3];
  VAR_1[VAR_3] ^= VAR_2[VAR_3];
 }
}
