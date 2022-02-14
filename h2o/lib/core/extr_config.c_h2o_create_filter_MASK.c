
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int size; TYPE_3__** entries; } ;
struct TYPE_12__ {TYPE_7__ _filters; TYPE_1__* global; } ;
typedef TYPE_2__ h2o_pathconf_t ;
struct TYPE_13__ {scalar_t__ _config_slot; } ;
typedef TYPE_3__ h2o_filter_t ;
struct TYPE_11__ {int _num_config_slots; } ;


 TYPE_3__* FUNC_0 (size_t) ;
 int FUNC_1 (int *,TYPE_7__*,int) ;
 int FUNC_2 (TYPE_3__**,TYPE_3__**,int) ;
 int FUNC_3 (TYPE_3__*,int ,size_t) ;

h2o_filter_t *FUNC_4(h2o_pathconf_t *VAR_0, size_t VAR_1)
{
    h2o_filter_t *VAR_2 = FUNC_0(VAR_1);

    FUNC_3(VAR_2, 0, VAR_1);
    VAR_2->_config_slot = VAR_0->global->_num_config_slots++;

    FUNC_1(((void*)0), &VAR_0->_filters, VAR_0->_filters.size + 1);
    FUNC_2(VAR_0->_filters.entries + 1, VAR_0->_filters.entries, VAR_0->_filters.size * sizeof(VAR_0->_filters.entries[0]));
    VAR_0->_filters.entries[0] = VAR_2;
    ++VAR_0->_filters.size;

    return VAR_2;
}
