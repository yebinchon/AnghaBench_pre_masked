
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* msg; int* key; } ;
typedef TYPE_1__ bench_sign ;



__attribute__((used)) static void FUNC_0(void* VAR_0) {
    int VAR_1;
    bench_sign *VAR_2 = (bench_sign*)VAR_0;

    for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
        VAR_2->msg[VAR_1] = VAR_1 + 1;
    }
    for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
        VAR_2->key[VAR_1] = VAR_1 + 65;
    }
}
