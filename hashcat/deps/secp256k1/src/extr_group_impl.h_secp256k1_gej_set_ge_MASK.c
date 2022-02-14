
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z; int y; int x; int infinity; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_6__ {int y; int x; int infinity; } ;
typedef TYPE_2__ secp256k1_ge ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(secp256k1_gej *VAR_0, const secp256k1_ge *VAR_1) {
   VAR_0->infinity = VAR_1->infinity;
   VAR_0->x = VAR_1->x;
   VAR_0->y = VAR_1->y;
   FUNC_0(&VAR_0->z, 1);
}
