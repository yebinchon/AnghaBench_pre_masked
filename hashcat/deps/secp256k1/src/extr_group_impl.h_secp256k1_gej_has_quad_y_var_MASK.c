
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z; int y; scalar_t__ infinity; } ;
typedef TYPE_1__ secp256k1_gej ;
typedef int secp256k1_fe ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(const secp256k1_gej *VAR_0) {
    secp256k1_fe VAR_1;

    if (VAR_0->infinity) {
        return 0;
    }




    FUNC_1(&VAR_1, &VAR_0->y, &VAR_0->z);
    return FUNC_0(&VAR_1);
}
