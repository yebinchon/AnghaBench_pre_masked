
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int exit; int enter; } ;
struct st_h2o_file_configurator_t {TYPE_2__ super; TYPE_1__* vars; TYPE_1__* _vars_stack; } ;
typedef int h2o_globalconf_t ;
struct TYPE_3__ {int index_files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,char*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_2(h2o_globalconf_t *VAR_15)
{
    struct st_h2o_file_configurator_t *VAR_16 = (void *)FUNC_0(VAR_15, sizeof(*VAR_16));

    VAR_16->super.enter = VAR_9;
    VAR_16->super.exit = VAR_11;
    VAR_16->vars = VAR_16->_vars_stack;
    VAR_16->vars->index_files = VAR_6;

    FUNC_1(
        &VAR_16->super, "file.dir", VAR_5 | VAR_2 | VAR_1,
        VAR_7);
    FUNC_1(
        &VAR_16->super, "file.file",
        VAR_5 | VAR_2 | VAR_1, VAR_12);
    FUNC_1(&VAR_16->super, "file.index",
                                    (VAR_0 & ~VAR_4) |
                                        VAR_3,
                                    VAR_13);
    FUNC_1(&VAR_16->super, "file.etag",
                                    (VAR_0 & ~VAR_4) |
                                        VAR_2,
                                    VAR_10);
    FUNC_1(&VAR_16->super, "file.send-compressed",
                                    (VAR_0 & ~VAR_4) |
                                        VAR_2,
                                    VAR_14);
    FUNC_1(&VAR_16->super, "file.send-gzip",
                                    (VAR_0 & ~VAR_4) |
                                        VAR_2,
                                    VAR_14);
    FUNC_1(&VAR_16->super, "file.dirlisting",
                                    (VAR_0 & ~VAR_4) |
                                        VAR_2,
                                    VAR_8);
}
