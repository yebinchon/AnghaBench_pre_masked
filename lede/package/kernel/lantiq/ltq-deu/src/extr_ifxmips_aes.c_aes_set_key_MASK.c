
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int crt_flags; } ;
struct aes_ctx {unsigned int key_length; scalar_t__ buf; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,char*,struct aes_ctx*,unsigned int,unsigned int) ;
 int VAR_1 ;
 struct aes_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *,int const*,unsigned int) ;

int FUNC_3 (struct crypto_tfm *VAR_2, const u8 *VAR_3, unsigned int VAR_4)
{
    struct aes_ctx *VAR_5 = FUNC_1(VAR_2);
    unsigned long *VAR_6 = (unsigned long *) &VAR_2->crt_flags;





    if (VAR_4 != 16 && VAR_4 != 24 && VAR_4 != 32) {
        *VAR_6 |= VAR_0;
        return -VAR_1;
    }

    VAR_5->key_length = VAR_4;
    FUNC_0(0, "ctx @%p, key_len %d, ctx->key_length %d\n", VAR_5, VAR_4, VAR_5->key_length);
    FUNC_2 ((u8 *) (VAR_5->buf), VAR_3, VAR_4);

    return 0;
}
