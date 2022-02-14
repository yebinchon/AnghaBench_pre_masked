
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {char* sun_path; int sun_family; } ;
struct TYPE_21__ {int daemon_pid; int * engine; int thread_key; TYPE_5__ sun_; int auth_token; } ;
typedef TYPE_1__ neverbleed_t ;
struct TYPE_24__ {TYPE_1__* nb; } ;
struct TYPE_22__ {int rsa_verify; int rsa_pub_dec; int rsa_pub_enc; } ;
typedef TYPE_2__ RSA_METHOD ;
typedef int EC_KEY_METHOD ;


 int VAR_0 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int ,int) ;
 TYPE_2__* FUNC_14 () ;
 TYPE_2__* FUNC_15 () ;
 int FUNC_16 (TYPE_2__ const*) ;
 int FUNC_17 (TYPE_2__ const*) ;
 int FUNC_18 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_19 (char*,int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 int FUNC_23 (TYPE_2__*,int ) ;
 int FUNC_24 (TYPE_2__*,int ) ;
 int FUNC_25 (TYPE_2__*,int ) ;
 int FUNC_26 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_27 (int,void*,int) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int,int,char*) ;
 TYPE_6__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_30 () ;
 int FUNC_31 (char*) ;
 scalar_t__ FUNC_32 (int,int ) ;
 int FUNC_33 (TYPE_5__*,int ,int) ;
 int * FUNC_34 (char*) ;
 scalar_t__ FUNC_35 (int*) ;
 int FUNC_36 (int ,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int) ;
 int VAR_14 ;
 int FUNC_39 (char*,int,char*,...) ;
 int FUNC_40 (int ,int ,int ) ;
 TYPE_2__ VAR_15 ;
 char* FUNC_41 (char*) ;
 char* FUNC_42 (int ) ;
 int FUNC_43 (char*) ;

int FUNC_44(neverbleed_t *VAR_16, char *VAR_17)
{
    int VAR_18[2] = {-1, -1}, VAR_19 = -1;
    char *VAR_20 = ((void*)0);
    const RSA_METHOD *VAR_21 = FUNC_15();
    RSA_METHOD *VAR_22 = &VAR_15;

    VAR_22->rsa_pub_enc = VAR_21->rsa_pub_enc;
    VAR_22->rsa_pub_dec = VAR_21->rsa_pub_dec;
    VAR_22->rsa_verify = VAR_21->rsa_verify;



    if (FUNC_35(VAR_18) != 0) {
        FUNC_39(VAR_17, VAR_1, "pipe(2) failed:%s", FUNC_42(VAR_9));
        goto Fail;
    }
    FUNC_38(VAR_18[1]);
    if ((VAR_20 = FUNC_41("/tmp/openssl-privsep.XXXXXX")) == ((void*)0)) {
        FUNC_39(VAR_17, VAR_1, "no memory");
        goto Fail;
    }
    if (FUNC_34(VAR_20) == ((void*)0)) {
        FUNC_39(VAR_17, VAR_1, "failed to create temporary directory under /tmp:%s", FUNC_42(VAR_9));
        goto Fail;
    }
    FUNC_33(&VAR_16->sun_, 0, sizeof(VAR_16->sun_));
    VAR_16->sun_.sun_family = VAR_0;
    FUNC_39(VAR_16->sun_.sun_path, sizeof(VAR_16->sun_.sun_path), "%s/_", VAR_20);
    FUNC_13(VAR_16->auth_token, sizeof(VAR_16->auth_token));
    if ((VAR_19 = FUNC_40(VAR_2, VAR_4, 0)) == -1) {
        FUNC_39(VAR_17, VAR_1, "socket(2) failed:%s", FUNC_42(VAR_9));
        goto Fail;
    }
    if (FUNC_27(VAR_19, (void *)&VAR_16->sun_, sizeof(VAR_16->sun_)) != 0) {
        FUNC_39(VAR_17, VAR_1, "failed to bind to %s:%s", VAR_16->sun_.sun_path, FUNC_42(VAR_9));
        goto Fail;
    }
    if (FUNC_32(VAR_19, VAR_5) != 0) {
        FUNC_39(VAR_17, VAR_1, "listen(2) failed:%s", FUNC_42(VAR_9));
        goto Fail;
    }
    VAR_16->daemon_pid = FUNC_30();
    switch (VAR_16->daemon_pid) {
    case -1:
        FUNC_39(VAR_17, VAR_1, "fork(2) failed:%s", FUNC_42(VAR_9));
        goto Fail;
    case 0:
        FUNC_28(VAR_18[1]);

        FUNC_36(VAR_3, 0, 0, 0, 0);

        VAR_6.nb = VAR_16;
        FUNC_29(VAR_19, VAR_18[0], VAR_20);
        break;
    default:
        break;
    }
    FUNC_28(VAR_19);
    VAR_19 = -1;
    FUNC_28(VAR_18[0]);
    VAR_18[0] = -1;


    if ((VAR_16->engine = FUNC_8()) == ((void*)0) || !FUNC_11(VAR_16->engine, "neverbleed") ||
        !FUNC_12(VAR_16->engine, "privilege separation software engine") || !FUNC_10(VAR_16->engine, VAR_22)



            ) {
        FUNC_39(VAR_17, VAR_1, "failed to initialize the OpenSSL engine");
        goto Fail;
    }
    FUNC_6(VAR_16->engine);


    FUNC_37(&VAR_16->thread_key, VAR_7);

    FUNC_31(VAR_20);
    return 0;
Fail:
    if (VAR_18[0] != -1)
        FUNC_28(VAR_18[0]);
    if (VAR_18[1] != -1)
        FUNC_28(VAR_18[1]);
    if (VAR_20 != ((void*)0)) {
        FUNC_43(VAR_20);
        FUNC_31(VAR_20);
    }
    if (VAR_19 != -1)
        FUNC_28(VAR_19);
    if (VAR_16->engine != ((void*)0)) {
        FUNC_7(VAR_16->engine);
        VAR_16->engine = ((void*)0);
    }
    return -1;
}
