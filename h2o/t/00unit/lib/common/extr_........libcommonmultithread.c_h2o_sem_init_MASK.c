
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* ssize_t ;
struct TYPE_3__ {void* _capacity; void* _cur; int _cond; int _mutex; } ;
typedef TYPE_1__ h2o_sem_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(h2o_sem_t *VAR_0, ssize_t VAR_1)
{
    FUNC_1(&VAR_0->_mutex, ((void*)0));
    FUNC_0(&VAR_0->_cond, ((void*)0));
    VAR_0->_cur = VAR_1;
    VAR_0->_capacity = VAR_1;
}
