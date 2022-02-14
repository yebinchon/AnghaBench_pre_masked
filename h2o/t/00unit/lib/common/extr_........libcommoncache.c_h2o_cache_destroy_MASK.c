
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int mutex; int table; } ;
typedef TYPE_1__ h2o_cache_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(h2o_cache_t *VAR_1)
{
    FUNC_1(VAR_1);
    FUNC_2(VAR_1, VAR_1->table);
    if ((VAR_1->flags & VAR_0) != 0)
        FUNC_3(&VAR_1->mutex);
    FUNC_0(VAR_1);
}
