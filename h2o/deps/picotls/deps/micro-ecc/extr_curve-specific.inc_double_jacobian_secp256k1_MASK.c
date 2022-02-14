
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_5__ {int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int ,int) ;
 scalar_t__ FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int*,int*,int ,int) ;
 int FUNC_3 (int*,int*,int*,TYPE_1__*) ;
 int FUNC_4 (int*,int*,TYPE_1__*) ;
 int FUNC_5 (int*,int*,int*,int ,int) ;
 int FUNC_6 (int*,int) ;
 scalar_t__ FUNC_7 (int*,int ) ;

__attribute__((used)) static void FUNC_8(uECC_word_t * VAR_2,
                                      uECC_word_t * VAR_3,
                                      uECC_word_t * VAR_4,
                                      uECC_Curve VAR_5) {

    uECC_word_t VAR_6[VAR_0];
    uECC_word_t VAR_7[VAR_0];

    if (FUNC_1(VAR_4, VAR_0)) {
        return;
    }

    FUNC_4(VAR_7, VAR_3, VAR_5);
    FUNC_3(VAR_6, VAR_2, VAR_7, VAR_5);
    FUNC_4(VAR_2, VAR_2, VAR_5);
    FUNC_4(VAR_7, VAR_7, VAR_5);
    FUNC_3(VAR_4, VAR_3, VAR_4, VAR_5);

    FUNC_2(VAR_3, VAR_2, VAR_2, VAR_5->p, VAR_0);
    FUNC_2(VAR_3, VAR_3, VAR_2, VAR_5->p, VAR_0);
    if (FUNC_7(VAR_3, 0)) {
        uECC_word_t VAR_8 = FUNC_0(VAR_3, VAR_3, VAR_5->p, VAR_0);
        FUNC_6(VAR_3, VAR_0);
        VAR_3[VAR_0 - 1] |= VAR_8 << (VAR_1 - 1);
    } else {
        FUNC_6(VAR_3, VAR_0);
    }


    FUNC_4(VAR_2, VAR_3, VAR_5);
    FUNC_5(VAR_2, VAR_2, VAR_6, VAR_5->p, VAR_0);
    FUNC_5(VAR_2, VAR_2, VAR_6, VAR_5->p, VAR_0);

    FUNC_5(VAR_6, VAR_6, VAR_2, VAR_5->p, VAR_0);
    FUNC_3(VAR_3, VAR_3, VAR_6, VAR_5);
    FUNC_5(VAR_3, VAR_3, VAR_7, VAR_5->p, VAR_0);
}
