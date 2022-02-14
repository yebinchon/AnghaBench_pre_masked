
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int infinity; int y; int x; int z; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_6__ {int infinity; int y; int x; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(secp256k1_gej *VAR_0, const secp256k1_ge *VAR_1) {
    secp256k1_fe VAR_2, VAR_3;
    do {
        FUNC_0(&VAR_0->z);
        if (!FUNC_1(&VAR_0->z)) {
            break;
        }
    } while(1);
    FUNC_3(&VAR_2, &VAR_0->z);
    FUNC_2(&VAR_3, &VAR_2, &VAR_0->z);
    FUNC_2(&VAR_0->x, &VAR_1->x, &VAR_2);
    FUNC_2(&VAR_0->y, &VAR_1->y, &VAR_3);
    VAR_0->infinity = VAR_1->infinity;
}
