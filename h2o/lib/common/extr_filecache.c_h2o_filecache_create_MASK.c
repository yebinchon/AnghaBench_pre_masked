
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t capacity; int lru; int hash; } ;
typedef TYPE_1__ h2o_filecache_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

h2o_filecache_t *FUNC_3(size_t VAR_1)
{
    h2o_filecache_t *VAR_2 = FUNC_1(sizeof(*VAR_2));

    VAR_2->hash = FUNC_2(VAR_0);
    FUNC_0(&VAR_2->lru);
    VAR_2->capacity = VAR_1;

    return VAR_2;
}
