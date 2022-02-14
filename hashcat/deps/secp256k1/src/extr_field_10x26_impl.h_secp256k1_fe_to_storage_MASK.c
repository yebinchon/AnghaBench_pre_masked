
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* n; } ;
typedef TYPE_1__ secp256k1_fe_storage ;
struct TYPE_6__ {int* n; int normalized; } ;
typedef TYPE_2__ secp256k1_fe ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(secp256k1_fe_storage *VAR_0, const secp256k1_fe *VAR_1) {



    VAR_0->n[0] = VAR_1->n[0] | VAR_1->n[1] << 26;
    VAR_0->n[1] = VAR_1->n[1] >> 6 | VAR_1->n[2] << 20;
    VAR_0->n[2] = VAR_1->n[2] >> 12 | VAR_1->n[3] << 14;
    VAR_0->n[3] = VAR_1->n[3] >> 18 | VAR_1->n[4] << 8;
    VAR_0->n[4] = VAR_1->n[4] >> 24 | VAR_1->n[5] << 2 | VAR_1->n[6] << 28;
    VAR_0->n[5] = VAR_1->n[6] >> 4 | VAR_1->n[7] << 22;
    VAR_0->n[6] = VAR_1->n[7] >> 10 | VAR_1->n[8] << 16;
    VAR_0->n[7] = VAR_1->n[8] >> 16 | VAR_1->n[9] << 10;
}
