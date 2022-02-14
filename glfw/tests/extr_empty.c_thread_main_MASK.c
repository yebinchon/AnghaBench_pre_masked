
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct timespec*,int *) ;

__attribute__((used)) static int FUNC_3(void* VAR_2)
{
    struct timespec VAR_3;

    while (VAR_1)
    {
        FUNC_0(VAR_0, &VAR_3);
        VAR_3.tv_sec += 1;
        FUNC_2(&VAR_3, ((void*)0));

        FUNC_1();
    }

    return 0;
}
