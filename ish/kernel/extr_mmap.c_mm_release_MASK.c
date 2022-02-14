
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm {scalar_t__ refcount; int mem; int * exefile; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mm*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mm *VAR_0) {
    if (--VAR_0->refcount == 0) {
        if (VAR_0->exefile != ((void*)0))
            FUNC_0(VAR_0->exefile);
        FUNC_2(&VAR_0->mem);
        FUNC_1(VAR_0);
    }
}
