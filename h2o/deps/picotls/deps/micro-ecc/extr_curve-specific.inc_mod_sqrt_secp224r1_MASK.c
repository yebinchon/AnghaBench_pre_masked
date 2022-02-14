
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uECC_word_t ;
typedef int uECC_Curve ;
typedef int bitcount_t ;
struct TYPE_3__ {int p; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static void FUNC_6(uECC_word_t *VAR_2, uECC_Curve VAR_3) {
    bitcount_t VAR_4;
    uECC_word_t VAR_5[VAR_1];
    uECC_word_t VAR_6[VAR_1];
    uECC_word_t VAR_7[VAR_1];
    uECC_word_t VAR_8[VAR_1];
    uECC_word_t VAR_9[VAR_1];
    uECC_word_t VAR_10[VAR_1];


    FUNC_0(VAR_7, VAR_8, VAR_9, VAR_2, VAR_2);
    FUNC_1(VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    for (VAR_4 = 1; VAR_4 <= 95; VAR_4++) {
        FUNC_5(VAR_7, VAR_10, VAR_1);
        FUNC_5(VAR_8, VAR_5, VAR_1);
        FUNC_5(VAR_9, VAR_6, VAR_1);
        FUNC_1(VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        if (FUNC_2(VAR_10, VAR_1)) {
                break;
        }
    }
    FUNC_3(VAR_6, VAR_8, VAR_0, VAR_1);
    FUNC_4(VAR_2, VAR_7, VAR_6, &VAR_0);
}
