
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wbuf_small ;
typedef char uint8_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int ssize_t ;
typedef int ptls_t ;
struct TYPE_14__ {scalar_t__ early_data_acceptance; size_t* max_early_data_size; } ;
struct TYPE_15__ {TYPE_1__ client; } ;
typedef TYPE_2__ ptls_handshake_properties_t ;
typedef int ptls_context_t ;
struct TYPE_16__ {scalar_t__ off; char* base; } ;
typedef TYPE_3__ ptls_buffer_t ;
typedef int fd_set ;
typedef int bytebuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,char*,int) ;
 int FUNC_10 (TYPE_3__*,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_3__*,char*,size_t*,TYPE_2__*) ;
 scalar_t__ FUNC_13 (int *) ;
 int * FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,TYPE_3__*,char*,size_t*) ;
 int FUNC_16 (int *,TYPE_3__*,char*,int) ;
 int FUNC_17 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_18 (int *,char const*,int ) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int,char*,int) ;
 int FUNC_21 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_22 (TYPE_3__*,int) ;
 int FUNC_23 (int,int ) ;
 int VAR_13 ;
 char* FUNC_24 (scalar_t__) ;
 int FUNC_25 (int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_26(int VAR_14, ptls_context_t *VAR_15, const char *VAR_16, const char *VAR_17,
                             ptls_handshake_properties_t *VAR_18, int VAR_19, int VAR_20)
{
    ptls_t *VAR_21 = FUNC_14(VAR_15, VAR_16 == ((void*)0));
    ptls_buffer_t VAR_22, VAR_23, VAR_24;
    char VAR_25[16384];
    enum { IN_HANDSHAKE, IN_1RTT, IN_SHUTDOWN } VAR_26 = IN_HANDSHAKE;
    int VAR_27 = 0, VAR_28 = 0;
    size_t VAR_29 = 0;
    ssize_t VAR_30;

    FUNC_9(&VAR_22, "", 0);
    FUNC_9(&VAR_23, "", 0);
    FUNC_9(&VAR_24, "", 0);

    FUNC_5(VAR_14, VAR_3, VAR_4);

    if (VAR_17 != ((void*)0)) {
        if ((VAR_27 = FUNC_7(VAR_17, VAR_5)) == -1) {
            FUNC_6(VAR_13, "failed to open file:%s:%s\n", VAR_17, FUNC_24(VAR_12));
            VAR_28 = 1;
            goto Exit;
        }
    }
    if (VAR_16 != ((void*)0)) {
        FUNC_18(VAR_21, VAR_16, 0);
        if ((VAR_28 = FUNC_12(VAR_21, &VAR_23, ((void*)0), ((void*)0), VAR_18)) != VAR_10) {
            FUNC_6(VAR_13, "ptls_handshake:%d\n", VAR_28);
            VAR_28 = 1;
            goto Exit;
        }
    }

    while (1) {

        fd_set VAR_31, VAR_32, VAR_33;
        int VAR_34 = 0;
        struct timeval VAR_35;
        do {
            FUNC_2(&VAR_31);
            FUNC_2(&VAR_32);
            FUNC_2(&VAR_33);
            FUNC_1(VAR_14, &VAR_31);
            if (VAR_23.off != 0)
                FUNC_1(VAR_14, &VAR_32);
            FUNC_1(VAR_14, &VAR_33);
            VAR_34 = VAR_14 + 1;
            if (VAR_27 != -1) {
                FUNC_1(VAR_27, &VAR_31);
                FUNC_1(VAR_27, &VAR_33);
                if (VAR_34 <= VAR_27)
                    VAR_34 = VAR_27 + 1;
            }
            VAR_35.tv_sec = VAR_23.off != 0 ? 0 : 3600;
            VAR_35.tv_usec = 0;
        } while (FUNC_21(VAR_34, &VAR_31, &VAR_32, &VAR_33, &VAR_35) == -1);


        if (FUNC_0(VAR_14, &VAR_31) || FUNC_0(VAR_14, &VAR_33)) {
            size_t VAR_36 = 0, VAR_37;
            while ((VAR_30 = FUNC_20(VAR_14, VAR_25, sizeof(VAR_25))) == -1 && VAR_12 == VAR_1)
                ;
            if (VAR_30 == -1 && (VAR_12 == VAR_2 || VAR_12 == VAR_0)) {

                VAR_30 = 0;
            } else if (VAR_30 <= 0) {
                goto Exit;
            }
            while ((VAR_37 = VAR_30 - VAR_36) != 0) {
                if (VAR_26 == IN_HANDSHAKE) {
                    if ((VAR_28 = FUNC_12(VAR_21, &VAR_23, VAR_25 + VAR_36, &VAR_37, VAR_18)) == 0) {
                        VAR_26 = IN_1RTT;
                        FUNC_3(FUNC_13(VAR_21) || VAR_18->client.early_data_acceptance != VAR_8);

                        if (VAR_18->client.early_data_acceptance == VAR_9)
                            FUNC_22(&VAR_24, VAR_29);
                        if (VAR_19)
                            FUNC_19(VAR_21, 1);
                        if (VAR_24.off != 0) {
                            if ((VAR_28 = FUNC_16(VAR_21, &VAR_23, VAR_24.base, VAR_24.off)) != 0) {
                                FUNC_6(VAR_13, "ptls_send(1rtt):%d\n", VAR_28);
                                goto Exit;
                            }
                            VAR_24.off = 0;
                        }
                    } else if (VAR_28 == VAR_10) {

                    } else {
                        if (VAR_23.off != 0)
                            (void)FUNC_25(VAR_14, VAR_23.base, VAR_23.off);
                        FUNC_6(VAR_13, "ptls_handshake:%d\n", VAR_28);
                        goto Exit;
                    }
                } else {
                    if ((VAR_28 = FUNC_15(VAR_21, &VAR_22, VAR_25 + VAR_36, &VAR_37)) == 0) {
                        if (VAR_22.off != 0) {
                            FUNC_25(1, VAR_22.base, VAR_22.off);
                            VAR_22.off = 0;
                        }
                    } else if (VAR_28 == VAR_10) {

                    } else {
                        FUNC_6(VAR_13, "ptls_receive:%d\n", VAR_28);
                        goto Exit;
                    }
                }
                VAR_36 += VAR_37;
            }
        }


        if (VAR_27 != -1 && (FUNC_0(VAR_27, &VAR_31) || FUNC_0(VAR_27, &VAR_33))) {
            while ((VAR_30 = FUNC_20(VAR_27, VAR_25, sizeof(VAR_25))) == -1 && VAR_12 == VAR_1)
                ;
            if (VAR_30 > 0) {
                FUNC_10(&VAR_24, VAR_25, VAR_30);
                if (VAR_26 == IN_HANDSHAKE) {
                    size_t VAR_38 = 0;
                    if (VAR_16 != ((void*)0) && VAR_18->client.max_early_data_size != ((void*)0)) {
                        size_t VAR_39 = *VAR_18->client.max_early_data_size;
                        if (VAR_39 > VAR_24.off)
                            VAR_39 = VAR_24.off;
                        VAR_38 = VAR_39 - VAR_29;
                    }
                    if (VAR_38 != 0) {
                        if ((VAR_28 = FUNC_16(VAR_21, &VAR_23, VAR_24.base, VAR_38)) != 0) {
                            FUNC_6(VAR_13, "ptls_send(early_data):%d\n", VAR_28);
                            goto Exit;
                        }
                        VAR_29 += VAR_38;
                    }
                } else {
                    if ((VAR_28 = FUNC_16(VAR_21, &VAR_23, VAR_25, VAR_30)) != 0) {
                        FUNC_6(VAR_13, "ptls_send(1rtt):%d\n", VAR_28);
                        goto Exit;
                    }
                    VAR_24.off = 0;
                }
            } else {

                if (VAR_17 != ((void*)0))
                    FUNC_4(VAR_27);
                VAR_27 = -1;
            }
        }


        if (VAR_23.off != 0) {
            while ((VAR_30 = FUNC_25(VAR_14, VAR_23.base, VAR_23.off)) == -1 && VAR_12 == VAR_1)
                ;
            if (VAR_30 == -1 && (VAR_12 == VAR_2 || VAR_12 == VAR_0)) {

            } else if (VAR_30 <= 0) {
                goto Exit;
            } else {
                FUNC_22(&VAR_23, VAR_30);
            }
        }


        if (VAR_26 == IN_1RTT && VAR_27 == -1) {
            if (!VAR_20) {
                ptls_buffer_t VAR_40;
                uint8_t VAR_41[32];
                FUNC_9(&VAR_40, VAR_41, sizeof(VAR_41));
                if ((VAR_28 = FUNC_17(VAR_21, &VAR_40,
                           VAR_7, VAR_6)) != 0) {
                    FUNC_6(VAR_13, "ptls_send_alert:%d\n", VAR_28);
                }
                if (VAR_40.off != 0)
                    (void)FUNC_25(VAR_14, VAR_40.base, VAR_40.off);
                FUNC_8(&VAR_40);
                FUNC_23(VAR_14, VAR_11);
            }
            VAR_26 = IN_SHUTDOWN;
        }
    }

Exit:
    if (VAR_14 != -1)
        FUNC_4(VAR_14);
    if (VAR_17 != ((void*)0) && VAR_27 != -1)
        FUNC_4(VAR_27);
    FUNC_8(&VAR_22);
    FUNC_8(&VAR_23);
    FUNC_8(&VAR_24);
    FUNC_11(VAR_21);
    return VAR_28 != 0;
}
