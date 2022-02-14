
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int z; int infinity; } ;
typedef TYPE_1__ secp256k1_gej ;
typedef int secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(const secp256k1_fe *VAR_0, const secp256k1_gej *VAR_1) {
    secp256k1_fe VAR_2, VAR_3;
    FUNC_0(!VAR_1->infinity);
    FUNC_4(&VAR_2, &VAR_1->z); FUNC_2(&VAR_2, &VAR_2, VAR_0);
    VAR_3 = VAR_1->x; FUNC_3(&VAR_3);
    return FUNC_1(&VAR_2, &VAR_3);
}
