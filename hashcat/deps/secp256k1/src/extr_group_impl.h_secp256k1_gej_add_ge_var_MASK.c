
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int infinity; int y; int x; int z; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_11__ {int y; int x; scalar_t__ infinity; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__ const*,int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_11(secp256k1_gej *VAR_0, const secp256k1_gej *VAR_1, const secp256k1_ge *VAR_2, secp256k1_fe *VAR_3) {

    secp256k1_fe VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    if (VAR_1->infinity) {
        FUNC_0(VAR_3 == ((void*)0));
        FUNC_10(VAR_0, VAR_2);
        return;
    }
    if (VAR_2->infinity) {
        if (VAR_3 != ((void*)0)) {
            FUNC_7(VAR_3, 1);
        }
        *VAR_0 = *VAR_1;
        return;
    }
    VAR_0->infinity = 0;

    FUNC_8(&VAR_4, &VAR_1->z);
    VAR_5 = VAR_1->x; FUNC_5(&VAR_5);
    FUNC_2(&VAR_6, &VAR_2->x, &VAR_4);
    VAR_7 = VAR_1->y; FUNC_5(&VAR_7);
    FUNC_2(&VAR_8, &VAR_2->y, &VAR_4); FUNC_2(&VAR_8, &VAR_8, &VAR_1->z);
    FUNC_4(&VAR_9, &VAR_5, 1); FUNC_1(&VAR_9, &VAR_6);
    FUNC_4(&VAR_10, &VAR_7, 1); FUNC_1(&VAR_10, &VAR_8);
    if (FUNC_6(&VAR_9)) {
        if (FUNC_6(&VAR_10)) {
            FUNC_9(VAR_0, VAR_1, VAR_3);
        } else {
            if (VAR_3 != ((void*)0)) {
                FUNC_7(VAR_3, 0);
            }
            VAR_0->infinity = 1;
        }
        return;
    }
    FUNC_8(&VAR_11, &VAR_10);
    FUNC_8(&VAR_12, &VAR_9);
    FUNC_2(&VAR_13, &VAR_9, &VAR_12);
    if (VAR_3 != ((void*)0)) {
        *VAR_3 = VAR_9;
    }
    FUNC_2(&VAR_0->z, &VAR_1->z, &VAR_9);
    FUNC_2(&VAR_14, &VAR_5, &VAR_12);
    VAR_0->x = VAR_14; FUNC_3(&VAR_0->x, 2); FUNC_1(&VAR_0->x, &VAR_13); FUNC_4(&VAR_0->x, &VAR_0->x, 3); FUNC_1(&VAR_0->x, &VAR_11);
    FUNC_4(&VAR_0->y, &VAR_0->x, 5); FUNC_1(&VAR_0->y, &VAR_14); FUNC_2(&VAR_0->y, &VAR_0->y, &VAR_10);
    FUNC_2(&VAR_13, &VAR_13, &VAR_7); FUNC_4(&VAR_13, &VAR_13, 1);
    FUNC_1(&VAR_0->y, &VAR_13);
}
