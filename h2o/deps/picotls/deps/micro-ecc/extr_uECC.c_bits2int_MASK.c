
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_3__ {unsigned int num_n_bits; int n; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int*,int const*,unsigned int) ;
 int FUNC_4 (int*,unsigned int) ;
 int FUNC_5 (int ,int*,unsigned int) ;
 int FUNC_6 (int*,int*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(uECC_word_t *VAR_1,
                     const uint8_t *VAR_2,
                     unsigned VAR_3,
                     uECC_Curve VAR_4) {
    unsigned VAR_5 = FUNC_0(VAR_4->num_n_bits);
    unsigned VAR_6 = FUNC_1(VAR_4->num_n_bits);
    int VAR_7;
    uECC_word_t VAR_8;
    uECC_word_t *VAR_9;

    if (VAR_3 > VAR_5) {
        VAR_3 = VAR_5;
    }

    FUNC_4(VAR_1, VAR_6);



    FUNC_3(VAR_1, VAR_2, VAR_3);

    if (VAR_3 * 8 <= (unsigned)VAR_4->num_n_bits) {
        return;
    }
    VAR_7 = VAR_3 * 8 - VAR_4->num_n_bits;
    VAR_8 = 0;
    VAR_9 = VAR_1 + VAR_6;
    while (VAR_9-- > VAR_1) {
        uECC_word_t VAR_10 = *VAR_9;
        *VAR_9 = (VAR_10 >> VAR_7) | VAR_8;
        VAR_8 = VAR_10 << (VAR_0 - VAR_7);
    }


    if (FUNC_5(VAR_4->n, VAR_1, VAR_6) != 1) {
        FUNC_6(VAR_1, VAR_1, VAR_4->n, VAR_6);
    }
}
