
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_sigaction; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void) {
    struct sigaction VAR_9;

    VAR_9.sa_sigaction = VAR_8;
    VAR_9.sa_flags = VAR_0 | VAR_1 | VAR_2;
    FUNC_2(&VAR_9.sa_mask);


    if (FUNC_1(VAR_6, &VAR_9, ((void*)0)) == -1 ||
        FUNC_1(VAR_5, &VAR_9, ((void*)0)) == -1 ||
        FUNC_1(VAR_3, &VAR_9, ((void*)0)) == -1 ||
        FUNC_1(VAR_4, &VAR_9, ((void*)0)) == -1 ||
        FUNC_1(VAR_7, &VAR_9, ((void*)0)) == -1)
        FUNC_0("Could not setup signal handler.\n");
}
