
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statbuf {int rdev; int gid; int uid; int mode; int inode; } ;
struct mount {int dummy; } ;
struct ish_stat {int rdev; int gid; int uid; int mode; } ;
typedef int ino_t ;
struct TYPE_2__ {int (* stat ) (struct mount*,char const*,struct statbuf*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*,char const*,struct ish_stat*,int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct mount*,char const*,struct statbuf*,int) ;

__attribute__((used)) static int FUNC_5(struct mount *VAR_2, const char *VAR_3, struct statbuf *VAR_4, bool VAR_5) {
    FUNC_0(VAR_2);
    struct ish_stat VAR_6;
    ino_t VAR_7;
    if (!FUNC_3(VAR_2, VAR_3, &VAR_6, &VAR_7)) {
        FUNC_2(VAR_2);
        return VAR_0;
    }
    int VAR_8 = VAR_1.stat(VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_1(VAR_2);
    if (VAR_8 < 0)
        return VAR_8;
    VAR_4->inode = VAR_7;
    VAR_4->mode = VAR_6.mode;
    VAR_4->uid = VAR_6.uid;
    VAR_4->gid = VAR_6.gid;
    VAR_4->rdev = VAR_6.rdev;
    return 0;
}
