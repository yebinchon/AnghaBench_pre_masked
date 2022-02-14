
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct statbuf {int inode; int mode; } ;
struct mount {TYPE_1__* fs; } ;
struct inode_data {scalar_t__ socket_id; int lock; } ;
struct fs_info {int umask; int lock; } ;
struct TYPE_5__ {struct inode_data* unix_name_inode; } ;
struct fd {TYPE_2__ socket; } ;
typedef int mode_t_ ;
struct TYPE_6__ {struct fs_info* fs; } ;
struct TYPE_4__ {int (* stat ) (struct mount*,char*,struct statbuf*,int) ;int (* mknod ) (struct mount*,char*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 struct mount* FUNC_1 (char*) ;
 struct inode_data* FUNC_2 (struct mount*,int ) ;
 int FUNC_3 (struct inode_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (int ,char const*,char*,int ) ;
 int FUNC_7 (struct mount*,char*,struct statbuf*,int) ;
 int FUNC_8 (struct mount*,char*,int,int ) ;
 int FUNC_9 (struct mount*,char*,struct statbuf*,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(const char *VAR_7, struct fd *VAR_8, uint32_t *VAR_9) {
    char VAR_10[VAR_1];
    int VAR_11 = FUNC_6(VAR_0, VAR_7, VAR_10, VAR_2);
    if (VAR_11 < 0)
        return VAR_11;
    struct mount *VAR_12 = FUNC_1(VAR_10);
    struct statbuf VAR_13;
    VAR_11 = VAR_12->fs->stat(VAR_12, VAR_10, &VAR_13, 1);


    if (VAR_8 != ((void*)0)) {

        if (VAR_11 == 0) {
            VAR_11 = VAR_4;
            goto out;
        }

        if (VAR_11 < 0) {
            mode_t_ VAR_14 = 0777;
            struct fs_info *VAR_15 = VAR_6->fs;
            FUNC_4(&VAR_15->lock);
            VAR_14 &= ~VAR_15->umask;
            FUNC_11(&VAR_15->lock);
            VAR_11 = VAR_12->fs->mknod(VAR_12, VAR_10, VAR_3 | VAR_14, 0);
            if (VAR_11 < 0)
                goto out;
            VAR_11 = VAR_12->fs->stat(VAR_12, VAR_10, &VAR_13, 1);
            if (VAR_11 < 0)
                goto out;
        }
    }



    if (VAR_8 == ((void*)0) && VAR_11 < 0)
        goto out;

    if (!FUNC_0(VAR_13.mode)) {
        VAR_11 = VAR_5;
        goto out;
    }


    struct inode_data *VAR_16 = FUNC_2(VAR_12, VAR_13.inode);
    FUNC_4(&VAR_16->lock);
    if (VAR_16->socket_id == 0)
        VAR_16->socket_id = FUNC_10();
    FUNC_11(&VAR_16->lock);
    *VAR_9 = VAR_16->socket_id;

    FUNC_5(VAR_12);
    if (VAR_8 != ((void*)0))
        VAR_8->socket.unix_name_inode = VAR_16;
    else
        FUNC_3(VAR_16);
    return 0;

out:
    FUNC_5(VAR_12);
    return VAR_11;
}
