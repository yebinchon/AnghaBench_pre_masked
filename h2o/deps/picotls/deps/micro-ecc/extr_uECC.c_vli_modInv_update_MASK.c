
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wordcount_t ;
typedef scalar_t__ uECC_word_t ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__ const*,int) ;
 int FUNC_2 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(uECC_word_t *VAR_1,
                              const uECC_word_t *VAR_2,
                              wordcount_t VAR_3) {
    uECC_word_t VAR_4 = 0;
    if (!FUNC_0(VAR_1)) {
        VAR_4 = FUNC_1(VAR_1, VAR_1, VAR_2, VAR_3);
    }
    FUNC_2(VAR_1, VAR_3);
    if (VAR_4) {
        VAR_1[VAR_3 - 1] |= VAR_0;
    }
}
