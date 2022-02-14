
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct crypto_tfm {int dummy; } ;
struct aes_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct aes_ctx*,int *,int const*,int *,int ,int ,int ) ;

void FUNC_2 (struct crypto_tfm *VAR_2, uint8_t *VAR_3, const uint8_t *VAR_4)
{
    struct aes_ctx *VAR_5 = FUNC_0(VAR_2);
    FUNC_1 (VAR_5, VAR_3, VAR_4, ((void*)0), VAR_0,
            VAR_1, 0);
}
