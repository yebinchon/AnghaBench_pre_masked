
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scalar; int point; int ctx; } ;
typedef TYPE_1__ bench_ecdh_data ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char*,int *,int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(void* VAR_0) {
    int VAR_1;
    unsigned char VAR_2[32];
    bench_ecdh_data *VAR_3 = (bench_ecdh_data*)VAR_0;

    for (VAR_1 = 0; VAR_1 < 20000; VAR_1++) {
        FUNC_0(FUNC_1(VAR_3->ctx, VAR_2, &VAR_3->point, VAR_3->scalar, ((void*)0), ((void*)0)) == 1);
    }
}
