
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int neverbleed_t ;
typedef int SSL_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned short,int *) ;
 int FUNC_9 (int ,char*,char*,...) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int *,char*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,char*,unsigned short*) ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (char*,char*) ;

int FUNC_15(int VAR_7, char **VAR_8)
{
    unsigned short VAR_9;
    SSL_CTX *VAR_10;
    neverbleed_t VAR_11;
    char VAR_12[VAR_0];
    int VAR_13;


    FUNC_6();
    FUNC_5();
    FUNC_0();
    if (FUNC_10(&VAR_11, VAR_12) != 0) {
        FUNC_9(VAR_6, "openssl_privsep_init: %s\n", VAR_12);
        return 111;
    }
    VAR_10 = FUNC_1(FUNC_7());
    FUNC_2(VAR_10, VAR_2 | VAR_4 | VAR_5 | VAR_3);
    FUNC_12(VAR_10);


    if (VAR_7 != 5) {
        FUNC_9(VAR_6, "Usage: %s <internal|privsep> <port> <certificate-chain-file> <private-key-file>\n", VAR_8[0]);
        return 111;
    }
    if (FUNC_14(VAR_8[1], "internal") == 0) {
        VAR_13 = 0;
    } else if (FUNC_14(VAR_8[1], "privsep") == 0) {
        VAR_13 = 1;
    } else {
        FUNC_9(VAR_6, "unknown mode:%s\n", VAR_8[1]);
        return 111;
    }
    if (FUNC_13(VAR_8[2], "%hu", &VAR_9) != 1) {
        FUNC_9(VAR_6, "failed to parse port:%s\n", VAR_8[2]);
        return 111;
    }
    if (FUNC_4(VAR_10, VAR_8[3]) != 1) {
        FUNC_9(VAR_6, "failed to load certificate chain file:%s\n", VAR_8[3]);
        return 111;
    }
    if (VAR_13) {
        if (FUNC_11(&VAR_11, VAR_10, VAR_8[4], VAR_12) != 1) {
            FUNC_9(VAR_6, "failed to load private key from file:%s:%s\n", VAR_8[4], VAR_12);
            return 111;
        }
    } else {
        if (FUNC_3(VAR_10, VAR_8[4], VAR_1) != 1) {
            FUNC_9(VAR_6, "failed to load private key from file:%s\n", VAR_8[4]);
            return 111;
        }
    }


    return FUNC_8(VAR_9, VAR_10);
}
