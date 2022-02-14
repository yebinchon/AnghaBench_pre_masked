
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ size; void** entries; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_14__ {TYPE_8__ _loggers; TYPE_1__ handlers; } ;
typedef TYPE_3__ h2o_pathconf_t ;
struct TYPE_15__ {int on_context_dispose; int on_context_init; int log_access; scalar_t__ _config_slot; } ;
typedef TYPE_4__ h2o_logger_t ;
struct TYPE_13__ {int size; TYPE_3__* entries; } ;
struct TYPE_16__ {TYPE_2__ paths; } ;
typedef TYPE_5__ h2o_hostconf_t ;
struct TYPE_17__ {TYPE_5__** hosts; int _num_config_slots; } ;
typedef TYPE_6__ h2o_globalconf_t ;


 TYPE_4__* VAR_0 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_8__*,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(h2o_globalconf_t *VAR_4)
{
    int VAR_5, VAR_6;
    h2o_logger_t *VAR_7;
    h2o_hostconf_t *VAR_8;

    VAR_0 = VAR_7 = FUNC_0(sizeof(*VAR_7));
    FUNC_2(VAR_7, 0, sizeof(*VAR_7));
    VAR_7->_config_slot = VAR_4->_num_config_slots++;
    VAR_7->log_access = VAR_3;
    VAR_7->on_context_init = VAR_2;
    VAR_7->on_context_dispose = VAR_1;

    for (VAR_6 = 0; VAR_4->hosts[VAR_6]; VAR_6++) {
        VAR_8 = VAR_4->hosts[VAR_6];
        for (VAR_5 = 0; VAR_5 < VAR_8->paths.size; VAR_5++) {
            int VAR_9;
            for (VAR_9 = 0; VAR_9 < VAR_8->paths.entries[VAR_5].handlers.size; VAR_9++) {
                h2o_pathconf_t *VAR_10 = &VAR_8->paths.entries[VAR_5];
                FUNC_1(((void*)0), &VAR_10->_loggers, VAR_10->_loggers.size + 1);
                VAR_10->_loggers.entries[VAR_10->_loggers.size++] = (void *)VAR_7;
            }
        }
    }
}
