
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mount {int dummy; } ;
struct ish_stat {int mode; scalar_t__ rdev; int gid; int uid; } ;
typedef int mode_t_ ;
struct TYPE_4__ {int egid; int euid; } ;
struct TYPE_3__ {int (* mkdir ) (struct mount*,char const*,int) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*,char const*,struct ish_stat*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct mount*,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct mount *VAR_3, const char *VAR_4, mode_t_ VAR_5) {
    FUNC_0(VAR_3);
    int VAR_6 = VAR_2.mkdir(VAR_3, VAR_4, 0777);
    if (VAR_6 < 0) {
        FUNC_2(VAR_3);
        return VAR_6;
    }
    struct ish_stat VAR_7;
    VAR_7.mode = VAR_5 | VAR_0;
    VAR_7.uid = VAR_1->euid;
    VAR_7.gid = VAR_1->egid;
    VAR_7.rdev = 0;
    FUNC_3(VAR_3, VAR_4, &VAR_7);
    FUNC_1(VAR_3);
    return 0;
}
