
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int infinity; int const y; int const x; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_6__ {int infinity; int const y; int const x; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int const secp256k1_fe ;


 int FUNC_0 (int const*,int const*,int const*) ;
 int FUNC_1 (int const*,int const*) ;

__attribute__((used)) static void FUNC_2(secp256k1_ge *VAR_0, const secp256k1_gej *VAR_1, const secp256k1_fe *VAR_2) {
    secp256k1_fe VAR_3;
    secp256k1_fe VAR_4;
    FUNC_1(&VAR_3, VAR_2);
    FUNC_0(&VAR_4, &VAR_3, VAR_2);
    FUNC_0(&VAR_0->x, &VAR_1->x, &VAR_3);
    FUNC_0(&VAR_0->y, &VAR_1->y, &VAR_4);
    VAR_0->infinity = VAR_1->infinity;
}
