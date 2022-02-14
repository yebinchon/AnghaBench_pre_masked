
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fdtable {int size; int lock; TYPE_1__** cloexec; TYPE_1__** files; } ;
struct fd {int dummy; } ;
typedef int fd_t ;
struct TYPE_3__ {int refcount; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct fdtable*) ;
 struct fdtable* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_5 (int *) ;

struct fdtable *FUNC_6(struct fdtable *VAR_0) {
    FUNC_3(&VAR_0->lock);
    int VAR_1 = VAR_0->size;
    struct fdtable *VAR_2 = FUNC_2(VAR_1);
    if (FUNC_1(VAR_2)) {
        FUNC_5(&VAR_0->lock);
        return VAR_2;
    }
    FUNC_4(VAR_2->files, VAR_0->files, sizeof(struct fd *) * VAR_1);
    for (fd_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        if (VAR_2->files[VAR_3])
            VAR_2->files[VAR_3]->refcount++;
    FUNC_4(VAR_2->cloexec, VAR_0->cloexec, FUNC_0(VAR_1));
    FUNC_5(&VAR_0->lock);
    return VAR_2;
}
