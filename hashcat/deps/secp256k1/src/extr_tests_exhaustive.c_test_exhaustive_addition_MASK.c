
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_31__ {int y; int x; int infinity; int z; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_32__ {int y; int x; int infinity; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__ const*,TYPE_2__ const*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__ const*,TYPE_2__ const*,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__ const*,TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__ const*,int *) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__ const*,int *) ;
 int FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__ const*) ;

void FUNC_14(const secp256k1_ge *VAR_0, const secp256k1_gej *VAR_1, int VAR_2) {
    int VAR_3, VAR_4;


    FUNC_0(FUNC_4(&VAR_0[0]));
    FUNC_0(FUNC_12(&VAR_1[0]));
    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
        FUNC_0(!FUNC_4(&VAR_0[VAR_3]));
        FUNC_0(!FUNC_12(&VAR_1[VAR_3]));
    }


    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        secp256k1_fe VAR_5;
        FUNC_3(&VAR_5, &VAR_1[VAR_4].z);
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
            secp256k1_ge VAR_6;
            secp256k1_gej VAR_7;

            FUNC_8(&VAR_7, &VAR_1[VAR_3], &VAR_1[VAR_4], ((void*)0));
            FUNC_2(&VAR_0[(VAR_3 + VAR_4) % VAR_2], &VAR_7);

            if (VAR_4 > 0) {
                FUNC_6(&VAR_7, &VAR_1[VAR_3], &VAR_0[VAR_4]);
                FUNC_2(&VAR_0[(VAR_3 + VAR_4) % VAR_2], &VAR_7);
            }

            FUNC_7(&VAR_7, &VAR_1[VAR_3], &VAR_0[VAR_4], ((void*)0));
            FUNC_2(&VAR_0[(VAR_3 + VAR_4) % VAR_2], &VAR_7);

            VAR_6.infinity = VAR_1[VAR_4].infinity;
            VAR_6.x = VAR_1[VAR_4].x;
            VAR_6.y = VAR_1[VAR_4].y;
            FUNC_9(&VAR_7, &VAR_1[VAR_3], &VAR_6, &VAR_5);
            FUNC_2(&VAR_0[(VAR_3 + VAR_4) % VAR_2], &VAR_7);
        }
    }


    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        secp256k1_gej VAR_8;
        if (VAR_3 > 0) {
            FUNC_10(&VAR_8, &VAR_1[VAR_3], ((void*)0));
            FUNC_2(&VAR_0[(2 * VAR_3) % VAR_2], &VAR_8);
        }
        FUNC_11(&VAR_8, &VAR_1[VAR_3], ((void*)0));
        FUNC_2(&VAR_0[(2 * VAR_3) % VAR_2], &VAR_8);
    }


    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
        secp256k1_ge VAR_9;
        secp256k1_gej VAR_10;
        FUNC_5(&VAR_9, &VAR_0[VAR_3]);
        FUNC_1(&VAR_0[VAR_2 - VAR_3], &VAR_9);
        FUNC_13(&VAR_10, &VAR_1[VAR_3]);
        FUNC_2(&VAR_0[VAR_2 - VAR_3], &VAR_10);
    }
}
