
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; int x; int z; scalar_t__ infinity; } ;
typedef TYPE_1__ secp256k1_gej ;
typedef int secp256k1_fe ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(secp256k1_gej *VAR_0, const secp256k1_gej *VAR_1, secp256k1_fe *VAR_2) {







    secp256k1_fe VAR_3,VAR_4,VAR_5,VAR_6;
    VAR_0->infinity = VAR_1->infinity;
    if (VAR_0->infinity) {
        if (VAR_2 != ((void*)0)) {
            FUNC_5(VAR_2, 1);
        }
        return;
    }

    if (VAR_2 != ((void*)0)) {
        *VAR_2 = VAR_1->y;
        FUNC_4(VAR_2);
        FUNC_2(VAR_2, 2);
    }

    FUNC_1(&VAR_0->z, &VAR_1->z, &VAR_1->y);
    FUNC_2(&VAR_0->z, 2);
    FUNC_6(&VAR_3, &VAR_1->x);
    FUNC_2(&VAR_3, 3);
    FUNC_6(&VAR_4, &VAR_3);
    FUNC_6(&VAR_5, &VAR_1->y);
    FUNC_2(&VAR_5, 2);
    FUNC_6(&VAR_6, &VAR_5);
    FUNC_2(&VAR_6, 2);
    FUNC_1(&VAR_5, &VAR_5, &VAR_1->x);
    VAR_0->x = VAR_5;
    FUNC_2(&VAR_0->x, 4);
    FUNC_3(&VAR_0->x, &VAR_0->x, 4);
    FUNC_0(&VAR_0->x, &VAR_4);
    FUNC_3(&VAR_4, &VAR_4, 1);
    FUNC_2(&VAR_5, 6);
    FUNC_0(&VAR_5, &VAR_4);
    FUNC_1(&VAR_0->y, &VAR_3, &VAR_5);
    FUNC_3(&VAR_4, &VAR_6, 2);
    FUNC_0(&VAR_0->y, &VAR_4);
}
