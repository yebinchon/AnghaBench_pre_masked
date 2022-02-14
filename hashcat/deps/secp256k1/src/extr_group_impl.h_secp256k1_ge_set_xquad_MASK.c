
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; scalar_t__ infinity; int x; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(secp256k1_ge *VAR_1, const secp256k1_fe *VAR_2) {
    secp256k1_fe VAR_3, VAR_4, VAR_5;
    VAR_1->x = *VAR_2;
    FUNC_3(&VAR_3, VAR_2);
    FUNC_1(&VAR_4, VAR_2, &VAR_3);
    VAR_1->infinity = 0;
    FUNC_2(&VAR_5, VAR_0);
    FUNC_0(&VAR_5, &VAR_4);
    return FUNC_4(&VAR_1->y, &VAR_5);
}
