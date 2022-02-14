
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct md5_hmac_ctx {unsigned int keylen; int key; } ;
struct deu_hash_t {int KIDX; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 struct md5_hmac_ctx* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_3, const u8 *VAR_4, unsigned int VAR_5)
{
    struct md5_hmac_ctx *VAR_6 = FUNC_0(VAR_3);
    volatile struct deu_hash_t *VAR_7 = (struct deu_hash_t *) VAR_1;


    if (VAR_5 > VAR_2) {
 FUNC_2("Key length more than what DEU hash can handle\n");
 return -VAR_0;
    }


    VAR_7->KIDX |= 0x80000000;
    FUNC_1(&VAR_6->key, VAR_4, VAR_5);
    VAR_6->keylen = VAR_5;

    return 0;

}
