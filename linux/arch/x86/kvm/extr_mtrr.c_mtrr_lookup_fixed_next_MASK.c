
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtrr_iter {scalar_t__ index; scalar_t__ end; int fixed; int seg; TYPE_1__* mtrr_state; int * range; } ;
struct TYPE_2__ {int fixed_ranges; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 void FUNC_3 (struct mtrr_iter*) ;

__attribute__((used)) static void FUNC_4(struct mtrr_iter *VAR_0)
{

 if (FUNC_1(VAR_0->seg, VAR_0->index) >= VAR_0->end) {
  VAR_0->fixed = 0;
  VAR_0->range = ((void*)0);
  return;
 }

 VAR_0->index++;


 if (VAR_0->index >= FUNC_0(VAR_0->mtrr_state->fixed_ranges))
  return FUNC_3(VAR_0);


 if (VAR_0->index > FUNC_2(VAR_0->seg))
  VAR_0->seg++;
}
