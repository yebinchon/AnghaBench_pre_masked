
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct cc_hash_ctx {int inter_digestsize; int hash_len; } ;
struct ahash_request {int dummy; } ;
struct ahash_req_ctx {int* digest_buff; int* digest_bytes_len; } ;


 int VAR_0 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int* FUNC_1 (struct ahash_req_ctx*) ;
 int* FUNC_2 (struct ahash_req_ctx*) ;
 struct cc_hash_ctx* FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (void*,int const*,int) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_1, void *VAR_2)
{
 struct crypto_ahash *VAR_3 = FUNC_4(VAR_1);
 struct cc_hash_ctx *VAR_4 = FUNC_3(VAR_3);
 struct ahash_req_ctx *VAR_5 = FUNC_0(VAR_1);
 u8 *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = *FUNC_2(VAR_5);
 const u32 VAR_8 = VAR_0;

 FUNC_5(VAR_2, &VAR_8, sizeof(u32));
 VAR_2 += sizeof(u32);

 FUNC_5(VAR_2, VAR_5->digest_buff, VAR_4->inter_digestsize);
 VAR_2 += VAR_4->inter_digestsize;

 FUNC_5(VAR_2, VAR_5->digest_bytes_len, VAR_4->hash_len);
 VAR_2 += VAR_4->hash_len;

 FUNC_5(VAR_2, &VAR_7, sizeof(u32));
 VAR_2 += sizeof(u32);

 FUNC_5(VAR_2, VAR_6, VAR_7);

 return 0;
}
