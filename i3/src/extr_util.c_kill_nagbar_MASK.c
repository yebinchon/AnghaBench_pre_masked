
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(pid_t *VAR_1, bool VAR_2) {
    if (*VAR_1 == -1)
        return;

    if (FUNC_0(*VAR_1, VAR_0) == -1)
        FUNC_2("kill(configerror_nagbar) failed");

    if (!VAR_2)
        return;





    FUNC_1(*VAR_1, ((void*)0), 0);
}
