
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mount {int dummy; } ;
struct ish_stat {int mode; scalar_t__ rdev; int gid; int uid; } ;
struct fd {scalar_t__ fake_inode; int * ops; } ;
struct TYPE_4__ {int egid; int euid; } ;
struct TYPE_3__ {struct fd* (* open ) (struct mount*,char const*,int,int) ;} ;


 struct fd* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_4 ;
 int FUNC_4 (struct fd*) ;
 int FUNC_5 (struct mount*,char const*,struct ish_stat*) ;
 void* FUNC_6 (struct mount*,char const*) ;
 TYPE_1__ VAR_5 ;
 struct fd* FUNC_7 (struct mount*,char const*,int,int) ;

__attribute__((used)) static struct fd *FUNC_8(struct mount *VAR_6, const char *VAR_7, int VAR_8, int VAR_9) {
    struct fd *VAR_10 = VAR_5.open(VAR_6, VAR_7, VAR_8, 0666);
    if (FUNC_1(VAR_10))
        return VAR_10;
    FUNC_2(VAR_6);
    VAR_10->fake_inode = FUNC_6(VAR_6, VAR_7);
    if (VAR_8 & VAR_0) {
        struct ish_stat VAR_11;
        VAR_11.mode = VAR_9 | VAR_1;
        VAR_11.uid = VAR_3->euid;
        VAR_11.gid = VAR_3->egid;
        VAR_11.rdev = 0;
        if (VAR_10->fake_inode == 0) {
            FUNC_5(VAR_6, VAR_7, &VAR_11);
            VAR_10->fake_inode = FUNC_6(VAR_6, VAR_7);
        }
    }
    FUNC_3(VAR_6);
    if (VAR_10->fake_inode == 0) {


        FUNC_4(VAR_10);
        return FUNC_0(VAR_2);
    }
    VAR_10->ops = &VAR_4;
    return VAR_10;
}
