
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_24__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_28__ {char* scalar; } ;
struct TYPE_30__ {int type; TYPE_3__ data; } ;
typedef TYPE_5__ yoml_t ;
struct sockaddr_un {char* sun_path; int sun_family; } ;
typedef void sockaddr ;
struct TYPE_27__ {unsigned int send_retry; TYPE_6__* ctx; } ;
struct listener_config_t {int proxy_protocol; int * hosts; TYPE_2__ quic; } ;
struct addrinfo {void* ai_addr; int ai_addrlen; int ai_family; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; } ;
typedef int ssize_t ;
typedef int sa ;
struct TYPE_25__ {int max_streams_uni; } ;
struct TYPE_31__ {int * generate_resumption_token; int * stream_open; int * stream_scheduler; TYPE_1__ transport_params; int * cid_encryptor; } ;
typedef TYPE_6__ quicly_context_t ;
typedef int on ;
struct TYPE_32__ {int * hostconf; } ;
typedef TYPE_7__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_29__ {int * fds; } ;
struct TYPE_26__ {int run_mode; TYPE_4__ server_starter; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;


 struct listener_config_t* FUNC_0 (int,void*,int,int ,int) ;
 TYPE_24__ VAR_9 ;
 int VAR_10 ;
 struct listener_config_t* FUNC_1 (void*,int,int) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (int *,TYPE_5__*,char*,...) ;
 int FUNC_6 (int *,TYPE_5__*,char*) ;
 scalar_t__ FUNC_7 (int *,TYPE_5__*,char*,char*,TYPE_5__***,...) ;
 int FUNC_8 (char*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_6__* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int *,TYPE_7__*,TYPE_5__*,TYPE_5__**,struct listener_config_t*,int) ;
 int FUNC_11 (struct sockaddr_un*,int ,int) ;
 int FUNC_12 (int *,TYPE_5__*,char const*,char const*,int ,int ,int ,void*,int) ;
 int FUNC_13 (int *,TYPE_5__*,struct sockaddr_un*,TYPE_5__**,TYPE_5__**) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_6__ VAR_15 ;
 struct addrinfo* FUNC_14 (int *,TYPE_5__*,int ,int ,char const*,char const*) ;
 int FUNC_15 (int,int ,int ,int*,int) ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int FUNC_17 (char*,char const*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char const*) ;

__attribute__((used)) static int FUNC_20(h2o_configurator_command_t *VAR_16, h2o_configurator_context_t *VAR_17, yoml_t *VAR_18)
{
    const char *VAR_19 = ((void*)0), *VAR_20, *VAR_21 = "tcp";
    yoml_t **VAR_22 = ((void*)0), **VAR_23 = ((void*)0), **VAR_24 = ((void*)0), **VAR_25 = ((void*)0);
    int VAR_26 = 0;


    switch (VAR_18->type) {
    case 128:
        VAR_20 = VAR_18->data.scalar;
        break;
    case 129: {
        yoml_t **VAR_27, **VAR_28, **VAR_29, **VAR_30;
        if (FUNC_7(VAR_16, VAR_18, "port:s", "host:s,type:s,owner:s,permission:*,ssl:m,proxy-protocol:*,quic:m",
                                           &VAR_27, &VAR_28, &VAR_29, &VAR_23, &VAR_24, &VAR_22,
                                           &VAR_30, &VAR_25) != 0)
            return -1;
        VAR_20 = (*VAR_27)->data.scalar;
        if (VAR_28 != ((void*)0))
            VAR_19 = (*VAR_28)->data.scalar;
        if (VAR_29 != ((void*)0)) {
            VAR_21 = (*VAR_29)->data.scalar;
        } else if (VAR_25 != ((void*)0)) {
            VAR_21 = "quic";
        }
        if (VAR_30 != ((void*)0) &&
            (VAR_26 = (int)FUNC_6(VAR_16, *VAR_30, "OFF,ON")) == -1)
            return -1;
    } break;
    default:
        FUNC_5(VAR_16, VAR_18, "value must be a string or a mapping (with keys: `port` and optionally `host`)");
        return -1;
    }

    if (FUNC_16(VAR_21, "unix") == 0) {


        struct sockaddr_un VAR_31;
        int VAR_32;
        struct listener_config_t *VAR_33;


        FUNC_11(&VAR_31, 0, sizeof(VAR_31));
        if (FUNC_19(VAR_20) >= sizeof(VAR_31.sun_path)) {
            FUNC_5(VAR_16, VAR_18, "path:%s is too long as a unix socket name", VAR_20);
            return -1;
        }
        VAR_31.sun_family = VAR_0;
        FUNC_17(VAR_31.sun_path, VAR_20);

        VAR_32 = 0;
        if ((VAR_33 = FUNC_1((void *)&VAR_31, sizeof(VAR_31), 0)) == ((void*)0)) {
            int VAR_34 = -1;
            switch (VAR_9.run_mode) {
            case 130:
                if (VAR_9.server_starter.fds != ((void*)0)) {
                    if ((VAR_34 = FUNC_2((void *)&VAR_31, VAR_8)) == -1) {
                        FUNC_5(VAR_16, VAR_18, "unix socket:%s is not being bound to the server\n", VAR_31.sun_path);
                        return -1;
                    }
                } else {
                    if ((VAR_34 = FUNC_13(VAR_16, VAR_18, &VAR_31, VAR_23, VAR_24)) == -1)
                        return -1;
                }
                break;
            default:
                break;
            }
            VAR_33 = FUNC_0(VAR_34, (struct sockaddr *)&VAR_31, sizeof(VAR_31), VAR_17->hostconf == ((void*)0), VAR_26);
            VAR_32 = 1;
        } else if (VAR_33->proxy_protocol != VAR_26) {
            goto ProxyConflict;
        }
        if (FUNC_10(VAR_16, VAR_17, VAR_18, VAR_22, VAR_33, VAR_32) != 0)
            return -1;
        if (VAR_33->hosts != ((void*)0) && VAR_17->hostconf != ((void*)0))
            FUNC_4((void *)&VAR_33->hosts, VAR_17->hostconf);

    } else if (FUNC_16(VAR_21, "tcp") == 0) {


        struct addrinfo *VAR_35, *VAR_36;
        if ((VAR_35 = FUNC_14(VAR_16, VAR_18, VAR_8, VAR_3, VAR_19, VAR_20)) == ((void*)0))
            return -1;
        for (VAR_36 = VAR_35; VAR_36 != ((void*)0); VAR_36 = VAR_36->ai_next) {
            struct listener_config_t *VAR_37 = FUNC_1(VAR_36->ai_addr, VAR_36->ai_addrlen, 0);
            int VAR_38 = 0;
            if (VAR_37 == ((void*)0)) {
                int VAR_39 = -1;
                switch (VAR_9.run_mode) {
                case 130:
                    if (VAR_9.server_starter.fds != ((void*)0)) {
                        if ((VAR_39 = FUNC_2(VAR_36->ai_addr, VAR_8)) == -1) {
                            FUNC_5(VAR_16, VAR_18, "tcp socket:%s:%s is not being bound to the server\n", VAR_19,
                                                       VAR_20);
                            FUNC_3(VAR_35);
                            return -1;
                        }
                    } else {
                        if ((VAR_39 = FUNC_12(VAR_16, VAR_18, VAR_19, VAR_20, VAR_36->ai_family, VAR_36->ai_socktype, VAR_36->ai_protocol,
                                                     VAR_36->ai_addr, VAR_36->ai_addrlen)) == -1) {
                            FUNC_3(VAR_35);
                            return -1;
                        }
                    }
                    break;
                default:
                    break;
                }
                VAR_37 = FUNC_0(VAR_39, VAR_36->ai_addr, VAR_36->ai_addrlen, VAR_17->hostconf == ((void*)0), VAR_26);
                VAR_38 = 1;
            } else if (VAR_37->proxy_protocol != VAR_26) {
                FUNC_3(VAR_35);
                goto ProxyConflict;
            }
            if (FUNC_10(VAR_16, VAR_17, VAR_18, VAR_22, VAR_37, VAR_38) != 0) {
                FUNC_3(VAR_35);
                return -1;
            }
            if (VAR_37->hosts != ((void*)0) && VAR_17->hostconf != ((void*)0))
                FUNC_4((void *)&VAR_37->hosts, VAR_17->hostconf);
        }
        FUNC_3(VAR_35);

    } else if (FUNC_16(VAR_21, "quic") == 0) {


        struct addrinfo *VAR_40, *VAR_41;
        if (VAR_22 == ((void*)0)) {
            FUNC_5(VAR_16, VAR_18, "QUIC endpoint must have an accompanying SSL configuration");
            return -1;
        }
        if ((VAR_40 = FUNC_14(VAR_16, VAR_18, VAR_7, VAR_4, VAR_19, VAR_20)) == ((void*)0))
            return -1;
        for (VAR_41 = VAR_40; VAR_41 != ((void*)0); VAR_41 = VAR_41->ai_next) {
            struct listener_config_t *VAR_42 = FUNC_1(VAR_41->ai_addr, VAR_41->ai_addrlen, 1);
            int VAR_43 = 0;
            if (VAR_42 == ((void*)0)) {
                int VAR_44 = -1;
                switch (VAR_9.run_mode) {
                case 130:
                    if (VAR_9.server_starter.fds != ((void*)0)) {
                        if ((VAR_44 = FUNC_2(VAR_41->ai_addr, VAR_41->ai_socktype)) == -1) {
                            FUNC_5(VAR_16, VAR_18, "udp socket:%s:%s is not being bound to the server\n", VAR_19,
                                                       VAR_20);
                            FUNC_3(VAR_40);
                            return -1;
                        }
                    } else if ((VAR_44 = FUNC_12(VAR_16, VAR_18, VAR_19, VAR_20, VAR_41->ai_family, VAR_41->ai_socktype,
                                                        VAR_41->ai_protocol, VAR_41->ai_addr, VAR_41->ai_addrlen)) == -1) {
                        FUNC_3(VAR_40);
                        return -1;
                    }
                    switch (VAR_41->ai_family) {
                    default:
                        break;
                    }
                    break;
                default:
                    break;
                }
                quicly_context_t *VAR_45 = FUNC_9(sizeof(*VAR_45));
                *VAR_45 = VAR_15;
                VAR_45->cid_encryptor = &VAR_13;
                VAR_45->transport_params.max_streams_uni = 10;
                VAR_45->stream_scheduler = &VAR_12;
                VAR_45->stream_open = &VAR_11;
                VAR_45->generate_resumption_token = &VAR_14;
                VAR_42 = FUNC_0(VAR_44, VAR_41->ai_addr, VAR_41->ai_addrlen, VAR_17->hostconf == ((void*)0), 0);
                VAR_42->quic.ctx = VAR_45;
                if (VAR_25 != ((void*)0)) {
                    yoml_t **VAR_46;
                    if (FUNC_7(VAR_16, *VAR_25, ((void*)0), "retry:s", &VAR_46) != 0)
                        return -1;
                    if (VAR_46 != ((void*)0)) {
                        ssize_t VAR_47 = FUNC_6(VAR_16, *VAR_46, "OFF,ON");
                        if (VAR_47 == -1)
                            return -1;
                        VAR_42->quic.send_retry = (unsigned)VAR_47;
                    }
                }
                VAR_43 = 1;
            }
            if (FUNC_10(VAR_16, VAR_17, VAR_18, VAR_22, VAR_42, VAR_43) != 0) {
                FUNC_3(VAR_40);
                return -1;
            }
            if (VAR_42->hosts != ((void*)0) && VAR_17->hostconf != ((void*)0))
                FUNC_4((void *)&VAR_42->hosts, VAR_17->hostconf);
        }
        FUNC_3(VAR_40);

    } else {

        FUNC_5(VAR_16, VAR_18, "unknown listen type: %s", VAR_21);
        return -1;
    }

    return 0;

ProxyConflict:
    FUNC_5(VAR_16, VAR_18, "`proxy-protocol` cannot be turned %s, already defined as opposite",
                               VAR_26 ? "on" : "off");
    return -1;
}
