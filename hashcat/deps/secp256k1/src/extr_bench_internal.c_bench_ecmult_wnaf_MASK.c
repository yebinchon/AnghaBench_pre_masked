
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scalar_y; int scalar_x; int wnaf; } ;
typedef TYPE_1__ bench_inv ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int *,int *,int *) ;

void FUNC_2(void* VAR_1) {
    int VAR_2;
    bench_inv *VAR_3 = (bench_inv*)VAR_1;

    for (VAR_2 = 0; VAR_2 < 20000; VAR_2++) {
        FUNC_0(VAR_3->wnaf, 256, &VAR_3->scalar_x, VAR_0);
        FUNC_1(&VAR_3->scalar_x, &VAR_3->scalar_x, &VAR_3->scalar_y);
    }
}
