
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(secp256k1_ge *VAR_0) {
    secp256k1_fe VAR_1;
    do {
        FUNC_0(&VAR_1);
        if (FUNC_2(VAR_0, &VAR_1, FUNC_3(1))) {
            FUNC_1(&VAR_0->y);
            break;
        }
    } while(1);
}
