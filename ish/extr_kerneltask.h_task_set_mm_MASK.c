
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mem; } ;
struct task {struct mm* mm; TYPE_1__ cpu; int * mem; } ;
struct mm {int mem; } ;



__attribute__((used)) static inline void FUNC_0(struct task *VAR_0, struct mm *VAR_1) {
    VAR_0->mm = VAR_1;
    VAR_0->mem = VAR_0->cpu.mem = &VAR_0->mm->mem;
}
