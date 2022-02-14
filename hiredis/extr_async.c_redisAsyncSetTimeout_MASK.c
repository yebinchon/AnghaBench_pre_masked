
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tv ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {struct timeval* timeout; } ;
struct TYPE_5__ {TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 struct timeval* FUNC_0 (int,int) ;

void FUNC_1(redisAsyncContext *VAR_0, struct timeval VAR_1) {
    if (!VAR_0->c.timeout) {
        VAR_0->c.timeout = FUNC_0(1, sizeof(VAR_1));
    }

    if (VAR_1.tv_sec == VAR_0->c.timeout->tv_sec &&
        VAR_1.tv_usec == VAR_0->c.timeout->tv_usec) {
        return;
    }

    *VAR_0->c.timeout = VAR_1;
}
