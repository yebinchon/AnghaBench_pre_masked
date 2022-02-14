
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (unsigned char*,int) ;
 unsigned char* VAR_5 ;
 int FUNC_13 (char*,int,unsigned char*,int) ;
 int FUNC_14 (unsigned char*) ;
 int FUNC_15 (unsigned char*,int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int ,int ) ;

__attribute__((used)) static void
FUNC_18(void)
{
    unsigned char *VAR_6;
    unsigned char *VAR_7, *VAR_8;
    unsigned char *VAR_9, *VAR_10;
    unsigned char *VAR_11, *VAR_12;
    unsigned char *VAR_13, *VAR_14;
    char VAR_15[65];
    int VAR_16;

    VAR_6 = (unsigned char *) FUNC_16(VAR_3);
    for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
        VAR_6[VAR_16] = (unsigned char) VAR_16;
    }
    VAR_7 = (unsigned char *) FUNC_16(VAR_1);
    VAR_8 = (unsigned char *) FUNC_16(VAR_2);
    FUNC_6(VAR_7, VAR_8, VAR_6);

    FUNC_13(VAR_15, sizeof VAR_15, VAR_7, VAR_1);
    FUNC_11("client_pk: [%s]\n", VAR_15);
    FUNC_13(VAR_15, sizeof VAR_15, VAR_8, VAR_2);
    FUNC_11("client_sk: [%s]\n", VAR_15);

    VAR_11 = (unsigned char *) FUNC_16(VAR_1);
    VAR_12 = (unsigned char *) FUNC_16(VAR_2);
    FUNC_2(VAR_11, VAR_12);

    VAR_9 = (unsigned char *) FUNC_16(VAR_4);
    VAR_10 = (unsigned char *) FUNC_16(VAR_4);

    FUNC_0(FUNC_1(VAR_9, VAR_10,
                                         VAR_7, VAR_8,
                                         VAR_5) == -1);
    if (FUNC_1(VAR_9, VAR_10,
                                      VAR_7, VAR_8, VAR_11) != 0) {
        FUNC_11("crypto_kx_client_session_keys() failed\n");
    }

    VAR_13 = (unsigned char *) FUNC_16(VAR_4);
    VAR_14 = (unsigned char *) FUNC_16(VAR_4);

    FUNC_0(FUNC_8(VAR_13, VAR_14,
                                         VAR_11, VAR_12,
                                         VAR_5) == -1);
    if (FUNC_8(VAR_13, VAR_14,
                                      VAR_11, VAR_12, VAR_7) != 0) {
        FUNC_11("crypto_kx_server_session_keys() failed\n");
    }
    if (FUNC_10(VAR_13, VAR_10, VAR_4) != 0 ||
        FUNC_10(VAR_14, VAR_9, VAR_4) != 0) {
        FUNC_11("client session keys != server session keys\n");
    }

    FUNC_15(VAR_7, VAR_1);
    if (FUNC_8(VAR_13, VAR_14,
                                      VAR_11, VAR_12, VAR_7) != 0) {
        FUNC_11("crypto_kx_server_session_keys() failed\n");
    }
    if (FUNC_10(VAR_13, VAR_10, VAR_4) == 0 &&
        FUNC_10(VAR_14, VAR_9, VAR_4) == 0) {
        FUNC_11("peer's public key is ignored\n");
    }

    FUNC_2(VAR_7, VAR_8);
    if (FUNC_8(VAR_13, VAR_14,
                                      VAR_11, VAR_12, VAR_7) != 0) {
        FUNC_11("crypto_kx_server_session_keys() failed\n");
    }
    if (FUNC_10(VAR_13, VAR_10, VAR_4) == 0 ||
        FUNC_10(VAR_14, VAR_9, VAR_4) == 0) {
        FUNC_11("session keys are constant\n");
    }

    FUNC_6(VAR_7, VAR_8, VAR_6);
    FUNC_15(VAR_6, VAR_3);
    FUNC_6(VAR_11, VAR_12, VAR_6);
    if (FUNC_8(VAR_13, VAR_14,
                                      VAR_11, VAR_12, VAR_7) != 0) {
        FUNC_11("crypto_kx_server_session_keys() failed\n");
    }
    FUNC_13(VAR_15, sizeof VAR_15, VAR_13, VAR_4);
    FUNC_11("server_rx: [%s]\n", VAR_15);
    FUNC_13(VAR_15, sizeof VAR_15, VAR_14, VAR_4);
    FUNC_11("server_tx: [%s]\n", VAR_15);

    if (FUNC_1(VAR_9, VAR_10,
                                      VAR_7, VAR_8, VAR_11) != 0) {
        FUNC_11("crypto_kx_client_session_keys() failed\n");
    }
    FUNC_13(VAR_15, sizeof VAR_15, VAR_9, VAR_4);
    FUNC_11("client_rx: [%s]\n", VAR_15);
    FUNC_13(VAR_15, sizeof VAR_15, VAR_10, VAR_4);
    FUNC_11("client_tx: [%s]\n", VAR_15);

    FUNC_12(VAR_9, VAR_4);
    FUNC_12(VAR_10, VAR_4);
    FUNC_12(VAR_13, VAR_4);
    FUNC_12(VAR_14, VAR_4);
    if (FUNC_1(VAR_9, ((void*)0),
                                      VAR_7, VAR_8, VAR_11) != 0 ||
        FUNC_1(((void*)0), VAR_10,
                                      VAR_7, VAR_8, VAR_11) != 0 ||
        FUNC_8(VAR_13, ((void*)0),
                                      VAR_11, VAR_12, VAR_7) != 0 ||
        FUNC_8(((void*)0), VAR_14,
                                      VAR_11, VAR_12, VAR_7) != 0) {
        FUNC_11("failure when one of the pointers happens to be NULL");
    }
    FUNC_0(FUNC_10(VAR_9, VAR_10, VAR_4) == 0);
    FUNC_0(FUNC_10(VAR_10, VAR_13, VAR_4) == 0);
    FUNC_0(FUNC_10(VAR_13, VAR_14, VAR_4) == 0);

    FUNC_14(VAR_9);
    FUNC_14(VAR_10);
    FUNC_14(VAR_13);
    FUNC_14(VAR_14);
    FUNC_14(VAR_12);
    FUNC_14(VAR_11);
    FUNC_14(VAR_8);
    FUNC_14(VAR_7);
    FUNC_14(VAR_6);

    FUNC_0(FUNC_17(FUNC_3(), VAR_0) == 0);
    FUNC_0(FUNC_4() == VAR_1);
    FUNC_0(FUNC_5() == VAR_2);
    FUNC_0(FUNC_7() == VAR_3);
    FUNC_0(FUNC_9() == VAR_4);

    FUNC_11("tv_kx: ok\n");
}
