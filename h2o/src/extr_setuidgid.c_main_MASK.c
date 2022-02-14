
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_gid; int pw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char**) ;
 int FUNC_1 (int ,char*,...) ;
 struct passwd* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 char* FUNC_7 (scalar_t__) ;

int FUNC_8(int VAR_4, char **VAR_5)
{
    struct passwd *VAR_6;

    if (VAR_4 < 3) {
        FUNC_1(VAR_3, "no command (usage: setuidgid user cmd args...)\n");
        return VAR_0;
    }
    --VAR_4;
    ++VAR_5;

    VAR_2 = 0;
    if ((VAR_6 = FUNC_2(*VAR_5)) == ((void*)0)) {
        if (VAR_2 == 0) {
            FUNC_1(VAR_3, "unknown user:%s\n", *VAR_5);
            return VAR_0;
        } else {
            FUNC_4("getpwnam");
            return VAR_1;
        }
    }
    --VAR_4;
    ++VAR_5;

    if (FUNC_5(VAR_6->pw_gid) != 0) {
        FUNC_4("setgid failed");
        return VAR_1;
    }
    if (FUNC_3(VAR_6->pw_name, VAR_6->pw_gid) != 0) {
        FUNC_4("initgroups failed");
        return VAR_1;
    }
    if (FUNC_6(VAR_6->pw_uid) != 0) {
        FUNC_4("setuid failed");
        return VAR_1;
    }

    FUNC_0(*VAR_5, VAR_5);
    FUNC_1(VAR_3, "execvp failed to launch file:%s:%s\n", *VAR_5, FUNC_7(VAR_2));
    return VAR_1;
}
