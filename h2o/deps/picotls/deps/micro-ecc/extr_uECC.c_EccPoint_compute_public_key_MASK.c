
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_6__ {scalar_t__ num_n_bits; int G; } ;


 scalar_t__ FUNC_0 (int*,TYPE_1__*) ;
 int FUNC_1 (int*,int ,int*,int ,scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int*,int*,int*,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static uECC_word_t FUNC_3(uECC_word_t *VAR_1,
                                               uECC_word_t *VAR_2,
                                               uECC_Curve VAR_3) {
    uECC_word_t VAR_4[VAR_0];
    uECC_word_t VAR_5[VAR_0];
    uECC_word_t *VAR_6[2] = {VAR_4, VAR_5};
    uECC_word_t VAR_7;



    VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_3);

    FUNC_1(VAR_1, VAR_3->G, VAR_6[!VAR_7], 0, VAR_3->num_n_bits + 1, VAR_3);

    if (FUNC_0(VAR_1, VAR_3)) {
        return 0;
    }
    return 1;
}
