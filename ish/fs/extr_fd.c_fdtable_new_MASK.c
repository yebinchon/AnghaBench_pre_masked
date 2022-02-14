
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {int refcount; int lock; int * cloexec; int * files; scalar_t__ size; } ;


 struct fdtable* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct fdtable*,int) ;
 int FUNC_2 (struct fdtable*) ;
 int FUNC_3 (int *) ;
 struct fdtable* FUNC_4 (int) ;

struct fdtable *FUNC_5(int VAR_1) {
    struct fdtable *VAR_2 = FUNC_4(sizeof(struct fdtable));
    if (VAR_2 == ((void*)0))
        return FUNC_0(VAR_0);
    VAR_2->refcount = 1;
    VAR_2->size = 0;
    VAR_2->files = ((void*)0);
    VAR_2->cloexec = ((void*)0);
    FUNC_3(&VAR_2->lock);
    int VAR_3 = FUNC_1(VAR_2, VAR_1);
    if (VAR_3 < 0) {
        FUNC_2(VAR_2);
        return FUNC_0(VAR_3);
    }
    return VAR_2;
}
