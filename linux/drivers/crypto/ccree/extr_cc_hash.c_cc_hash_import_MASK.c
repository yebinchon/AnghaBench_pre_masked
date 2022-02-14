
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cc_hash_ctx {int inter_digestsize; int hash_len; int drvdata; } ;
struct ahash_request {int dummy; } ;
struct ahash_req_ctx {int* digest_buff; int* digest_bytes_len; int* buf_cnt; int** buffers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 struct cc_hash_ctx* FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int*,void const*,int) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_3, const void *VAR_4)
{
 struct crypto_ahash *VAR_5 = FUNC_3(VAR_3);
 struct cc_hash_ctx *VAR_6 = FUNC_2(VAR_5);
 struct device *VAR_7 = FUNC_4(VAR_6->drvdata);
 struct ahash_req_ctx *VAR_8 = FUNC_0(VAR_3);
 u32 VAR_9;

 FUNC_5(&VAR_9, VAR_4, sizeof(u32));
 if (VAR_9 != VAR_0)
  return -VAR_2;
 VAR_4 += sizeof(u32);

 FUNC_1(VAR_7, VAR_8, VAR_6);

 FUNC_5(VAR_8->digest_buff, VAR_4, VAR_6->inter_digestsize);
 VAR_4 += VAR_6->inter_digestsize;

 FUNC_5(VAR_8->digest_bytes_len, VAR_4, VAR_6->hash_len);
 VAR_4 += VAR_6->hash_len;


 FUNC_5(&VAR_9, VAR_4, sizeof(u32));
 if (VAR_9 > VAR_1)
  return -VAR_2;
 VAR_4 += sizeof(u32);

 VAR_8->buf_cnt[0] = VAR_9;
 FUNC_5(VAR_8->buffers[0], VAR_4, VAR_9);

 return 0;
}
