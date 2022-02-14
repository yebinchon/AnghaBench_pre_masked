
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_fe ;
struct TYPE_2__ {int fe_y; int fe_x; } ;
typedef TYPE_1__ bench_inv ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(void* VAR_0) {
    int VAR_1;
    bench_inv *VAR_2 = (bench_inv*)VAR_0;
    secp256k1_fe VAR_3;

    for (VAR_1 = 0; VAR_1 < 20000; VAR_1++) {
        VAR_3 = VAR_2->fe_x;
        FUNC_1(&VAR_2->fe_x, &VAR_3);
        FUNC_0(&VAR_2->fe_x, &VAR_2->fe_y);
    }
}
