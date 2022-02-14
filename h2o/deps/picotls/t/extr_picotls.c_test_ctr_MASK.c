
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zeroes ;
typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* aead; } ;
typedef TYPE_2__ ptls_cipher_suite_t ;
typedef int ptls_cipher_context_t ;
struct TYPE_8__ {size_t key_size; size_t iv_size; } ;
typedef TYPE_3__ ptls_cipher_algorithm_t ;
struct TYPE_6__ {TYPE_3__* ctr_cipher; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void const*) ;
 int * FUNC_6 (TYPE_3__*,int,int const*) ;

__attribute__((used)) static void FUNC_7(ptls_cipher_suite_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4,
                     const void *VAR_5, size_t VAR_6)
{
    static const uint8_t VAR_7[64] = {0};

    if (VAR_0 == ((void*)0))
        return;

    ptls_cipher_algorithm_t *VAR_8 = VAR_0->aead->ctr_cipher;
    uint8_t VAR_9[sizeof(VAR_7)];

    FUNC_0(VAR_6 <= sizeof(VAR_7));
    FUNC_2(VAR_8->key_size == VAR_2);
    FUNC_2(VAR_8->iv_size == VAR_4);

    ptls_cipher_context_t *VAR_10 = FUNC_6(VAR_8, 1, VAR_1);
    FUNC_0(VAR_10 != ((void*)0));
    FUNC_5(VAR_10, VAR_3);
    FUNC_3(VAR_10, VAR_9, VAR_7, VAR_6);
    FUNC_4(VAR_10);

    FUNC_2(FUNC_1(VAR_9, VAR_5, VAR_6) == 0);
}
