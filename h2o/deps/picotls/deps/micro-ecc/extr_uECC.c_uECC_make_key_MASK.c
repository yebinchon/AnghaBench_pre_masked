
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_4__ {int num_bytes; int num_words; int num_n_bits; int n; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__*,int ,int ) ;
 int FUNC_4 (int *,int,scalar_t__*) ;

int FUNC_5(uint8_t *VAR_2,
                  uint8_t *VAR_3,
                  uECC_Curve VAR_4) {




    uECC_word_t VAR_5[VAR_0];
    uECC_word_t VAR_6[VAR_0 * 2];

    uECC_word_t VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
        if (!FUNC_3(VAR_5, VAR_4->n, FUNC_1(VAR_4->num_n_bits))) {
            return 0;
        }

        if (FUNC_2(VAR_6, VAR_5, VAR_4)) {

            FUNC_4(VAR_3, FUNC_0(VAR_4->num_n_bits), VAR_5);
            FUNC_4(VAR_2, VAR_4->num_bytes, VAR_6);
            FUNC_4(
                VAR_2 + VAR_4->num_bytes, VAR_4->num_bytes, VAR_6 + VAR_4->num_words);

            return 1;
        }
    }
    return 0;
}
