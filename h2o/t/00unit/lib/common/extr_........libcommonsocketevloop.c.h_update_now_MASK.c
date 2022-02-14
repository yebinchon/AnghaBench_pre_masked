
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int _now_nanosec; int _now_millisec; TYPE_3__ _tv_at; } ;
typedef TYPE_1__ h2o_evloop_t ;


 int FUNC_0 (TYPE_3__*,int *) ;

void FUNC_1(h2o_evloop_t *VAR_0)
{
    FUNC_0(&VAR_0->_tv_at, ((void*)0));
    VAR_0->_now_nanosec = ((uint64_t)VAR_0->_tv_at.tv_sec * 1000000 + VAR_0->_tv_at.tv_usec) * 1000;
    VAR_0->_now_millisec = VAR_0->_now_nanosec / 1000000;
}
