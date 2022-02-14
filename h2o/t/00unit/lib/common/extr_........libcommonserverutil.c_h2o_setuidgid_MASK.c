
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_uid; scalar_t__ pw_gid; int pw_name; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(const char *VAR_1)
{
    struct passwd VAR_2, *VAR_3;
    char VAR_4[65536];

    VAR_0 = 0;
    if (FUNC_0(VAR_1, &VAR_2, VAR_4, sizeof(VAR_4), &VAR_3) != 0) {
        FUNC_2("getpwnam_r");
        return -1;
    }
    if (VAR_3 == ((void*)0)) {
        FUNC_1("unknown user:%s\n", VAR_1);
        return -1;
    }
    if (FUNC_4(VAR_3->pw_gid) != 0) {
        FUNC_1("setgid(%d) failed:%s\n", (int)VAR_3->pw_gid, FUNC_6(VAR_0));
        return -1;
    }
    if (FUNC_3(VAR_3->pw_name, VAR_3->pw_gid) != 0) {
        FUNC_1("initgroups(%s, %d) failed:%s\n", VAR_3->pw_name, (int)VAR_3->pw_gid, FUNC_6(VAR_0));
        return -1;
    }
    if (FUNC_5(VAR_3->pw_uid) != 0) {
        FUNC_1("setuid(%d) failed:%s\n", (int)VAR_3->pw_uid, FUNC_6(VAR_0));
        return -1;
    }

    return 0;
}
