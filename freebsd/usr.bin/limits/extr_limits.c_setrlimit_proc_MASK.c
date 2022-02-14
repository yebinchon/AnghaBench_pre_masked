
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,int,int *,int ,struct rlimit const*,int) ;

__attribute__((used)) static void
FUNC_2(pid_t VAR_4, int VAR_5, const struct rlimit *VAR_6)
{
    int VAR_7;
    int VAR_8[5];

    VAR_8[0] = VAR_0;
    VAR_8[1] = VAR_2;
    VAR_8[2] = VAR_3;
    VAR_8[3] = VAR_4;
    VAR_8[4] = VAR_5;
    VAR_7 = FUNC_1(VAR_8, 5, ((void*)0), 0, VAR_6, sizeof(*VAR_6));
    if (VAR_7 == -1)
 FUNC_0(VAR_1, "sysctl: kern.proc.rlimit: %d", VAR_4);
}
