
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm {int refcount; int * exefile; scalar_t__ brk; scalar_t__ start_brk; int mem; } ;


 struct mm* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

struct mm *FUNC_2() {
    struct mm *VAR_0 = FUNC_0(sizeof(struct mm));
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    FUNC_1(&VAR_0->mem);
    VAR_0->start_brk = VAR_0->brk = 0;
    VAR_0->exefile = ((void*)0);
    VAR_0->refcount = 1;
    return VAR_0;
}
