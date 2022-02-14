
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct mm {int refcount; TYPE_1__ mem; int exefile; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mm* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct mm *FUNC_6(struct mm *VAR_1) {
    struct mm *VAR_2 = FUNC_1(sizeof(struct mm));
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    *VAR_2 = *VAR_1;
    VAR_2->refcount = 1;
    FUNC_2(&VAR_2->mem);
    FUNC_0(VAR_2->exefile);
    FUNC_4(&VAR_1->mem.lock);
    FUNC_3(&VAR_1->mem, &VAR_2->mem, 0, VAR_0);
    FUNC_5(&VAR_1->mem.lock);
    return VAR_2;
}
