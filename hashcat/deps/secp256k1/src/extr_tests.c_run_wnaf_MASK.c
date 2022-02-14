
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int member_0; } ;
struct TYPE_12__ {int* d; TYPE_1__ member_0; } ;
typedef TYPE_2__ secp256k1_scalar ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*,int) ;

void FUNC_10(void) {
    int VAR_1;
    secp256k1_scalar VAR_2 = {0};



    VAR_2.d[0] = 1;
    FUNC_5(&VAR_2, 4);
    VAR_2.d[0] = 2;
    FUNC_5(&VAR_2, 4);

    FUNC_8();

    for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
        FUNC_1(&VAR_2);
        FUNC_9(&VAR_2, 4+(VAR_1%10));
        FUNC_6(&VAR_2);
        FUNC_5(&VAR_2, 4 + (VAR_1 % 10));
        FUNC_7(&VAR_2, 4 + (VAR_1 % 10));
    }
    FUNC_4(&VAR_2, 0);
    FUNC_0(FUNC_2(&VAR_2, 1) == -1);
    FUNC_0(FUNC_3(&VAR_2));
    FUNC_0(FUNC_2(&VAR_2, 0) == 1);
    FUNC_0(FUNC_3(&VAR_2));
}
