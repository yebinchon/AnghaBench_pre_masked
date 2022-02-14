
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_1__* algo; } ;
struct aead_crypto_context_t {int evp_ctx; TYPE_2__ super; } ;
typedef int ptls_aead_context_t ;
struct TYPE_3__ {size_t tag_size; } ;


 int FUNC_0 (int ,int ,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static size_t FUNC_3(ptls_aead_context_t *VAR_1, void *VAR_2)
{
    struct aead_crypto_context_t *VAR_3 = (struct aead_crypto_context_t *)VAR_1;
    uint8_t *VAR_4 = VAR_2;
    size_t VAR_5 = 0, VAR_6 = VAR_3->super.algo->tag_size;
    int VAR_7, VAR_8;

    VAR_8 = FUNC_1(VAR_3->evp_ctx, VAR_4 + VAR_5, &VAR_7);
    FUNC_2(VAR_8);
    VAR_5 += VAR_7;
    VAR_8 = FUNC_0(VAR_3->evp_ctx, VAR_0, (int)VAR_6, VAR_4 + VAR_5);
    FUNC_2(VAR_8);
    VAR_5 += VAR_6;

    return VAR_5;
}
