
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_4__ {int num_n_bits; int n; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_2 (int const*,int const*,unsigned int,scalar_t__*,int *,TYPE_1__*) ;

int FUNC_3(const uint8_t *VAR_2,
              const uint8_t *VAR_3,
              unsigned VAR_4,
              uint8_t *VAR_5,
              uECC_Curve VAR_6) {
    uECC_word_t VAR_7[VAR_0];
    uECC_word_t VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
        if (!FUNC_1(VAR_7, VAR_6->n, FUNC_0(VAR_6->num_n_bits))) {
            return 0;
        }

        if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5, VAR_6)) {
            return 1;
        }
    }
    return 0;
}
