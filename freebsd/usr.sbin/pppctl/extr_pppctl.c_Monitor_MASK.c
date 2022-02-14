
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int trm; scalar_t__ ppp; } ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_3)
{
    struct thread_data *VAR_4;
    fd_set VAR_5;
    int VAR_6;

    VAR_4 = (struct thread_data *)VAR_3;
    FUNC_1(&VAR_5);
    FUNC_0(VAR_4->ppp, &VAR_5);

    FUNC_4(&VAR_1);
    while (!VAR_2)
        if ((VAR_6 = FUNC_3(VAR_4->ppp + 1, &VAR_5, ((void*)0), ((void*)0), ((void*)0))) > 0) {
            FUNC_2(VAR_4->trm, VAR_0);
            FUNC_4(&VAR_1);
        }

    return ((void*)0);
}
