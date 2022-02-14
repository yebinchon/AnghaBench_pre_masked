
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * path_from_inode; } ;
struct mount {TYPE_1__ stmt; } ;
struct fd {int * ops; int fake_inode; } ;
typedef int sqlite3_stmt ;
typedef int ino_t ;
struct TYPE_4__ {struct fd* (* open ) (struct mount*,char const*,int ,int ) ;} ;


 struct fd* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct fd*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*,int *) ;
 int FUNC_5 (struct mount*,int *) ;
 int FUNC_6 (struct mount*) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 struct fd* FUNC_9 (struct mount*,char const*,int ,int ) ;
 struct fd* FUNC_10 (struct mount*,char const*,int ,int ) ;

struct fd *FUNC_11(struct mount *VAR_6, ino_t VAR_7) {
    FUNC_2(VAR_6);
    sqlite3_stmt *VAR_8 = VAR_6->stmt.path_from_inode;
    FUNC_7(VAR_8, 1, VAR_7);
step:
    if (!FUNC_4(VAR_6, VAR_8)) {
        FUNC_5(VAR_6, VAR_8);
        FUNC_6(VAR_6);
        return FUNC_0(VAR_3);
    }
    const char *VAR_9 = (const char *) FUNC_8(VAR_8, 0);
    struct fd *VAR_10 = VAR_5.open(VAR_6, VAR_9, VAR_1, 0);
    if (FUNC_1(VAR_10) == VAR_2)
        VAR_10 = VAR_5.open(VAR_6, VAR_9, VAR_0, 0);
    if (FUNC_1(VAR_10) == VAR_3)
        goto step;
    FUNC_5(VAR_6, VAR_8);
    FUNC_3(VAR_6);
    VAR_10->fake_inode = VAR_7;
    VAR_10->ops = &VAR_4;
    return VAR_10;
}
