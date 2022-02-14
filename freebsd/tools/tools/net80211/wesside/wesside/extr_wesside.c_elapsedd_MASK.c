
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (int) ;

int FUNC_1(struct timeval *VAR_0, struct timeval *VAR_1)
{
        int VAR_2;

        VAR_2 = VAR_1->tv_sec - VAR_0->tv_sec;
        FUNC_0(VAR_2 >= 0);
        if (VAR_2 == 0) {
                VAR_2 = VAR_1->tv_usec - VAR_0->tv_usec;
        } else {
                VAR_2 = (VAR_2 - 1)*1000*1000;
                VAR_2 += 1000*1000-VAR_0->tv_usec;
                VAR_2 += VAR_1->tv_usec;
        }

        return VAR_2;
}
