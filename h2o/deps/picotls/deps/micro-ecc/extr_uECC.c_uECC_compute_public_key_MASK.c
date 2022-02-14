
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_4__ {int num_bytes; int num_words; int num_n_bits; int n; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int *) ;

int FUNC_7(const uint8_t *VAR_1, uint8_t *VAR_2, uECC_Curve VAR_3) {




    uECC_word_t VAR_4[VAR_0];
    uECC_word_t VAR_5[VAR_0 * 2];



    FUNC_3(VAR_4, VAR_1, FUNC_0(VAR_3->num_n_bits));



    if (FUNC_5(VAR_4, FUNC_1(VAR_3->num_n_bits))) {
        return 0;
    }

    if (FUNC_4(VAR_3->n, VAR_4, FUNC_1(VAR_3->num_n_bits)) != 1) {
        return 0;
    }


    if (!FUNC_2(VAR_5, VAR_4, VAR_3)) {
        return 0;
    }


    FUNC_6(VAR_2, VAR_3->num_bytes, VAR_5);
    FUNC_6(
        VAR_2 + VAR_3->num_bytes, VAR_3->num_bytes, VAR_5 + VAR_3->num_words);

    return 1;
}
