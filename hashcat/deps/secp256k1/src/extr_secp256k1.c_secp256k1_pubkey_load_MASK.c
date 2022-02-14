
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ secp256k1_pubkey ;
typedef int secp256k1_ge_storage ;
struct TYPE_8__ {int x; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;
typedef int secp256k1_context ;
typedef int s ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static int FUNC_6(const secp256k1_context* VAR_0, secp256k1_ge* VAR_1, const secp256k1_pubkey* VAR_2) {
    if (sizeof(secp256k1_ge_storage) == 64) {



        secp256k1_ge_storage VAR_3;
        FUNC_1(&VAR_3, &VAR_2->data[0], sizeof(VAR_3));
        FUNC_4(VAR_1, &VAR_3);
    } else {

        secp256k1_fe VAR_4, VAR_5;
        FUNC_3(&VAR_4, VAR_2->data);
        FUNC_3(&VAR_5, VAR_2->data + 32);
        FUNC_5(VAR_1, &VAR_4, &VAR_5);
    }
    FUNC_0(!FUNC_2(&VAR_1->x));
    return 1;
}
