
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ infinity; int y; int x; } ;
typedef TYPE_1__ secp256k1_ge ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(const secp256k1_ge *VAR_0, const secp256k1_ge *VAR_1) {
    FUNC_0(VAR_0->infinity == VAR_1->infinity);
    if (VAR_0->infinity) {
        return;
    }
    FUNC_0(FUNC_1(&VAR_0->x, &VAR_1->x));
    FUNC_0(FUNC_1(&VAR_0->y, &VAR_1->y));
}
