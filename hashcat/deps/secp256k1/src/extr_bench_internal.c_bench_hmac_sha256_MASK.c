
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_hmac_sha256 ;
struct TYPE_2__ {int data; } ;
typedef TYPE_1__ bench_inv ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(void* VAR_0) {
    int VAR_1;
    bench_inv *VAR_2 = (bench_inv*)VAR_0;
    secp256k1_hmac_sha256 VAR_3;

    for (VAR_1 = 0; VAR_1 < 20000; VAR_1++) {
        FUNC_1(&VAR_3, VAR_2->data, 32);
        FUNC_2(&VAR_3, VAR_2->data, 32);
        FUNC_0(&VAR_3, VAR_2->data);
    }
}
