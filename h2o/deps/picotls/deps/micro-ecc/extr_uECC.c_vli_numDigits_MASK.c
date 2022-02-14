
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wordcount_t ;
typedef scalar_t__ uECC_word_t ;



__attribute__((used)) static wordcount_t FUNC_0(const uECC_word_t *VAR_0, const wordcount_t VAR_1) {
    wordcount_t VAR_2;


    for (VAR_2 = VAR_1 - 1; VAR_2 >= 0 && VAR_0[VAR_2] == 0; --VAR_2) {
    }

    return (VAR_2 + 1);
}
