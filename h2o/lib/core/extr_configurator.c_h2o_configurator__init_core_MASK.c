
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int exit; int enter; } ;
struct st_core_configurator_t {TYPE_4__ super; TYPE_3__* vars; TYPE_3__* _vars_stack; } ;
typedef int h2o_globalconf_t ;
typedef TYPE_4__ h2o_configurator_t ;
struct TYPE_8__ {int emit_request_errors; } ;
struct TYPE_7__ {int reprioritize_blocking_assets; int push_preload; } ;
struct TYPE_9__ {TYPE_2__ error_log; TYPE_1__ http2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_4__*,char*,int,int ) ;
 int * FUNC_2 (int *,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;

void FUNC_3(h2o_globalconf_t *VAR_42)
{

    if (FUNC_2(VAR_42, "files") != ((void*)0))
        return;

    {
        h2o_configurator_t *VAR_43 = FUNC_0(VAR_42, sizeof(*VAR_43));
        FUNC_1(
            VAR_43, "hosts", VAR_6 | VAR_2 | VAR_1,
            VAR_13);
        FUNC_1(
            VAR_43, "paths", VAR_7 | VAR_2 | VAR_1,
            VAR_33);
    };

    {
        struct st_core_configurator_t *VAR_44 = (void *)FUNC_0(VAR_42, sizeof(*VAR_44));
        VAR_44->super.enter = VAR_40;
        VAR_44->super.exit = VAR_41;
        VAR_44->vars = VAR_44->_vars_stack;
        VAR_44->vars->http2.reprioritize_blocking_assets = 1;
        VAR_44->vars->http2.push_preload = 1;
        VAR_44->vars->error_log.emit_request_errors = 1;
        FUNC_1(&VAR_44->super, "limit-request-body",
                                        VAR_6 | VAR_3,
                                        VAR_27);
        FUNC_1(&VAR_44->super, "max-delegations",
                                        VAR_6 | VAR_3,
                                        VAR_28);
        FUNC_1(&VAR_44->super, "handshake-timeout",
                                        VAR_6 | VAR_3,
                                        VAR_12);
        FUNC_1(&VAR_44->super, "http1-request-timeout",
                                        VAR_6 | VAR_3,
                                        VAR_14);
        FUNC_1(&VAR_44->super, "http1-upgrade-to-http2",
                                        VAR_6 | VAR_3,
                                        VAR_15);
        FUNC_1(&VAR_44->super, "http2-idle-timeout",
                                        VAR_6 | VAR_3,
                                        VAR_19);
        FUNC_1(&VAR_44->super, "http2-graceful-shutdown-timeout",
                                        VAR_6 | VAR_3,
                                        VAR_18);
        FUNC_1(&VAR_44->super, "http2-max-concurrent-requests-per-connection",
                                        VAR_6 | VAR_3,
                                        VAR_24);
        FUNC_1(&VAR_44->super, "http2-input-window-size",
                                        VAR_6 | VAR_3,
                                        VAR_20);
        FUNC_1(&VAR_44->super, "http2-latency-optimization-min-rtt",
                                        VAR_6 | VAR_3,
                                        VAR_23);
        FUNC_1(&VAR_44->super, "http2-latency-optimization-max-additional-delay",
                                        VAR_6 | VAR_3,
                                        VAR_21);
        FUNC_1(&VAR_44->super, "http2-latency-optimization-max-cwnd",
                                        VAR_6 | VAR_3,
                                        VAR_22);
        FUNC_1(&VAR_44->super, "http2-reprioritize-blocking-assets",
                                        VAR_6 | VAR_7 |
                                            VAR_3,
                                        VAR_26);
        FUNC_1(&VAR_44->super, "http2-push-preload",
                                        VAR_6 | VAR_7 |
                                            VAR_3,
                                        VAR_25);
        FUNC_1(&VAR_44->super, "http2-allow-cross-origin-push",
                                        VAR_6 | VAR_8 |
                                            VAR_3,
                                        VAR_16);
        FUNC_1(&VAR_44->super, "http2-casper", VAR_6 | VAR_7,
                                        VAR_17);
        FUNC_1(&VAR_44->super, "file.mime.settypes",
                                        (VAR_0 & ~VAR_5) |
                                            VAR_2,
                                        VAR_32);
        FUNC_1(&VAR_44->super, "file.mime.addtypes",
                                        (VAR_0 & ~VAR_5) |
                                            VAR_2,
                                        VAR_29);
        FUNC_1(&VAR_44->super, "file.mime.removetypes",
                                        (VAR_0 & ~VAR_5) |
                                            VAR_4,
                                        VAR_30);
        FUNC_1(&VAR_44->super, "file.mime.setdefaulttype",
                                        (VAR_0 & ~VAR_5) |
                                            VAR_3,
                                        VAR_31);
        FUNC_1(&VAR_44->super, "file.custom-handler",
                                        (VAR_0 & ~VAR_5) |
                                            VAR_9,
                                        VAR_10);
        FUNC_1(&VAR_44->super, "setenv",
                                        VAR_0 | VAR_2, VAR_37);
        FUNC_1(&VAR_44->super, "unsetenv", VAR_0, VAR_39);
        FUNC_1(&VAR_44->super, "server-name",
                                        VAR_6 | VAR_3, VAR_36);
        FUNC_1(&VAR_44->super, "send-server-name",
                                        VAR_6 | VAR_3 |
                                            VAR_1,
                                        VAR_35);
        FUNC_1(&VAR_44->super, "error-log.emit-request-errors",
                                        VAR_0 | VAR_3,
                                        VAR_11);
        FUNC_1(&VAR_44->super, "send-informational",
                                        VAR_6 | VAR_3,
                                        VAR_34);
        FUNC_1(&VAR_44->super, "stash", VAR_0, VAR_38);
    }
}
