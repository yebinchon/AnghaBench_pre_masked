
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_gej ;
struct TYPE_2__ {int count; int * expected_output; int * output; } ;
typedef TYPE_1__ bench_data ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void* VAR_1) {
    bench_data* VAR_2 = (bench_data*)VAR_1;
    size_t VAR_3 = 1 + VAR_0 / VAR_2->count;
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        secp256k1_gej VAR_5;
        FUNC_1(&VAR_5, &VAR_2->output[VAR_4], &VAR_2->expected_output[VAR_4], ((void*)0));
        FUNC_0(FUNC_2(&VAR_5));
    }
}
