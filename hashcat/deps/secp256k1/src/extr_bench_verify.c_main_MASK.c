
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_pubkey ;
typedef int secp256k1_ecdsa_signature ;
struct TYPE_3__ {int* msg; int* key; int siglen; int pubkeylen; int ctx; int ec_group; int pubkey; int sig; } ;
typedef TYPE_1__ benchmark_verify_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int ,int *,int *,TYPE_1__*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int*) ;
 int FUNC_7 (int ,int ,int*,int *,int ) ;
 int FUNC_8 (int ,int *,int*,int*,int *,int *) ;
 int FUNC_9 (int ,int ,int*,int *) ;

int FUNC_10(void) {
    int VAR_6;
    secp256k1_pubkey VAR_7;
    secp256k1_ecdsa_signature VAR_8;
    benchmark_verify_t VAR_9;

    VAR_9.ctx = FUNC_4(VAR_1 | VAR_2);

    for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
        VAR_9.msg[VAR_6] = 1 + VAR_6;
    }
    for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
        VAR_9.key[VAR_6] = 33 + VAR_6;
    }
    VAR_9.siglen = 72;
    FUNC_0(FUNC_8(VAR_9.ctx, &VAR_8, VAR_9.msg, VAR_9.key, ((void*)0), ((void*)0)));
    FUNC_0(FUNC_9(VAR_9.ctx, VAR_9.sig, &VAR_9.siglen, &VAR_8));
    FUNC_0(FUNC_6(VAR_9.ctx, &VAR_7, VAR_9.key));
    VAR_9.pubkeylen = 33;
    FUNC_0(FUNC_7(VAR_9.ctx, VAR_9.pubkey, &VAR_9.pubkeylen, &VAR_7, VAR_3) == 1);

    FUNC_3("ecdsa_verify", VAR_4, ((void*)0), ((void*)0), &VAR_9, 10, 20000);






    FUNC_5(VAR_9.ctx);
    return 0;
}
