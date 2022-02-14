
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_entry {int dummy; } ;
struct mem {int lock; int jit; scalar_t__ changes; scalar_t__ pgdir_used; int pgdir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mem*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mem *VAR_1) {
    VAR_1->pgdir = FUNC_0(VAR_0, sizeof(struct pt_entry *));
    VAR_1->pgdir_used = 0;
    VAR_1->changes = 0;



    FUNC_2(&VAR_1->lock);
}
