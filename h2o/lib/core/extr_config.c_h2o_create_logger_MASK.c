
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ size; TYPE_3__** entries; } ;
struct TYPE_10__ {TYPE_5__ _loggers; TYPE_1__* global; } ;
typedef TYPE_2__ h2o_pathconf_t ;
struct TYPE_11__ {scalar_t__ _config_slot; } ;
typedef TYPE_3__ h2o_logger_t ;
struct TYPE_9__ {int _num_config_slots; } ;


 TYPE_3__* FUNC_0 (size_t) ;
 int FUNC_1 (int *,TYPE_5__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,size_t) ;

h2o_logger_t *FUNC_3(h2o_pathconf_t *VAR_0, size_t VAR_1)
{
    h2o_logger_t *VAR_2 = FUNC_0(VAR_1);

    FUNC_2(VAR_2, 0, VAR_1);
    VAR_2->_config_slot = VAR_0->global->_num_config_slots++;

    FUNC_1(((void*)0), &VAR_0->_loggers, VAR_0->_loggers.size + 1);
    VAR_0->_loggers.entries[VAR_0->_loggers.size++] = VAR_2;

    return VAR_2;
}
