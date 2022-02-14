
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int wordcount_t ;
typedef int uint8_t ;
typedef size_t uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
typedef scalar_t__ bitcount_t ;
struct TYPE_8__ {int num_words; int num_bytes; size_t const* G; int n; int p; int (* double_jacobian ) (size_t*,size_t*,size_t*,TYPE_1__*) ;int num_n_bits; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t*,size_t*,size_t*,size_t*,TYPE_1__*) ;
 int FUNC_2 (size_t*,size_t*,size_t*,TYPE_1__*) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (size_t*,int const*,unsigned int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (size_t*,size_t*,size_t*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_7 (size_t*,int const*,int) ;
 int FUNC_8 (size_t*,int) ;
 int FUNC_9 (int ,size_t*,int) ;
 scalar_t__ FUNC_10 (size_t*,size_t*,int) ;
 scalar_t__ FUNC_11 (size_t*,int) ;
 int FUNC_12 (size_t*,size_t*,int ,int) ;
 int FUNC_13 (size_t*,size_t*,size_t*,int ,int) ;
 int FUNC_14 (size_t*,size_t*,size_t*,TYPE_1__*) ;
 int FUNC_15 (size_t*,size_t*,size_t*,int ,int) ;
 int FUNC_16 (size_t*,int) ;
 int FUNC_17 (size_t*,size_t const*,int) ;
 int FUNC_18 (size_t*,size_t*,int ,int) ;
 int FUNC_19 (size_t*,scalar_t__) ;

int FUNC_20(const uint8_t *VAR_1,
                const uint8_t *VAR_2,
                unsigned VAR_3,
                const uint8_t *VAR_4,
                uECC_Curve VAR_5) {
    uECC_word_t VAR_6[VAR_0], VAR_7[VAR_0];
    uECC_word_t VAR_8[VAR_0];
    uECC_word_t VAR_9[VAR_0 * 2];
    uECC_word_t VAR_10[VAR_0];
    uECC_word_t VAR_11[VAR_0];
    uECC_word_t VAR_12[VAR_0];
    uECC_word_t VAR_13[VAR_0];
    uECC_word_t VAR_14[VAR_0];
    const uECC_word_t *VAR_15[4];
    const uECC_word_t *VAR_16;
    bitcount_t VAR_17;
    bitcount_t VAR_18;



    uECC_word_t VAR_19[VAR_0 * 2];

    uECC_word_t VAR_20[VAR_0], VAR_21[VAR_0];
    wordcount_t VAR_22 = VAR_5->num_words;
    wordcount_t VAR_23 = FUNC_0(VAR_5->num_n_bits);

    VAR_10[VAR_23 - 1] = 0;
    VAR_20[VAR_23 - 1] = 0;
    VAR_21[VAR_23 - 1] = 0;





    FUNC_7(VAR_19, VAR_1, VAR_5->num_bytes);
    FUNC_7(
        VAR_19 + VAR_22, VAR_1 + VAR_5->num_bytes, VAR_5->num_bytes);
    FUNC_7(VAR_20, VAR_4, VAR_5->num_bytes);
    FUNC_7(VAR_21, VAR_4 + VAR_5->num_bytes, VAR_5->num_bytes);



    if (FUNC_11(VAR_20, VAR_22) || FUNC_11(VAR_21, VAR_22)) {
        return 0;
    }


    if (FUNC_9(VAR_5->n, VAR_20, VAR_23) != 1 ||
            FUNC_9(VAR_5->n, VAR_21, VAR_23) != 1) {
        return 0;
    }


    FUNC_12(VAR_8, VAR_21, VAR_5->n, VAR_23);
    VAR_6[VAR_23 - 1] = 0;
    FUNC_4(VAR_6, VAR_2, VAR_3, VAR_5);
    FUNC_13(VAR_6, VAR_6, VAR_8, VAR_5->n, VAR_23);
    FUNC_13(VAR_7, VAR_20, VAR_8, VAR_5->n, VAR_23);


    FUNC_17(VAR_9, VAR_19, VAR_22);
    FUNC_17(VAR_9 + VAR_22, VAR_19 + VAR_22, VAR_22);
    FUNC_17(VAR_12, VAR_5->G, VAR_22);
    FUNC_17(VAR_13, VAR_5->G + VAR_22, VAR_22);
    FUNC_15(VAR_8, VAR_9, VAR_12, VAR_5->p, VAR_22);
    FUNC_1(VAR_12, VAR_13, VAR_9, VAR_9 + VAR_22, VAR_5);
    FUNC_12(VAR_8, VAR_8, VAR_5->p, VAR_22);
    FUNC_2(VAR_9, VAR_9 + VAR_22, VAR_8, VAR_5);


    VAR_15[0] = 0;
    VAR_15[1] = VAR_5->G;
    VAR_15[2] = VAR_19;
    VAR_15[3] = VAR_9;
    VAR_17 = FUNC_5(FUNC_16(VAR_6, VAR_23),
                    FUNC_16(VAR_7, VAR_23));

    VAR_16 = VAR_15[(!!FUNC_19(VAR_6, VAR_17 - 1)) |
                   ((!!FUNC_19(VAR_7, VAR_17 - 1)) << 1)];
    FUNC_17(VAR_10, VAR_16, VAR_22);
    FUNC_17(VAR_11, VAR_16 + VAR_22, VAR_22);
    FUNC_8(VAR_8, VAR_22);
    VAR_8[0] = 1;

    for (VAR_18 = VAR_17 - 2; VAR_18 >= 0; --VAR_18) {
        uECC_word_t VAR_24;
        VAR_5->double_jacobian(VAR_10, VAR_11, VAR_8, VAR_5);

        VAR_24 = (!!FUNC_19(VAR_6, VAR_18)) | ((!!FUNC_19(VAR_7, VAR_18)) << 1);
        VAR_16 = VAR_15[VAR_24];
        if (VAR_16) {
            FUNC_17(VAR_12, VAR_16, VAR_22);
            FUNC_17(VAR_13, VAR_16 + VAR_22, VAR_22);
            FUNC_2(VAR_12, VAR_13, VAR_8, VAR_5);
            FUNC_15(VAR_14, VAR_10, VAR_12, VAR_5->p, VAR_22);
            FUNC_1(VAR_12, VAR_13, VAR_10, VAR_11, VAR_5);
            FUNC_14(VAR_8, VAR_8, VAR_14, VAR_5);
        }
    }

    FUNC_12(VAR_8, VAR_8, VAR_5->p, VAR_22);
    FUNC_2(VAR_10, VAR_11, VAR_8, VAR_5);


    if (FUNC_9(VAR_5->n, VAR_10, VAR_23) != 1) {
        FUNC_18(VAR_10, VAR_10, VAR_5->n, VAR_23);
    }


    return (int)(FUNC_10(VAR_10, VAR_20, VAR_22));
}
