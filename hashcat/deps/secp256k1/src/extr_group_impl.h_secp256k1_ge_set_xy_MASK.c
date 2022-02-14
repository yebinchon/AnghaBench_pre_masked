
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; scalar_t__ infinity; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;



__attribute__((used)) static void FUNC_0(secp256k1_ge *VAR_0, const secp256k1_fe *VAR_1, const secp256k1_fe *VAR_2) {
    VAR_0->infinity = 0;
    VAR_0->x = *VAR_1;
    VAR_0->y = *VAR_2;
}
