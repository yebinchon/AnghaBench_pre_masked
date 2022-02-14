
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* n; int normalized; } ;
typedef TYPE_1__ secp256k1_fe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_2(const secp256k1_fe *VAR_0, const secp256k1_fe *VAR_1) {
    int VAR_2;






    for (VAR_2 = 9; VAR_2 >= 0; VAR_2--) {
        if (VAR_0->n[VAR_2] > VAR_1->n[VAR_2]) {
            return 1;
        }
        if (VAR_0->n[VAR_2] < VAR_1->n[VAR_2]) {
            return -1;
        }
    }
    return 0;
}
