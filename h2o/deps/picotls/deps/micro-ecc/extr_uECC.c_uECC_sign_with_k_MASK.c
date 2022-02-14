
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wordcount_t ;
typedef int const uint8_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
typedef int bitcount_t ;
struct TYPE_6__ {int num_words; int num_n_bits; scalar_t__ num_bytes; int n; int G; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int*,int ,int,TYPE_1__*) ;
 int FUNC_3 (int const*,int const*,scalar_t__) ;
 int FUNC_4 (int*,int const*,unsigned int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int*,int*,int*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int*,int const*,scalar_t__) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int ,int*,int) ;
 scalar_t__ FUNC_10 (int*,int) ;
 int FUNC_11 (int*,int*,int*,int ,int) ;
 int FUNC_12 (int*,int*,int ,int) ;
 int FUNC_13 (int*,int*,int*,int ,int) ;
 int FUNC_14 (int const*,scalar_t__,int*) ;
 int FUNC_15 (int*,int) ;
 int FUNC_16 (int*,int*,int) ;

__attribute__((used)) static int FUNC_17(const uint8_t *VAR_2,
                            const uint8_t *VAR_3,
                            unsigned VAR_4,
                            uECC_word_t *VAR_5,
                            uint8_t *VAR_6,
                            uECC_Curve VAR_7) {

    uECC_word_t VAR_8[VAR_1];
    uECC_word_t VAR_9[VAR_1];
    uECC_word_t *VAR_10[2] = {VAR_8, VAR_9};



    uECC_word_t VAR_11[VAR_1 * 2];

    uECC_word_t VAR_12;
    wordcount_t VAR_13 = VAR_7->num_words;
    wordcount_t VAR_14 = FUNC_1(VAR_7->num_n_bits);
    bitcount_t VAR_15 = VAR_7->num_n_bits;


    if (FUNC_10(VAR_5, VAR_13) || FUNC_9(VAR_7->n, VAR_5, VAR_14) != 1) {
        return 0;
    }

    VAR_12 = FUNC_5(VAR_5, VAR_8, VAR_9, VAR_7);
    FUNC_2(VAR_11, VAR_7->G, VAR_10[!VAR_12], 0, VAR_15 + 1, VAR_7);
    if (FUNC_10(VAR_11, VAR_13)) {
        return 0;
    }



    if (!VAR_0) {
        FUNC_8(VAR_8, VAR_14);
        VAR_8[0] = 1;
    } else if (!FUNC_6(VAR_8, VAR_7->n, VAR_14)) {
        return 0;
    }



    FUNC_13(VAR_5, VAR_5, VAR_8, VAR_7->n, VAR_14);
    FUNC_12(VAR_5, VAR_5, VAR_7->n, VAR_14);
    FUNC_13(VAR_5, VAR_5, VAR_8, VAR_7->n, VAR_14);


    FUNC_14(VAR_6, VAR_7->num_bytes, VAR_11);





    FUNC_7(VAR_8, VAR_2, FUNC_0(VAR_7->num_n_bits));


    VAR_9[VAR_14 - 1] = 0;
    FUNC_16(VAR_9, VAR_11, VAR_13);
    FUNC_13(VAR_9, VAR_8, VAR_9, VAR_7->n, VAR_14);

    FUNC_4(VAR_8, VAR_3, VAR_4, VAR_7);
    FUNC_11(VAR_9, VAR_8, VAR_9, VAR_7->n, VAR_14);
    FUNC_13(VAR_9, VAR_9, VAR_5, VAR_7->n, VAR_14);
    if (FUNC_15(VAR_9, VAR_14) > (bitcount_t)VAR_7->num_bytes * 8) {
        return 0;
    }



    FUNC_14(VAR_6 + VAR_7->num_bytes, VAR_7->num_bytes, VAR_9);

    return 1;
}
