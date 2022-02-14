
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tlb_batch {int hugepage_shift; struct mm_struct* mm; } ;
struct TYPE_4__ {int lock; TYPE_1__* tsb_block; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_3__ {unsigned long tsb_nentries; scalar_t__ tsb; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tlb_batch*,int ,unsigned long,unsigned long,int ) ;
 int FUNC_1 (struct tlb_batch*,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_6 ;

void FUNC_5(struct tlb_batch *VAR_7)
{
 struct mm_struct *VAR_8 = VAR_7->mm;
 unsigned long VAR_9, VAR_10, VAR_11;

 FUNC_3(&VAR_8->context.lock, VAR_11);

 if (VAR_7->hugepage_shift < VAR_3) {
  VAR_10 = (unsigned long) VAR_8->context.tsb_block[VAR_0].tsb;
  VAR_9 = VAR_8->context.tsb_block[VAR_0].tsb_nentries;
  if (VAR_6 == VAR_4 || VAR_6 == VAR_5)
   VAR_10 = FUNC_2(VAR_10);
  if (VAR_7->hugepage_shift == VAR_2)
   FUNC_1(VAR_7, VAR_2, VAR_10, VAR_9);





 }
 FUNC_4(&VAR_8->context.lock, VAR_11);
}
