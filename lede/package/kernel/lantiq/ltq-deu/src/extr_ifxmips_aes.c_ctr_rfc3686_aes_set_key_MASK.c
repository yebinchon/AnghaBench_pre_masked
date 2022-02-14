
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct crypto_tfm {int crt_flags; } ;
struct aes_ctx {unsigned int key_length; scalar_t__ buf; int * nonce; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;

int FUNC_2 (struct crypto_tfm *VAR_3, const uint8_t *VAR_4, unsigned int VAR_5)
{
    struct aes_ctx *VAR_6 = FUNC_0(VAR_3);
    unsigned long *VAR_7 = (unsigned long *)&VAR_3->crt_flags;



    FUNC_1(VAR_6->nonce, VAR_4 + (VAR_5 - VAR_1),
           VAR_1);

    VAR_5 -= VAR_1;

    if (VAR_5 != 16 && VAR_5 != 24 && VAR_5 != 32) {
        *VAR_7 |= VAR_0;
        return -VAR_2;
    }

    VAR_6->key_length = VAR_5;

    FUNC_1 ((u8 *) (VAR_6->buf), VAR_4, VAR_5);

    return 0;
}
