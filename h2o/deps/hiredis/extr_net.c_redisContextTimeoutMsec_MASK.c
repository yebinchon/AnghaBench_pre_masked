
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_3__ {struct timeval* timeout; } ;
typedef TYPE_1__ redisContext ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(redisContext *VAR_4, long *VAR_5)
{
    const struct timeval *VAR_6 = VAR_4->timeout;
    long VAR_7 = -1;


    if (VAR_6 != ((void*)0)) {
        if (VAR_6->tv_usec > 1000000 || VAR_6->tv_sec > VAR_3) {
            *VAR_5 = VAR_7;
            return VAR_1;
        }

        VAR_7 = (VAR_6->tv_sec * 1000) + ((VAR_6->tv_usec + 999) / 1000);

        if (VAR_7 < 0 || VAR_7 > VAR_0) {
            VAR_7 = VAR_0;
        }
    }

    *VAR_5 = VAR_7;
    return VAR_2;
}
