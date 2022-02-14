
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;
struct inode_data {size_t number; int lock; scalar_t__ refcount; int chain; int posix_locks; int posix_unlock; scalar_t__ socket_id; struct mount* mount; } ;
typedef size_t ino_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 struct inode_data* FUNC_1 (struct mount*,size_t) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct inode_data* FUNC_6 (int) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (int *) ;

struct inode_data *FUNC_9(struct mount *VAR_3, ino_t VAR_4) {
    FUNC_4(&VAR_2);
    struct inode_data *VAR_5 = FUNC_1(VAR_3, VAR_4);
    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_6(sizeof(struct inode_data));
        VAR_5->refcount = 0;
        VAR_5->number = VAR_4;
        FUNC_7(VAR_3);
        VAR_5->mount = VAR_3;
        VAR_5->socket_id = 0;
        FUNC_0(&VAR_5->posix_unlock);
        FUNC_3(&VAR_5->posix_locks);
        FUNC_3(&VAR_5->chain);
        FUNC_5(&VAR_5->lock);
        FUNC_2(&VAR_1[VAR_4 % VAR_0], &VAR_5->chain);
    }

    FUNC_4(&VAR_5->lock);
    VAR_5->refcount++;
    FUNC_8(&VAR_5->lock);
    FUNC_8(&VAR_2);
    return VAR_5;
}
