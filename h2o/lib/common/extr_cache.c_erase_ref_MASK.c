
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int khiter_t ;
struct TYPE_10__ {int size; int table; } ;
typedef TYPE_2__ h2o_cache_t ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_11__ {TYPE_1__ value; int _age_link; int _lru_link; } ;
typedef TYPE_3__ h2o_cache_ref_t ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(h2o_cache_t *VAR_0, khiter_t VAR_1, int VAR_2)
{
    h2o_cache_ref_t *VAR_3 = FUNC_3(VAR_0->table, VAR_1);

    if (!VAR_2)
        FUNC_2(VAR_0, VAR_0->table, VAR_1);
    FUNC_1(&VAR_3->_lru_link);
    FUNC_1(&VAR_3->_age_link);
    VAR_0->size -= VAR_3->value.len;

    FUNC_0(VAR_0, VAR_3);
}
