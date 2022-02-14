
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_pubkey ;
typedef int secp256k1_ecdsa_recoverable_signature ;
struct TYPE_2__ {unsigned char* sig; unsigned char* msg; int ctx; } ;
typedef TYPE_1__ bench_recover_data ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned char*,size_t*,int *,int ) ;
 int FUNC_2 (int ,int *,int *,unsigned char*) ;
 int FUNC_3 (int ,int *,unsigned char*,int) ;

void FUNC_4(void* VAR_1) {
    int VAR_2;
    bench_recover_data *VAR_3 = (bench_recover_data*)VAR_1;
    secp256k1_pubkey VAR_4;
    unsigned char VAR_5[33];

    for (VAR_2 = 0; VAR_2 < 20000; VAR_2++) {
        int VAR_6;
        size_t VAR_7 = 33;
        secp256k1_ecdsa_recoverable_signature VAR_8;
        FUNC_0(FUNC_3(VAR_3->ctx, &VAR_8, VAR_3->sig, VAR_2 % 2));
        FUNC_0(FUNC_2(VAR_3->ctx, &VAR_4, &VAR_8, VAR_3->msg));
        FUNC_0(FUNC_1(VAR_3->ctx, VAR_5, &VAR_7, &VAR_4, VAR_0));
        for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
            VAR_3->sig[VAR_6 + 32] = VAR_3->msg[VAR_6];
            VAR_3->msg[VAR_6] = VAR_3->sig[VAR_6];
            VAR_3->sig[VAR_6] = VAR_5[VAR_6 + 1];
        }
    }
}
