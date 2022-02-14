
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fe_x; } ;
typedef TYPE_1__ bench_inv ;


 int FUNC_0 (int *) ;

void FUNC_1(void* VAR_0) {
    int VAR_1;
    bench_inv *VAR_2 = (bench_inv*)VAR_0;

    for (VAR_1 = 0; VAR_1 < 2000000; VAR_1++) {
        FUNC_0(&VAR_2->fe_x);
    }
}
