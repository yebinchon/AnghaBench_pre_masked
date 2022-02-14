
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_4(secp256k1_ge *VAR_0, const secp256k1_fe *VAR_1, int VAR_2) {
    if (!FUNC_3(VAR_0, VAR_1)) {
        return 0;
    }
    FUNC_2(&VAR_0->y);
    if (FUNC_0(&VAR_0->y) != VAR_2) {
        FUNC_1(&VAR_0->y, &VAR_0->y, 1);
    }
    return 1;

}
