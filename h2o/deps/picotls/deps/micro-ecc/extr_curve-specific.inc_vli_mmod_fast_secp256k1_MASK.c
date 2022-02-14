
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uECC_word_t ;
struct TYPE_2__ {int p; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_5(uECC_word_t *VAR_2, uECC_word_t *VAR_3) {
    uECC_word_t VAR_4[2 * VAR_1];
    uECC_word_t VAR_5;

    FUNC_2(VAR_4, VAR_1);
    FUNC_2(VAR_4 + VAR_1, VAR_1);

    FUNC_0(VAR_4, VAR_3 + VAR_1);

    VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);
    FUNC_2(VAR_3, VAR_1);
    FUNC_0(VAR_3, VAR_4 + VAR_1);
    VAR_5 += FUNC_1(VAR_2, VAR_2, VAR_3, VAR_1);

    while (VAR_5 > 0) {
        --VAR_5;
        FUNC_4(VAR_2, VAR_2, VAR_0, VAR_1);
    }
    if (FUNC_3(VAR_2, VAR_0, VAR_1) > 0) {
        FUNC_4(VAR_2, VAR_2, VAR_0, VAR_1);
    }
}
