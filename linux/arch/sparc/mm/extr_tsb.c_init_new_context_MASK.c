
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {unsigned long sparc64_ctx_val; unsigned long hugetlb_pte_count; unsigned long thp_pte_count; TYPE_1__* tsb_block; int tag_lock; int * tag_store; int lock; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_3__ {int * tsb; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*,size_t,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct task_struct *VAR_7, struct mm_struct *VAR_8)
{
 unsigned long VAR_9 = FUNC_0(VAR_8);




 unsigned int VAR_10;

 FUNC_1(&VAR_8->context.lock);

 VAR_8->context.sparc64_ctx_val = 0UL;

 VAR_8->context.tag_store = ((void*)0);
 FUNC_1(&VAR_8->context.tag_lock);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  VAR_8->context.tsb_block[VAR_10].tsb = ((void*)0);




 FUNC_2(VAR_8, VAR_3, VAR_9);
 if (FUNC_3(!VAR_8->context.tsb_block[VAR_3].tsb))
  return -VAR_0;

 return 0;
}
