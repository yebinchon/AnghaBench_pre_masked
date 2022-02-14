
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {scalar_t__ refcount; unsigned int size; int lock; struct fdtable* cloexec; struct fdtable* files; } ;
typedef scalar_t__ fd_t ;


 int FUNC_0 (struct fdtable*,scalar_t__) ;
 int FUNC_1 (struct fdtable*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fdtable *VAR_0) {
    FUNC_2(&VAR_0->lock);
    if (--VAR_0->refcount == 0) {
        for (fd_t VAR_1 = 0; (unsigned) VAR_1 < VAR_0->size; VAR_1++)
            FUNC_0(VAR_0, VAR_1);
        FUNC_1(VAR_0->files);
        FUNC_1(VAR_0->cloexec);
        FUNC_3(&VAR_0->lock);
        FUNC_1(VAR_0);
    } else {
        FUNC_3(&VAR_0->lock);
    }
}
