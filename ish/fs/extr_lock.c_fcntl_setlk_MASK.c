
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_data {int lock; int posix_unlock; } ;
struct flock_ {scalar_t__ type; } ;
struct file_lock {int dummy; } ;
struct fd {struct inode_data* inode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fd*) ;
 int FUNC_1 (struct inode_data*,struct file_lock*) ;
 int FUNC_2 (struct fd*,struct flock_*,struct file_lock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;

int FUNC_6(struct fd *VAR_9, struct flock_ *VAR_10, bool VAR_11) {
    if (VAR_10->type != VAR_0 && VAR_10->type != VAR_2 && VAR_10->type != VAR_1)
        return VAR_8;
    if (VAR_10->type == VAR_0 && !(FUNC_0(VAR_9) & (VAR_3|VAR_4)))
        return VAR_7;
    if (VAR_10->type == VAR_2 && !(FUNC_0(VAR_9) & (VAR_5|VAR_4)))
        return VAR_7;

    struct inode_data *VAR_12 = VAR_9->inode;
    FUNC_3(&VAR_12->lock);

    struct file_lock VAR_13;
    int VAR_14 = FUNC_2(VAR_9, VAR_10, &VAR_13);
    if (VAR_14 < 0)
        goto out;
    while ((VAR_14 = FUNC_1(VAR_12, &VAR_13)) == VAR_6) {
        if (!VAR_11)
            break;
        VAR_14 = FUNC_5(&VAR_12->posix_unlock, &VAR_12->lock, ((void*)0));
        if (VAR_14 < 0)
            break;
    }
out:
    FUNC_4(&VAR_12->lock);
    return VAR_14;
}
