
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wordcount_t ;
typedef int const uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
typedef int bitcount_t ;
struct TYPE_3__ {int num_n_bits; int n; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,int const*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int const*,int) ;

__attribute__((used)) static uECC_word_t FUNC_3(const uECC_word_t * const VAR_1,
                                uECC_word_t *VAR_2,
                                uECC_word_t *VAR_3,
                                uECC_Curve VAR_4) {
    wordcount_t VAR_5 = FUNC_0(VAR_4->num_n_bits);
    bitcount_t VAR_6 = VAR_4->num_n_bits;
    uECC_word_t VAR_7 = FUNC_1(VAR_2, VAR_1, VAR_4->n, VAR_5) ||
        (VAR_6 < ((bitcount_t)VAR_5 * VAR_0 * 8) &&
         FUNC_2(VAR_2, VAR_6));
    FUNC_1(VAR_3, VAR_2, VAR_4->n, VAR_5);
    return VAR_7;
}
