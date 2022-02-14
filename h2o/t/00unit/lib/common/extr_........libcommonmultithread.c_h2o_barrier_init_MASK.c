
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t _count; size_t _out_of_wait; int _cond; int _mutex; } ;
typedef TYPE_1__ h2o_barrier_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(h2o_barrier_t *VAR_0, size_t VAR_1)
{
    FUNC_1(&VAR_0->_mutex, ((void*)0));
    FUNC_0(&VAR_0->_cond, ((void*)0));
    VAR_0->_count = VAR_1;
    VAR_0->_out_of_wait = VAR_1;
}
