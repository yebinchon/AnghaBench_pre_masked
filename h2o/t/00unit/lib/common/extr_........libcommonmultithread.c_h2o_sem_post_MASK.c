
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _mutex; int _cond; int _cur; } ;
typedef TYPE_1__ h2o_sem_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(h2o_sem_t *VAR_0)
{
    FUNC_1(&VAR_0->_mutex);
    ++VAR_0->_cur;
    FUNC_0(&VAR_0->_cond);
    FUNC_2(&VAR_0->_mutex);
}
