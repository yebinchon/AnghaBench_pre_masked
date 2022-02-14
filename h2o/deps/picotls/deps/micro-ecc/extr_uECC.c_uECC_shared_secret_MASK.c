
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wordcount_t ;
typedef int const uint8_t ;
typedef size_t uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_6__ {int num_words; int num_bytes; scalar_t__ num_n_bits; int p; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t*,TYPE_1__*) ;
 int FUNC_2 (size_t*,size_t*,size_t*,size_t*,scalar_t__,TYPE_1__*) ;
 int FUNC_3 (int const*,int const*,int) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_4 (size_t*,size_t*,size_t*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 (size_t*,int ,int) ;
 int FUNC_6 (size_t*,int const*,int) ;
 int FUNC_7 (int const*,int,size_t*) ;

int FUNC_8(const uint8_t *VAR_2,
                       const uint8_t *VAR_3,
                       uint8_t *VAR_4,
                       uECC_Curve VAR_5) {
    uECC_word_t VAR_6[VAR_1 * 2];
    uECC_word_t VAR_7[VAR_1];

    uECC_word_t VAR_8[VAR_1];
    uECC_word_t *VAR_9[2] = {VAR_7, VAR_8};
    uECC_word_t *VAR_10 = 0;
    uECC_word_t VAR_11;
    wordcount_t VAR_12 = VAR_5->num_words;
    wordcount_t VAR_13 = VAR_5->num_bytes;





    FUNC_6(VAR_7, VAR_3, FUNC_0(VAR_5->num_n_bits));
    FUNC_6(VAR_6, VAR_2, VAR_13);
    FUNC_6(VAR_6 + VAR_12, VAR_2 + VAR_13, VAR_13);




    VAR_11 = FUNC_4(VAR_7, VAR_7, VAR_8, VAR_5);



    if (VAR_0) {
        if (!FUNC_5(VAR_9[VAR_11], VAR_5->p, VAR_12)) {
            return 0;
        }
        VAR_10 = VAR_9[VAR_11];
    }

    FUNC_2(VAR_6, VAR_6, VAR_9[!VAR_11], VAR_10, VAR_5->num_n_bits + 1, VAR_5);



    FUNC_7(VAR_4, VAR_13, VAR_6);

    return !FUNC_1(VAR_6, VAR_5);
}
