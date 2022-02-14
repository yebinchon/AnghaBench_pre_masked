
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int exit; int enter; } ;
struct fastcgi_configurator_t {TYPE_2__ super; TYPE_1__* vars; TYPE_1__* _vars_stack; } ;
typedef int h2o_globalconf_t ;
struct TYPE_3__ {scalar_t__ keepalive_timeout; int io_timeout; } ;


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

void FUNC_2(h2o_globalconf_t *VAR_14)
{
    struct fastcgi_configurator_t *VAR_15 = (void *)FUNC_0(VAR_14, sizeof(*VAR_15));


    VAR_15->vars = VAR_15->_vars_stack;
    VAR_15->vars->io_timeout = VAR_5;
    VAR_15->vars->keepalive_timeout = 0;


    VAR_15->super.enter = VAR_8;
    VAR_15->super.exit = VAR_9;

    FUNC_1(&VAR_15->super, "fastcgi.connect",
                                    VAR_4 | VAR_3 | VAR_1,
                                    VAR_6);
    FUNC_1(&VAR_15->super, "fastcgi.spawn",
                                    VAR_4 | VAR_3 | VAR_1,
                                    VAR_11);
    FUNC_1(&VAR_15->super, "fastcgi.timeout.io",
                                    VAR_0 | VAR_2, VAR_12);
    FUNC_1(&VAR_15->super, "fastcgi.timeout.keepalive",
                                    VAR_0 | VAR_2,
                                    VAR_13);
    FUNC_1(&VAR_15->super, "fastcgi.document_root",
                                    VAR_0 | VAR_2,
                                    VAR_7);
    FUNC_1(&VAR_15->super, "fastcgi.send-delegated-uri",
                                    VAR_0 | VAR_2,
                                    VAR_10);
}
