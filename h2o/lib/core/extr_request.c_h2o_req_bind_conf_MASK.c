
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int num_loggers; int loggers; int num_filters; int filters; TYPE_4__* pathconf; int * hostconf; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_8__ {int size; int entries; } ;
struct TYPE_9__ {int size; int entries; } ;
struct TYPE_11__ {int * env; TYPE_1__ _loggers; TYPE_2__ _filters; } ;
typedef TYPE_4__ h2o_pathconf_t ;
typedef int h2o_hostconf_t ;


 int FUNC_0 (TYPE_3__*,int *) ;

void FUNC_1(h2o_req_t *VAR_0, h2o_hostconf_t *VAR_1, h2o_pathconf_t *VAR_2)
{
    VAR_0->hostconf = VAR_1;
    VAR_0->pathconf = VAR_2;


    VAR_0->filters = VAR_2->_filters.entries;
    VAR_0->num_filters = VAR_2->_filters.size;
    VAR_0->loggers = VAR_2->_loggers.entries;
    VAR_0->num_loggers = VAR_2->_loggers.size;

    if (VAR_2->env != ((void*)0))
        FUNC_0(VAR_0, VAR_2->env);
}
