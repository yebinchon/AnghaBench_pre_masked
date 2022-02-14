
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int wordcount_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
typedef scalar_t__ bitcount_t ;
struct TYPE_8__ {int num_words; int p; } ;


 int FUNC_0 (int*,int*,int*,int*,TYPE_1__*) ;
 int FUNC_1 (int*,int*,int*,int*,TYPE_1__*) ;
 int FUNC_2 (int*,int*,int*,int*,int const*,TYPE_1__*) ;
 int FUNC_3 (int*,int*,int*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int*,int*,int ,int) ;
 int FUNC_5 (int*,int*,int const*,TYPE_1__*) ;
 int FUNC_6 (int*,int*,int*,int ,int) ;
 int FUNC_7 (int*,int const*,int) ;
 int FUNC_8 (int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(uECC_word_t * VAR_1,
                          const uECC_word_t * VAR_2,
                          const uECC_word_t * VAR_3,
                          const uECC_word_t * VAR_4,
                          bitcount_t VAR_5,
                          uECC_Curve VAR_6) {

    uECC_word_t VAR_7[2][VAR_0];
    uECC_word_t VAR_8[2][VAR_0];
    uECC_word_t VAR_9[VAR_0];
    bitcount_t VAR_10;
    uECC_word_t VAR_11;
    wordcount_t VAR_12 = VAR_6->num_words;

    FUNC_7(VAR_7[1], VAR_2, VAR_12);
    FUNC_7(VAR_8[1], VAR_2 + VAR_12, VAR_12);

    FUNC_2(VAR_7[1], VAR_8[1], VAR_7[0], VAR_8[0], VAR_4, VAR_6);

    for (VAR_10 = VAR_5 - 2; VAR_10 > 0; --VAR_10) {
        VAR_11 = !FUNC_8(VAR_3, VAR_10);
        FUNC_1(VAR_7[1 - VAR_11], VAR_8[1 - VAR_11], VAR_7[VAR_11], VAR_8[VAR_11], VAR_6);
        FUNC_0(VAR_7[VAR_11], VAR_8[VAR_11], VAR_7[1 - VAR_11], VAR_8[1 - VAR_11], VAR_6);
    }

    VAR_11 = !FUNC_8(VAR_3, 0);
    FUNC_1(VAR_7[1 - VAR_11], VAR_8[1 - VAR_11], VAR_7[VAR_11], VAR_8[VAR_11], VAR_6);


    FUNC_6(VAR_9, VAR_7[1], VAR_7[0], VAR_6->p, VAR_12);
    FUNC_5(VAR_9, VAR_9, VAR_8[1 - VAR_11], VAR_6);
    FUNC_5(VAR_9, VAR_9, VAR_2, VAR_6);
    FUNC_4(VAR_9, VAR_9, VAR_6->p, VAR_12);

    FUNC_5(VAR_9, VAR_9, VAR_2 + VAR_12, VAR_6);
    FUNC_5(VAR_9, VAR_9, VAR_7[1 - VAR_11], VAR_6);


    FUNC_0(VAR_7[VAR_11], VAR_8[VAR_11], VAR_7[1 - VAR_11], VAR_8[1 - VAR_11], VAR_6);
    FUNC_3(VAR_7[0], VAR_8[0], VAR_9, VAR_6);

    FUNC_7(VAR_1, VAR_7[0], VAR_12);
    FUNC_7(VAR_1 + VAR_12, VAR_8[0], VAR_12);
}
