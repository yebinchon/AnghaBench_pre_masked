
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtrr_iter {int mem_type; size_t index; TYPE_2__* range; TYPE_1__* mtrr_state; scalar_t__ fixed; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int* fixed_ranges; } ;



__attribute__((used)) static bool FUNC_0(struct mtrr_iter *VAR_0)
{
 if (VAR_0->fixed) {
  VAR_0->mem_type = VAR_0->mtrr_state->fixed_ranges[VAR_0->index];
  return 1;
 }

 if (VAR_0->range) {
  VAR_0->mem_type = VAR_0->range->base & 0xff;
  return 1;
 }

 return 0;
}
