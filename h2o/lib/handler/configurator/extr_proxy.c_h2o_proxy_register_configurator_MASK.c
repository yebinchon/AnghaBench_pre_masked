
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int exit; int enter; } ;
struct proxy_configurator_t {TYPE_9__ super; TYPE_4__* vars; TYPE_4__* _vars_stack; } ;
struct TYPE_16__ {int global_socketpool; } ;
struct TYPE_17__ {TYPE_5__ proxy; } ;
typedef TYPE_6__ h2o_globalconf_t ;
struct TYPE_13__ {int ratio; int max_concurrent_strams; } ;
struct TYPE_12__ {int timeout; scalar_t__ enabled; } ;
struct TYPE_14__ {int keepalive_timeout; TYPE_2__ http2; int max_buffer_size; TYPE_1__ websocket; void* first_byte_timeout; void* connect_timeout; void* io_timeout; } ;
struct TYPE_15__ {TYPE_3__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_9__*,char*,int,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_9__*,char*,int ) ;
 int FUNC_3 (int *) ;
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

void FUNC_4(h2o_globalconf_t *VAR_34)
{
    struct proxy_configurator_t *VAR_35 = (void *)FUNC_0(VAR_34, sizeof(*VAR_35));


    VAR_35->vars = VAR_35->_vars_stack;
    VAR_35->vars->conf.io_timeout = VAR_8;
    VAR_35->vars->conf.connect_timeout = VAR_8;
    VAR_35->vars->conf.first_byte_timeout = VAR_8;
    VAR_35->vars->conf.websocket.enabled = 0;
    VAR_35->vars->conf.websocket.timeout = VAR_9;
    VAR_35->vars->conf.max_buffer_size = VAR_10;
    VAR_35->vars->conf.http2.max_concurrent_strams = VAR_7;
    VAR_35->vars->conf.http2.ratio = -1;
    VAR_35->vars->conf.keepalive_timeout = FUNC_3(&VAR_34->proxy.global_socketpool);


    VAR_35->super.enter = VAR_15;
    VAR_35->super.exit = VAR_16;
    FUNC_1(&VAR_35->super, "proxy.reverse.url",
                                    VAR_6 | VAR_3 |
                                        VAR_4 | VAR_2 |
                                        VAR_1,
                                    VAR_24);
    FUNC_1(&VAR_35->super, "proxy.preserve-host",
                                    VAR_0 | VAR_3,
                                    VAR_21);
    FUNC_1(&VAR_35->super, "proxy.proxy-protocol",
                                    VAR_0 | VAR_3,
                                    VAR_23);
    FUNC_1(&VAR_35->super, "proxy.timeout.io",
                                    VAR_0 | VAR_3, VAR_30);
    FUNC_1(&VAR_35->super, "proxy.timeout.connect",
                                    VAR_0 | VAR_3,
                                    VAR_28);
    FUNC_1(&VAR_35->super, "proxy.timeout.first_byte",
                                    VAR_0 | VAR_3,
                                    VAR_29);
    FUNC_1(&VAR_35->super, "proxy.timeout.keepalive",
                                    VAR_0 | VAR_3,
                                    VAR_31);
    FUNC_1(&VAR_35->super, "proxy.websocket",
                                    VAR_0 | VAR_3, VAR_32);
    FUNC_1(&VAR_35->super, "proxy.websocket.timeout",
                                    VAR_0 | VAR_3,
                                    VAR_33);
    FUNC_1(&VAR_35->super, "proxy.ssl.verify-peer",
                                    VAR_0 | VAR_3,
                                    VAR_27);
    FUNC_1(&VAR_35->super, "proxy.ssl.cafile",
                                    VAR_0 | VAR_3, VAR_25);
    FUNC_1(&VAR_35->super, "proxy.ssl.session-cache", VAR_0,
                                    VAR_26);
    FUNC_1(&VAR_35->super, "proxy.preserve-x-forwarded-proto",
                                    VAR_5 | VAR_3,
                                    VAR_22);
    FUNC_1(&VAR_35->super, "proxy.emit-x-forwarded-headers",
                                    VAR_5 | VAR_3,
                                    VAR_14);
    FUNC_1(&VAR_35->super, "proxy.emit-via-header",
                                    VAR_5 | VAR_3, VAR_13);
    FUNC_1(&VAR_35->super, "proxy.emit-missing-date-header",
                                    VAR_5 | VAR_3,
                                    VAR_12);
    FUNC_2(VAR_34, &VAR_35->super, "proxy.header", VAR_11);
    FUNC_1(&VAR_35->super, "proxy.max-buffer-size",
                                    VAR_0 | VAR_3,
                                    VAR_20);
    FUNC_1(&VAR_35->super, "proxy.http2.max-concurrent_streams",
                                    VAR_0 | VAR_3,
                                    VAR_18);
    FUNC_1(&VAR_35->super, "proxy.http2.ratio",
                                    VAR_0 | VAR_3, VAR_19);
    FUNC_1(&VAR_35->super, "proxy.forward.close-connection",
                                    VAR_5 | VAR_3,
                                    VAR_17);
}
