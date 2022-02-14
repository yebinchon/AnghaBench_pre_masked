
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int reuseaddr ;
typedef int quicly_stream_t ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_2__ quicly_stream_open_t ;
typedef int quicly_conn_t ;
struct TYPE_13__ {int super; } ;
typedef TYPE_3__ ptls_openssl_sign_certificate_t ;
struct TYPE_11__ {scalar_t__ count; } ;
struct TYPE_14__ {int * sign_certificate; TYPE_1__ certificates; int cipher_suites; int key_exchanges; int * get_time; int random_bytes; } ;
typedef TYPE_4__ ptls_context_t ;
typedef int local ;
struct TYPE_15__ {TYPE_2__* stream_open; TYPE_4__* tls; } ;
typedef int FILE ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (char*) ;
 int VAR_10 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_4__*,char*) ;
 int VAR_11 ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int **,TYPE_5__*,char*,int *,struct sockaddr*,int *,int ,int *,int *) ;
 int FUNC_16 (int *,int **,int ) ;
 TYPE_5__ VAR_14 ;
 scalar_t__ FUNC_17 (struct sockaddr*,int*,char*,char*,int ,int ,int ) ;
 int FUNC_18 (int,int *) ;
 int FUNC_19 (int,int ,int ,int*,int) ;
 int FUNC_20 (int ,int ,int ) ;
 int VAR_15 ;
 char* FUNC_21 (int ) ;
 int FUNC_22 (char*) ;

int FUNC_23(int VAR_16, char **VAR_17)
{
    ptls_openssl_sign_certificate_t VAR_18;
    ptls_context_t VAR_19 = {
        .random_bytes = VAR_13,
        .get_time = &VAR_10,
        .key_exchanges = VAR_12,
        .cipher_suites = VAR_11,
    };
    quicly_stream_open_t VAR_20 = {VAR_7};
    char *VAR_21 = "127.0.0.1", *VAR_22 = "4433";
    struct sockaddr_storage VAR_23;
    socklen_t VAR_24;
    int VAR_25, VAR_26;


    VAR_4 = VAR_14;
    VAR_4.tls = &VAR_19;
    FUNC_14(VAR_4.tls);
    VAR_4.stream_open = &VAR_20;


    while ((VAR_25 = FUNC_7(VAR_16, VAR_17, "c:k:p:h")) != -1) {
        switch (VAR_25) {
        case 'c': {
            int VAR_27;
            if ((VAR_27 = FUNC_12(&VAR_19, VAR_8)) != 0) {
                FUNC_6(VAR_15, "failed to load certificates from file %s:%d\n", VAR_8, VAR_27);
                FUNC_3(1);
            }
        } break;
        case 'k': {
            FILE *VAR_28;
            if ((VAR_28 = FUNC_5(VAR_8, "r")) == ((void*)0)) {
                FUNC_6(VAR_15, "failed to open file:%s:%s\n", VAR_8, FUNC_21(VAR_5));
                FUNC_3(1);
            }
            EVP_PKEY *VAR_29 = FUNC_1(VAR_28, ((void*)0), ((void*)0), ((void*)0));
            FUNC_4(VAR_28);
            if (VAR_29 == ((void*)0)) {
                FUNC_6(VAR_15, "failed to load private key from file:%s\n", VAR_8);
                FUNC_3(1);
            }
            FUNC_13(&VAR_18, VAR_29);
            FUNC_0(VAR_29);
            VAR_19.sign_certificate = &VAR_18.super;
        } break;
        case 'p':
            VAR_22 = VAR_8;
            break;
        case 'h':
            FUNC_22(VAR_17[0]);
            break;
        default:
            FUNC_3(1);
            break;
        }
    }
    if ((VAR_19.certificates.count != 0) != (VAR_19.sign_certificate != ((void*)0))) {
        FUNC_6(VAR_15, "-c and -k options must be used together\n");
        FUNC_3(1);
    }
    VAR_16 -= VAR_9;
    VAR_17 += VAR_9;
    if (VAR_16 != 0)
        VAR_21 = *VAR_17++;
    if (FUNC_17((struct sockaddr *)&VAR_23, &VAR_24, VAR_21, VAR_22, VAR_0, VAR_1, 0) != 0)
        FUNC_3(1);


    if ((VAR_26 = FUNC_20(VAR_23.ss_family, VAR_1, 0)) == -1) {
        FUNC_10("socket(2) failed");
        FUNC_3(1);
    }

    if (FUNC_8()) {
        int VAR_30 = 1;
        FUNC_19(VAR_26, VAR_2, VAR_3, &VAR_30, sizeof(VAR_30));
        if (FUNC_2(VAR_26, (struct sockaddr *)&VAR_23, VAR_24) != 0) {
            FUNC_10("bind(2) failed");
            FUNC_3(1);
        }
    } else {
        struct sockaddr_in VAR_31;
        FUNC_9(&VAR_31, 0, sizeof(VAR_31));
        if (FUNC_2(VAR_26, (struct sockaddr *)&VAR_31, sizeof(VAR_31)) != 0) {
            FUNC_10("bind(2) failed");
            FUNC_3(1);
        }
    }

    quicly_conn_t *VAR_32 = ((void*)0);
    if (!FUNC_8()) {

        int VAR_33;
        if ((VAR_33 = FUNC_15(&VAR_32, &VAR_4, VAR_21, ((void*)0), (struct sockaddr *)&VAR_23, &VAR_6, FUNC_11(((void*)0), 0), ((void*)0),
                                  ((void*)0))) != 0) {
            FUNC_6(VAR_15, "quicly_connect failed:%d\n", VAR_33);
            FUNC_3(1);
        }
        quicly_stream_t *VAR_34;
        FUNC_16(VAR_32, &VAR_34, 0);
    }


    return FUNC_18(VAR_26, VAR_32);
}
