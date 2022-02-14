
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; int z; scalar_t__ infinity; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_6__ {int y; int x; scalar_t__ infinity; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(secp256k1_ge *VAR_0, secp256k1_gej *VAR_1) {
    secp256k1_fe VAR_2, VAR_3;
    VAR_0->infinity = VAR_1->infinity;
    if (VAR_1->infinity) {
        return;
    }
    FUNC_0(&VAR_1->z, &VAR_1->z);
    FUNC_3(&VAR_2, &VAR_1->z);
    FUNC_1(&VAR_3, &VAR_1->z, &VAR_2);
    FUNC_1(&VAR_1->x, &VAR_1->x, &VAR_2);
    FUNC_1(&VAR_1->y, &VAR_1->y, &VAR_3);
    FUNC_2(&VAR_1->z, 1);
    VAR_0->x = VAR_1->x;
    VAR_0->y = VAR_1->y;
}
