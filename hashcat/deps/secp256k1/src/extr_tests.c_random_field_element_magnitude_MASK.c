
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int magnitude; } ;
typedef TYPE_1__ secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;

void FUNC_7(secp256k1_fe *VAR_0) {
    secp256k1_fe VAR_1;
    int VAR_2 = FUNC_6(9);
    FUNC_5(VAR_0);
    if (VAR_2 == 0) {
        return;
    }
    FUNC_2(&VAR_1);
    FUNC_4(&VAR_1, &VAR_1, 0);
    FUNC_3(&VAR_1, VAR_2 - 1);
    FUNC_1(VAR_0, &VAR_1);



}
