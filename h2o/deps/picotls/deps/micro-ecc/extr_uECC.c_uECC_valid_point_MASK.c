
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wordcount_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_6__ {int num_words; int (* x_side ) (int *,int const*,TYPE_1__*) ;int p; } ;


 scalar_t__ FUNC_0 (int const*,TYPE_1__*) ;
 int FUNC_1 (int *,int const*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int const*,int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int const*,TYPE_1__*) ;

int FUNC_5(const uECC_word_t *VAR_1, uECC_Curve VAR_2) {
    uECC_word_t VAR_3[VAR_0];
    uECC_word_t VAR_4[VAR_0];
    wordcount_t VAR_5 = VAR_2->num_words;


    if (FUNC_0(VAR_1, VAR_2)) {
        return 0;
    }


    if (FUNC_2(VAR_2->p, VAR_1, VAR_5) != 1 ||
            FUNC_2(VAR_2->p, VAR_1 + VAR_5, VAR_5) != 1) {
        return 0;
    }

    FUNC_4(VAR_3, VAR_1 + VAR_5, VAR_2);
    VAR_2->x_side(VAR_4, VAR_1, VAR_2);


    return (int)(FUNC_3(VAR_3, VAR_4, VAR_5));
}
