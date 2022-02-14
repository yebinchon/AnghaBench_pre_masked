
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wordcount_t ;
typedef int uECC_word_t ;
typedef TYPE_1__* uECC_Curve ;
struct TYPE_5__ {int p; int num_words; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int *,int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(uECC_word_t * VAR_1,
                      uECC_word_t * VAR_2,
                      uECC_word_t * VAR_3,
                      uECC_word_t * VAR_4,
                      uECC_Curve VAR_5) {

    uECC_word_t VAR_6[VAR_0];
    uECC_word_t VAR_7[VAR_0];
    uECC_word_t VAR_8[VAR_0];
    wordcount_t VAR_9 = VAR_5->num_words;

    FUNC_3(VAR_6, VAR_3, VAR_1, VAR_5->p, VAR_9);
    FUNC_2(VAR_6, VAR_6, VAR_5);
    FUNC_1(VAR_1, VAR_1, VAR_6, VAR_5);
    FUNC_1(VAR_3, VAR_3, VAR_6, VAR_5);
    FUNC_0(VAR_6, VAR_4, VAR_2, VAR_5->p, VAR_9);
    FUNC_3(VAR_4, VAR_4, VAR_2, VAR_5->p, VAR_9);

    FUNC_3(VAR_7, VAR_3, VAR_1, VAR_5->p, VAR_9);
    FUNC_1(VAR_2, VAR_2, VAR_7, VAR_5);
    FUNC_0(VAR_7, VAR_1, VAR_3, VAR_5->p, VAR_9);
    FUNC_2(VAR_3, VAR_4, VAR_5);
    FUNC_3(VAR_3, VAR_3, VAR_7, VAR_5->p, VAR_9);

    FUNC_3(VAR_8, VAR_1, VAR_3, VAR_5->p, VAR_9);
    FUNC_1(VAR_4, VAR_4, VAR_8, VAR_5);
    FUNC_3(VAR_4, VAR_4, VAR_2, VAR_5->p, VAR_9);

    FUNC_2(VAR_8, VAR_6, VAR_5);
    FUNC_3(VAR_8, VAR_8, VAR_7, VAR_5->p, VAR_9);
    FUNC_3(VAR_7, VAR_8, VAR_1, VAR_5->p, VAR_9);
    FUNC_1(VAR_7, VAR_7, VAR_6, VAR_5);
    FUNC_3(VAR_2, VAR_7, VAR_2, VAR_5->p, VAR_9);

    FUNC_4(VAR_1, VAR_8, VAR_9);
}
