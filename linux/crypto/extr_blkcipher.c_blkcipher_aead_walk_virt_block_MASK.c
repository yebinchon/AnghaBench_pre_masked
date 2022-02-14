
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct blkcipher_walk {unsigned int walk_blocksize; int alignmask; int ivsize; int cipher_blocksize; int flags; } ;
struct blkcipher_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*) ;

int FUNC_4(struct blkcipher_desc *VAR_1,
       struct blkcipher_walk *VAR_2,
       struct crypto_aead *VAR_3,
       unsigned int VAR_4)
{
 VAR_2->flags &= ~VAR_0;
 VAR_2->walk_blocksize = VAR_4;
 VAR_2->cipher_blocksize = FUNC_2(VAR_3);
 VAR_2->ivsize = FUNC_3(VAR_3);
 VAR_2->alignmask = FUNC_1(VAR_3);
 return FUNC_0(VAR_1, VAR_2);
}
