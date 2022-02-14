
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z; int y; int x; } ;
typedef TYPE_1__ secp256k1_gej ;
typedef int const secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int *,int const*) ;
 int FUNC_3 (int const*,int const*) ;

__attribute__((used)) static void FUNC_4(secp256k1_gej *VAR_0, const secp256k1_fe *VAR_1) {

    secp256k1_fe VAR_2;
    FUNC_0(!FUNC_1(VAR_1));
    FUNC_3(&VAR_2, VAR_1);
    FUNC_2(&VAR_0->x, &VAR_0->x, &VAR_2);
    FUNC_2(&VAR_0->y, &VAR_0->y, &VAR_2);
    FUNC_2(&VAR_0->y, &VAR_0->y, VAR_1);
    FUNC_2(&VAR_0->z, &VAR_0->z, VAR_1);
}
