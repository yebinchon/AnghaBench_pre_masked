
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode_data {scalar_t__ refcount; int lock; TYPE_2__* mount; int chain; } ;
struct TYPE_5__ {TYPE_1__* fs; } ;
struct TYPE_4__ {int (* inode_orphaned ) (TYPE_2__*,struct inode_data*) ;} ;


 int FUNC_0 (struct inode_data*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,struct inode_data*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode_data *VAR_1) {
    FUNC_2(&VAR_0);
    FUNC_2(&VAR_1->lock);
    if (--VAR_1->refcount == 0) {
        FUNC_5(&VAR_1->lock);
        FUNC_1(&VAR_1->chain);
        FUNC_5(&VAR_0);
        if (VAR_1->mount->fs->inode_orphaned)
            VAR_1->mount->fs->inode_orphaned(VAR_1->mount, VAR_1);
        FUNC_3(VAR_1->mount);
        FUNC_0(VAR_1);
    } else {
        FUNC_5(&VAR_1->lock);
        FUNC_5(&VAR_0);
    }
}
