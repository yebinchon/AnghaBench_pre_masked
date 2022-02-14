
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_pubkey ;
typedef int secp256k1_ecdsa_signature ;
struct TYPE_2__ {int* sig; int siglen; int msg; int ctx; int pubkeylen; int pubkey; } ;
typedef TYPE_1__ benchmark_verify_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int *,int*,int ) ;
 int FUNC_3 (int ,int *,int ,int *) ;

__attribute__((used)) static void FUNC_4(void* VAR_0) {
    int VAR_1;
    benchmark_verify_t* VAR_2 = (benchmark_verify_t*)VAR_0;

    for (VAR_1 = 0; VAR_1 < 20000; VAR_1++) {
        secp256k1_pubkey VAR_3;
        secp256k1_ecdsa_signature VAR_4;
        VAR_2->sig[VAR_2->siglen - 1] ^= (VAR_1 & 0xFF);
        VAR_2->sig[VAR_2->siglen - 2] ^= ((VAR_1 >> 8) & 0xFF);
        VAR_2->sig[VAR_2->siglen - 3] ^= ((VAR_1 >> 16) & 0xFF);
        FUNC_0(FUNC_1(VAR_2->ctx, &VAR_3, VAR_2->pubkey, VAR_2->pubkeylen) == 1);
        FUNC_0(FUNC_2(VAR_2->ctx, &VAR_4, VAR_2->sig, VAR_2->siglen) == 1);
        FUNC_0(FUNC_3(VAR_2->ctx, &VAR_4, VAR_2->msg, &VAR_3) == (VAR_1 == 0));
        VAR_2->sig[VAR_2->siglen - 1] ^= (VAR_1 & 0xFF);
        VAR_2->sig[VAR_2->siglen - 2] ^= ((VAR_1 >> 8) & 0xFF);
        VAR_2->sig[VAR_2->siglen - 3] ^= ((VAR_1 >> 16) & 0xFF);
    }
}
