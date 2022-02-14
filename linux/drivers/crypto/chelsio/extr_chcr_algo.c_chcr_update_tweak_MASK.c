
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_aes_ctx {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct chcr_blkcipher_req_ctx {int last_req_len; int iv; } ;
struct ablkcipher_request {int dummy; } ;
struct ablk_ctx {int enckey_len; int * key; } ;
typedef int le128 ;
typedef int aes ;


 struct ablk_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 struct chcr_blkcipher_req_ctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct crypto_aes_ctx*,int *,int *) ;
 int FUNC_3 (struct crypto_aes_ctx*,int *,int *) ;
 int FUNC_4 (struct crypto_aes_ctx*,int *,unsigned int) ;
 int FUNC_5 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_6 (struct ablkcipher_request*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct crypto_aes_ctx*,int) ;

__attribute__((used)) static int FUNC_11(struct ablkcipher_request *VAR_1, u8 *VAR_2,
        u32 VAR_3)
{
 struct crypto_ablkcipher *VAR_4 = FUNC_6(VAR_1);
 struct ablk_ctx *VAR_5 = FUNC_0(FUNC_5(VAR_4));
 struct chcr_blkcipher_req_ctx *VAR_6 = FUNC_1(VAR_1);
 struct crypto_aes_ctx VAR_7;
 int VAR_8, VAR_9;
 u8 *VAR_10;
 unsigned int VAR_11;
 int VAR_12 = VAR_6->last_req_len / VAR_0;
 int VAR_13 = VAR_12 / 8;

 FUNC_9(VAR_2, VAR_6->iv, VAR_0);

 VAR_11 = VAR_5->enckey_len / 2;
 VAR_10 = VAR_5->key + VAR_11;
 VAR_8 = FUNC_4(&VAR_7, VAR_10, VAR_11);
 if (VAR_8)
  return VAR_8;
 FUNC_3(&VAR_7, VAR_2, VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
  FUNC_7((le128 *)VAR_2, (le128 *)VAR_2);

 for (VAR_9 = 0; VAR_9 < (VAR_12 % 8); VAR_9++)
  FUNC_8((le128 *)VAR_2, (le128 *)VAR_2);

 if (!VAR_3)
  FUNC_2(&VAR_7, VAR_2, VAR_2);

 FUNC_10(&VAR_7, sizeof(VAR_7));
 return 0;
}
