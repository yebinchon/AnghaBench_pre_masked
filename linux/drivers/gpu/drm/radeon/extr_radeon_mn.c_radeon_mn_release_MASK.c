
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier_range {int event; int flags; int end; int start; struct mm_struct* mm; } ;
struct mmu_notifier {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmu_notifier*,struct mmu_notifier_range*) ;

__attribute__((used)) static void FUNC_1(struct mmu_notifier *VAR_2, struct mm_struct *VAR_3)
{
 struct mmu_notifier_range VAR_4 = {
  .mm = VAR_3,
  .start = 0,
  .end = VAR_1,
  .flags = 0,
  .event = VAR_0,
 };

 FUNC_0(VAR_2, &VAR_4);
}
