
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wordcount_t ;
typedef scalar_t__ uECC_word_t ;
typedef int cmpresult_t ;



__attribute__((used)) static cmpresult_t FUNC_0(const uECC_word_t *VAR_0,
                                       const uECC_word_t *VAR_1,
                                       wordcount_t VAR_2) {
    wordcount_t VAR_3;
    for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; --VAR_3) {
        if (VAR_0[VAR_3] > VAR_1[VAR_3]) {
            return 1;
        } else if (VAR_0[VAR_3] < VAR_1[VAR_3]) {
            return -1;
        }
    }
    return 0;
}
