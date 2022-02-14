
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_5__ {int num_words; int num_bytes; int p; int (* mod_sqrt ) (int*,TYPE_1__*) ;int (* x_side ) (int*,int*,TYPE_1__*) ;} ;


 int FUNC_0 (int*,int const*,int ) ;
 int FUNC_1 (int*,int*,TYPE_1__*) ;
 int FUNC_2 (int*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int*,int const*,int ) ;
 int FUNC_4 (int*,int ,int*) ;
 int FUNC_5 (int*,int ,int*,int) ;

void FUNC_6(const uint8_t *VAR_1, uint8_t *VAR_2, uECC_Curve VAR_3) {



    uECC_word_t VAR_4[VAR_0 * 2];

    uECC_word_t *VAR_5 = VAR_4 + VAR_3->num_words;



    FUNC_3(VAR_4, VAR_1 + 1, VAR_3->num_bytes);

    VAR_3->x_side(VAR_5, VAR_4, VAR_3);
    VAR_3->mod_sqrt(VAR_5, VAR_3);

    if ((VAR_5[0] & 0x01) != (VAR_1[0] & 0x01)) {
        FUNC_5(VAR_5, VAR_3->p, VAR_5, VAR_3->num_words);
    }


    FUNC_4(VAR_2, VAR_3->num_bytes, VAR_4);
    FUNC_4(VAR_2 + VAR_3->num_bytes, VAR_3->num_bytes, VAR_5);

}
