
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_info {int refcount; int lock; int * root; int pwd; scalar_t__ umask; } ;


 int FUNC_0 (int *) ;
 struct fs_info* FUNC_1 (int) ;

struct fs_info *FUNC_2() {
    struct fs_info *VAR_0 = FUNC_1(sizeof(struct fs_info));
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    VAR_0->refcount = 1;
    VAR_0->umask = 0;
    VAR_0->pwd = *(VAR_0->root = ((void*)0));
    FUNC_0(&VAR_0->lock);
    return VAR_0;
}
