
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uECC_word_t ;
struct TYPE_2__ {int p; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int*,int*,int) ;
 int FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int*,int ,int) ;

__attribute__((used)) static void FUNC_5(uECC_word_t *VAR_2, uECC_word_t *VAR_3) {
    uECC_word_t VAR_4[2 * VAR_1];
    uECC_word_t VAR_5;

    FUNC_2(VAR_4, VAR_1);
    FUNC_2(VAR_4 + VAR_1, VAR_1);

    FUNC_0(VAR_4, VAR_3 + VAR_1 - 1);

    VAR_3[VAR_1 - 1] &= 0xffffffff;
    VAR_5 = VAR_4[VAR_1 - 1];
    VAR_4[VAR_1 - 1] &= 0xffffffff;
    FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);
    FUNC_2(VAR_3, VAR_1);
    VAR_4[VAR_1 - 1] = VAR_5;
    FUNC_0(VAR_3, VAR_4 + VAR_1 - 1);
    FUNC_1(VAR_2, VAR_2, VAR_3, VAR_1);

    while (FUNC_3(VAR_2, VAR_0, VAR_1) > 0) {
        FUNC_4(VAR_2, VAR_2, VAR_0, VAR_1);
    }
}
