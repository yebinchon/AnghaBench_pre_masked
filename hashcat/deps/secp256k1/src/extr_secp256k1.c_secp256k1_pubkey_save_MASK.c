
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ secp256k1_pubkey ;
typedef int secp256k1_ge_storage ;
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int s ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(secp256k1_pubkey* VAR_0, secp256k1_ge* VAR_1) {
    if (sizeof(secp256k1_ge_storage) == 64) {
        secp256k1_ge_storage VAR_2;
        FUNC_5(&VAR_2, VAR_1);
        FUNC_1(&VAR_0->data[0], &VAR_2, sizeof(VAR_2));
    } else {
        FUNC_0(!FUNC_4(VAR_1));
        FUNC_3(&VAR_1->x);
        FUNC_3(&VAR_1->y);
        FUNC_2(VAR_0->data, &VAR_1->x);
        FUNC_2(VAR_0->data + 32, &VAR_1->y);
    }
}
