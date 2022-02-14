
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scalar_y; int scalar_x; } ;
typedef TYPE_1__ bench_inv ;


 int FUNC_0 (int *,int *,int *) ;

void FUNC_1(void* VAR_0) {
    int VAR_1;
    bench_inv *VAR_2 = (bench_inv*)VAR_0;

    for (VAR_1 = 0; VAR_1 < 200000; VAR_1++) {
        FUNC_0(&VAR_2->scalar_x, &VAR_2->scalar_x, &VAR_2->scalar_y);
    }
}
