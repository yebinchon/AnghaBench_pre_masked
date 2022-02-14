
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; int z; int x; int infinity; } ;
typedef TYPE_1__ secp256k1_gej ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(secp256k1_gej *VAR_0, const secp256k1_gej *VAR_1) {
    VAR_0->infinity = VAR_1->infinity;
    VAR_0->x = VAR_1->x;
    VAR_0->y = VAR_1->y;
    VAR_0->z = VAR_1->z;
    FUNC_1(&VAR_0->y);
    FUNC_0(&VAR_0->y, &VAR_0->y, 1);
}
