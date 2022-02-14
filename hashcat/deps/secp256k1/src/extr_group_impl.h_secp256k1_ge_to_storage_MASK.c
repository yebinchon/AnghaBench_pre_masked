
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; } ;
typedef TYPE_1__ secp256k1_ge_storage ;
struct TYPE_6__ {int y; int x; int infinity; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(secp256k1_ge_storage *VAR_0, const secp256k1_ge *VAR_1) {
    secp256k1_fe VAR_2, VAR_3;
    FUNC_0(!VAR_1->infinity);
    VAR_2 = VAR_1->x;
    FUNC_1(&VAR_2);
    VAR_3 = VAR_1->y;
    FUNC_1(&VAR_3);
    FUNC_2(&VAR_0->x, &VAR_2);
    FUNC_2(&VAR_0->y, &VAR_3);
}
