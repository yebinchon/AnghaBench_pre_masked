
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_4__ {int num_bytes; int num_words; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int const*,int) ;

int FUNC_2(const uint8_t *VAR_1, uECC_Curve VAR_2) {



    uECC_word_t VAR_3[VAR_0 * 2];



    FUNC_1(VAR_3, VAR_1, VAR_2->num_bytes);
    FUNC_1(
        VAR_3 + VAR_2->num_words, VAR_1 + VAR_2->num_bytes, VAR_2->num_bytes);

    return FUNC_0(VAR_3, VAR_2);
}
