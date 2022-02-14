
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; } ;
typedef TYPE_1__ secp256k1_ge_storage ;
struct TYPE_6__ {scalar_t__ infinity; int y; int x; } ;
typedef TYPE_2__ secp256k1_ge ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(secp256k1_ge *VAR_0, const secp256k1_ge_storage *VAR_1) {
    FUNC_0(&VAR_0->x, &VAR_1->x);
    FUNC_0(&VAR_0->y, &VAR_1->y);
    VAR_0->infinity = 0;
}
