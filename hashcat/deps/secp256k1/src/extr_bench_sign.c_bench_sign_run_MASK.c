
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_ecdsa_signature ;
struct TYPE_2__ {unsigned char* msg; unsigned char* key; int ctx; } ;
typedef TYPE_1__ bench_sign ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,unsigned char*,unsigned char*,int *,int *) ;
 int FUNC_2 (int ,unsigned char*,size_t*,int *) ;

__attribute__((used)) static void FUNC_3(void* VAR_0) {
    int VAR_1;
    bench_sign *VAR_2 = (bench_sign*)VAR_0;

    unsigned char VAR_3[74];
    for (VAR_1 = 0; VAR_1 < 20000; VAR_1++) {
        size_t VAR_4 = 74;
        int VAR_5;
        secp256k1_ecdsa_signature VAR_6;
        FUNC_0(FUNC_1(VAR_2->ctx, &VAR_6, VAR_2->msg, VAR_2->key, ((void*)0), ((void*)0)));
        FUNC_0(FUNC_2(VAR_2->ctx, VAR_3, &VAR_4, &VAR_6));
        for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
            VAR_2->msg[VAR_5] = VAR_3[VAR_5];
            VAR_2->key[VAR_5] = VAR_3[VAR_5 + 32];
        }
    }
}
