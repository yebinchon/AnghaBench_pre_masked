
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wordcount_t ;
typedef int uint8_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_3__ {int num_bytes; } ;



void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, uECC_Curve VAR_2) {
    wordcount_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->num_bytes; ++VAR_3) {
        VAR_1[VAR_3+1] = VAR_0[VAR_3];
    }



    VAR_1[0] = 2 + (VAR_0[VAR_2->num_bytes * 2 - 1] & 0x01);

}
