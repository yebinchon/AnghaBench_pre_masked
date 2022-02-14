
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int root_fd; } ;
struct ish_stat {int mode; scalar_t__ rdev; int gid; int uid; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int egid; int euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (struct mount*,char const*,struct ish_stat*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int,char const*,int ) ;

__attribute__((used)) static int FUNC_11(struct mount *VAR_6, const char *VAR_7, const char *VAR_8) {
    FUNC_1(VAR_6);

    int VAR_9 = FUNC_6(VAR_6->root_fd, FUNC_5(VAR_8), VAR_2 | VAR_0 | VAR_1, 0666);
    if (VAR_9 < 0) {
        FUNC_3(VAR_6);
        return FUNC_4();
    }
    ssize_t VAR_10 = FUNC_10(VAR_9, VAR_7, FUNC_8(VAR_7));
    FUNC_0(VAR_9);
    if (VAR_10 < 0) {
        int VAR_11 = VAR_5;
        FUNC_9(VAR_6->root_fd, FUNC_5(VAR_8), 0);
        FUNC_3(VAR_6);
        VAR_5 = VAR_11;
        return FUNC_4();
    }


    struct ish_stat VAR_12;
    VAR_12.mode = VAR_3 | 0777;
    VAR_12.uid = VAR_4->euid;
    VAR_12.gid = VAR_4->egid;
    VAR_12.rdev = 0;
    FUNC_7(VAR_6, VAR_8, &VAR_12);
    FUNC_2(VAR_6);
    return 0;
}
