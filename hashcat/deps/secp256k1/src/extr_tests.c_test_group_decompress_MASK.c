
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int secp256k1_gej ;
struct TYPE_5__ {int y; int x; int infinity; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,TYPE_1__*) ;

void FUNC_13(const secp256k1_fe* VAR_0) {

    secp256k1_fe VAR_1 = *VAR_0;
    secp256k1_fe VAR_2;

    secp256k1_ge VAR_3, VAR_4, VAR_5;
    secp256k1_gej VAR_6;

    int VAR_7, VAR_8, VAR_9;

    FUNC_6(&VAR_1);

    VAR_7 = FUNC_8(&VAR_3, &VAR_1);
    VAR_8 = FUNC_7(&VAR_4, &VAR_1, 0);
    VAR_9 = FUNC_7(&VAR_5, &VAR_1, 1);

    FUNC_0(VAR_7 == VAR_8);
    FUNC_0(VAR_7 == VAR_9);

    if (VAR_7) {
        FUNC_6(&VAR_3.x);
        FUNC_6(&VAR_5.x);
        FUNC_6(&VAR_4.x);
        FUNC_6(&VAR_3.y);
        FUNC_6(&VAR_5.y);
        FUNC_6(&VAR_4.y);


        FUNC_0(!VAR_3.infinity);
        FUNC_0(!VAR_4.infinity);
        FUNC_0(!VAR_5.infinity);


        FUNC_0(FUNC_2(&VAR_3.x, VAR_0));
        FUNC_0(FUNC_2(&VAR_4.x, VAR_0));
        FUNC_0(FUNC_2(&VAR_5.x, VAR_0));


        FUNC_0(FUNC_4(&VAR_3.y));


        FUNC_0(FUNC_3(&VAR_5.y));
        FUNC_0(!FUNC_3(&VAR_4.y));


        FUNC_12(&VAR_6, &VAR_3);
        FUNC_0(FUNC_9(&VAR_6));
        do {
            FUNC_1(&VAR_2);
        } while (FUNC_5(&VAR_2));
        FUNC_11(&VAR_6, &VAR_2);
        FUNC_0(FUNC_9(&VAR_6));
        FUNC_10(&VAR_6, &VAR_6);
        FUNC_0(!FUNC_9(&VAR_6));
        do {
            FUNC_1(&VAR_2);
        } while (FUNC_5(&VAR_2));
        FUNC_11(&VAR_6, &VAR_2);
        FUNC_0(!FUNC_9(&VAR_6));
        FUNC_10(&VAR_6, &VAR_6);
        FUNC_0(FUNC_9(&VAR_6));
    }
}
