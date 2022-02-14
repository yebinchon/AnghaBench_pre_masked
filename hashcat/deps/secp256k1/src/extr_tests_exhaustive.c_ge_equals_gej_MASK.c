
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ infinity; int y; int z; int x; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_6__ {scalar_t__ infinity; int y; int x; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(const secp256k1_ge *VAR_0, const secp256k1_gej *VAR_1) {
    secp256k1_fe VAR_2;
    secp256k1_fe VAR_3, VAR_4, VAR_5, VAR_6;
    FUNC_0(VAR_0->infinity == VAR_1->infinity);
    if (VAR_0->infinity) {
        return;
    }

    FUNC_4(&VAR_2, &VAR_1->z);
    FUNC_2(&VAR_3, &VAR_0->x, &VAR_2);
    VAR_4 = VAR_1->x; FUNC_3(&VAR_4);
    FUNC_2(&VAR_5, &VAR_0->y, &VAR_2); FUNC_2(&VAR_5, &VAR_5, &VAR_1->z);
    VAR_6 = VAR_1->y; FUNC_3(&VAR_6);
    FUNC_0(FUNC_1(&VAR_3, &VAR_4));
    FUNC_0(FUNC_1(&VAR_5, &VAR_6));
}
