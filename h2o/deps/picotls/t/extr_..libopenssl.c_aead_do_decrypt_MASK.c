
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


 int FUNC_0 (int ,int ,int,void*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (int ,int *,int *,int *,void const*) ;
 int FUNC_3 (int ,int *,int*,void const*,int) ;
 size_t VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static size_t FUNC_5(ptls_aead_context_t *VAR_2, void *VAR_3, const void *VAR_4, size_t VAR_5, const void *VAR_6,
                              const void *VAR_7, size_t VAR_8)
{
    struct aead_crypto_context_t *VAR_9 = (struct aead_crypto_context_t *)VAR_2;
    uint8_t *VAR_10 = VAR_3;
    size_t VAR_11 = 0, VAR_12 = VAR_9->super.algo->tag_size;
    int VAR_13, VAR_14;

    if (VAR_5 < VAR_12)
        return VAR_1;

    VAR_14 = FUNC_2(VAR_9->evp_ctx, ((void*)0), ((void*)0), ((void*)0), VAR_6);
    FUNC_4(VAR_14);
    if (VAR_8 != 0) {
        VAR_14 = FUNC_3(VAR_9->evp_ctx, ((void*)0), &VAR_13, VAR_7, (int)VAR_8);
        FUNC_4(VAR_14);
    }
    VAR_14 = FUNC_3(VAR_9->evp_ctx, VAR_10 + VAR_11, &VAR_13, VAR_4, (int)(VAR_5 - VAR_12));
    FUNC_4(VAR_14);
    VAR_11 += VAR_13;
    if (!FUNC_0(VAR_9->evp_ctx, VAR_0, (int)VAR_12, (void *)((uint8_t *)VAR_4 + VAR_5 - VAR_12)))
        return VAR_1;
    if (!FUNC_1(VAR_9->evp_ctx, VAR_10 + VAR_11, &VAR_13))
        return VAR_1;
    VAR_11 += VAR_13;

    return VAR_11;
}
