
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash; int aead; } ;
typedef TYPE_1__ ptls_cipher_suite_t ;
typedef int ptls_aead_context_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*,size_t) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int *,char*,char*,size_t,int,char const*,size_t) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,char const*,size_t) ;
 size_t FUNC_6 (int *,char*,char const*,size_t) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ,int,char const*,int *) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static void FUNC_10(ptls_cipher_suite_t *VAR_1, ptls_cipher_suite_t *VAR_2)
{
    const char *VAR_3 = "012345678901234567890123456789012345678901234567", *VAR_4 = "hello world", *VAR_5 = "my true aad";
    ptls_aead_context_t *VAR_6;
    char VAR_7[256], VAR_8[256];
    size_t VAR_9, VAR_10;


    VAR_6 = FUNC_8(VAR_1->aead, VAR_1->hash, 1, VAR_3, ((void*)0));
    FUNC_0(VAR_6 != ((void*)0));
    FUNC_5(VAR_6, 123, VAR_5, FUNC_9(VAR_5));
    VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_4, FUNC_9(VAR_4));
    VAR_9 += FUNC_4(VAR_6, VAR_7 + VAR_9);
    FUNC_7(VAR_6);


    VAR_6 = FUNC_8(VAR_2->aead, VAR_2->hash, 0, VAR_3, ((void*)0));
    FUNC_0(VAR_6 != ((void*)0));
    VAR_10 = FUNC_3(VAR_6, VAR_8, VAR_7, VAR_9, 123, VAR_5, FUNC_9(VAR_5));
    FUNC_2(VAR_10 == FUNC_9(VAR_4));
    FUNC_2(FUNC_1(VAR_4, VAR_8, VAR_10) == 0);
    VAR_10 = FUNC_3(VAR_6, VAR_8, VAR_7, VAR_9, 123, "my fake aad", FUNC_9(VAR_5));
    FUNC_2(VAR_10 == VAR_0);
    FUNC_7(VAR_6);
}
