
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) __attribute__((noreturn)) static void FUNC_7(int VAR_3, int VAR_4, const char *VAR_5)
{
    pthread_t VAR_6;
    pthread_attr_t VAR_7;
    int VAR_8;

    {
        int VAR_9 = (int)FUNC_6(VAR_0) - 1;
        for (; VAR_9 > 2; --VAR_9) {
            if (VAR_9 == VAR_3 || VAR_9 == VAR_4)
                continue;
            FUNC_1(VAR_9);
        }
    }

    FUNC_3(&VAR_7);
    FUNC_4(&VAR_7, 1);

    if (FUNC_5(&VAR_6, &VAR_7, VAR_1, (char *)((void*)0) + VAR_4) != 0)
        FUNC_2("pthread_create failed");

    while (1) {
        while ((VAR_8 = FUNC_0(VAR_3, ((void*)0), ((void*)0))) == -1)
            ;
        if (FUNC_5(&VAR_6, &VAR_7, VAR_2, (char *)((void*)0) + VAR_8) != 0)
            FUNC_2("pthread_create failed");
    }
}
