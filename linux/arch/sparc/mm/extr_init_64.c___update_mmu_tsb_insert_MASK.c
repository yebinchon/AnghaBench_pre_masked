
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsb {int dummy; } ;
struct TYPE_4__ {TYPE_1__* tsb_block; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_3__ {unsigned long tsb_nentries; struct tsb* tsb; } ;


 int FUNC_0 (struct tsb*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mm_struct *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2, unsigned long VAR_3,
        unsigned long VAR_4)
{
 struct tsb *VAR_5 = VAR_0->context.tsb_block[VAR_1].tsb;
 unsigned long VAR_6;

 if (FUNC_1(!VAR_5))
  return;

 VAR_5 += ((VAR_3 >> VAR_2) &
  (VAR_0->context.tsb_block[VAR_1].tsb_nentries - 1UL));
 VAR_6 = (VAR_3 >> 22UL);
 FUNC_0(VAR_5, VAR_6, VAR_4);
}
