
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int Uint32 ;


 int FUNC_0 (struct timespec*,struct timespec*) ;

void FUNC_1(Uint32 VAR_0)
{
    int VAR_1;
    struct timespec VAR_2, VAR_3;


    VAR_2.tv_sec = VAR_0 / 1000;
    VAR_2.tv_nsec = (VAR_0 % 1000) * 1000000;
    do {
        VAR_3.tv_sec = VAR_2.tv_sec;
        VAR_3.tv_nsec = VAR_2.tv_nsec;
        VAR_1 = FUNC_0(&VAR_3, &VAR_2);
    } while (VAR_1);
}
