
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* timeout; } ;
struct TYPE_7__ {int data; int (* scheduleTimer ) (int ,TYPE_4__) ;} ;
struct TYPE_8__ {TYPE_1__ c; TYPE_2__ ev; } ;
typedef TYPE_3__ redisAsyncContext ;
struct TYPE_9__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (int ,TYPE_4__) ;

__attribute__((used)) static inline void FUNC_1(redisAsyncContext *VAR_0) {
    if (VAR_0->c.timeout && VAR_0->ev.scheduleTimer &&
        (VAR_0->c.timeout->tv_sec || VAR_0->c.timeout->tv_usec)) {
        VAR_0->ev.scheduleTimer(VAR_0->ev.data, *VAR_0->c.timeout);






    }
}
