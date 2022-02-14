
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uECC_word_t ;
typedef int uECC_dword_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uECC_word_t VAR_1,
                   uECC_word_t VAR_2,
                   uECC_word_t *VAR_3,
                   uECC_word_t *VAR_4,
                   uECC_word_t *VAR_5) {
    uECC_dword_t VAR_6 = (uECC_dword_t)VAR_1 * VAR_2;
    uECC_dword_t VAR_7 = ((uECC_dword_t)(*VAR_4) << VAR_0) | *VAR_3;
    VAR_7 += VAR_6;
    *VAR_5 += (VAR_7 < VAR_6);
    *VAR_4 = VAR_7 >> VAR_0;
    *VAR_3 = (uECC_word_t)VAR_7;

}
