
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mount {int dummy; } ;
struct ish_stat {int mode; scalar_t__ rdev; int gid; int uid; } ;
typedef int mode_t_ ;
typedef scalar_t__ dev_t_ ;
struct TYPE_4__ {int egid; int euid; } ;
struct TYPE_3__ {int (* mknod ) (struct mount*,char const*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*,char const*,struct ish_stat*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (struct mount*,char const*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct mount *VAR_4, const char *VAR_5, mode_t_ VAR_6, dev_t_ VAR_7) {
    mode_t_ VAR_8 = 0666;
    if (FUNC_0(VAR_6) || FUNC_1(VAR_6) || FUNC_2(VAR_6))
        VAR_8 |= VAR_1;
    else
        VAR_8 |= VAR_6 & VAR_0;
    FUNC_3(VAR_4);
    int VAR_9 = VAR_3.mknod(VAR_4, VAR_5, VAR_8, 0);
    if (VAR_9 < 0) {
        FUNC_5(VAR_4);
        return VAR_9;
    }
    struct ish_stat VAR_10;
    VAR_10.mode = VAR_6;
    VAR_10.uid = VAR_2->euid;
    VAR_10.gid = VAR_2->egid;
    VAR_10.rdev = 0;
    if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
        VAR_10.rdev = VAR_7;
    FUNC_6(VAR_4, VAR_5, &VAR_10);
    FUNC_4(VAR_4);
    return VAR_9;
}
