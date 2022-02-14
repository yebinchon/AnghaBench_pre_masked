
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ infinity; int z; int y; int x; } ;
typedef TYPE_1__ secp256k1_gej ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(const secp256k1_gej *VAR_0, const secp256k1_gej *VAR_1) {
    secp256k1_gej VAR_2;
    secp256k1_gej VAR_3;
    int VAR_4 = 1;
    VAR_4 &= VAR_0->infinity == VAR_1->infinity;
    if (VAR_4 && !VAR_0->infinity) {
        VAR_2 = *VAR_0;
        VAR_3 = *VAR_1;
        FUNC_1(&VAR_2);
        FUNC_1(&VAR_2);
        FUNC_1(&VAR_2);
        FUNC_1(&VAR_3);
        FUNC_1(&VAR_3);
        FUNC_1(&VAR_3);
        VAR_4 &= FUNC_0(&VAR_2, &VAR_3) == 0;
        VAR_4 &= FUNC_0(&VAR_2, &VAR_3) == 0;
        VAR_4 &= FUNC_0(&VAR_2, &VAR_3) == 0;
    }
    return VAR_4;
}
