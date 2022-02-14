
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wordcount_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uECC_word_t ;


 int FUNC_0 (int,scalar_t__ const,scalar_t__*,scalar_t__*,scalar_t__*) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1(uint64_t * VAR_1, const uint64_t * VAR_2) {
    uECC_word_t VAR_3 = 0;
    uECC_word_t VAR_4 = 0;
    uECC_word_t VAR_5 = 0;
    wordcount_t VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        FUNC_0(0x1000003D1ull, VAR_2[VAR_6], &VAR_3, &VAR_4, &VAR_5);
        VAR_1[VAR_6] = VAR_3;
        VAR_3 = VAR_4;
        VAR_4 = VAR_5;
        VAR_5 = 0;
    }
    VAR_1[VAR_0] = VAR_3;
}
