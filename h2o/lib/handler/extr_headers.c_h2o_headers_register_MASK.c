
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int on_informational; int on_setup_ostream; } ;
struct st_headers_filter_t {int * cmds; TYPE_1__ super; } ;
struct TYPE_12__ {int on_req; } ;
struct st_headers_early_hints_handler_t {TYPE_4__ super; int * cmds; } ;
struct TYPE_10__ {int size; TYPE_4__** entries; } ;
struct TYPE_11__ {TYPE_2__ handlers; } ;
typedef TYPE_3__ h2o_pathconf_t ;
typedef int h2o_headers_command_t ;
typedef int h2o_handler_t ;


 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__**,TYPE_4__**,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct st_headers_filter_t*) ;

void FUNC_4(h2o_pathconf_t *VAR_3, h2o_headers_command_t *VAR_4)
{
    struct st_headers_filter_t *VAR_5 = (void *)FUNC_0(VAR_3, sizeof(*VAR_5));

    VAR_5->super.on_setup_ostream = VAR_2;
    VAR_5->super.on_informational = VAR_0;
    VAR_5->cmds = VAR_4;

    if (FUNC_3(VAR_5)) {
        struct st_headers_early_hints_handler_t *VAR_6 = (void *)FUNC_1(VAR_3, sizeof(*VAR_6));
        VAR_6->cmds = VAR_4;
        VAR_6->super.on_req = VAR_1;


        FUNC_2(VAR_3->handlers.entries + 1, VAR_3->handlers.entries,
                sizeof(h2o_handler_t *) * (VAR_3->handlers.size - 1));
        VAR_3->handlers.entries[0] = &VAR_6->super;
    }
}
