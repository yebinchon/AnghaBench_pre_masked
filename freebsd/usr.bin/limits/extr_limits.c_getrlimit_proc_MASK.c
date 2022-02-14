
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*,int,struct rlimit*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(pid_t VAR_4, int VAR_5, struct rlimit *VAR_6)
{
    int VAR_7;
    int VAR_8[5];
    size_t VAR_9;

    VAR_8[0] = VAR_0;
    VAR_8[1] = VAR_2;
    VAR_8[2] = VAR_3;
    VAR_8[3] = VAR_4;
    VAR_8[4] = VAR_5;
    VAR_9 = sizeof(*VAR_6);
    VAR_7 = FUNC_2(VAR_8, 5, VAR_6, &VAR_9, ((void*)0), 0);
    if (VAR_7 == -1)
 FUNC_0(VAR_1, "sysctl: kern.proc.rlimit: %d", VAR_4);
    if (VAR_9 != sizeof(*VAR_6))
 FUNC_1(VAR_1, "sysctl() returns wrong size");
}
