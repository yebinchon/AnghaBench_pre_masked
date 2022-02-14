
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;int sa_mask; } ;
typedef int action ;


 int FUNC_0 (struct sigaction*,int ,int) ;
 int FUNC_1 (int,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(int VAR_0, void (*VAR_1)(int VAR_2))
{
    struct sigaction VAR_3;

    FUNC_0(&VAR_3, 0, sizeof(VAR_3));
    FUNC_2(&VAR_3.sa_mask);
    VAR_3.sa_handler = VAR_1;
    FUNC_1(VAR_0, &VAR_3, ((void*)0));
}
