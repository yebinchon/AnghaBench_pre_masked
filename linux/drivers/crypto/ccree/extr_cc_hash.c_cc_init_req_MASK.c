
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_hash_ctx {int is_hmac; scalar_t__ hw_mode; void const* digest_buff; scalar_t__ hash_mode; void const* opad_tmp_keys_buff; int inter_digestsize; int opad_tmp_keys_dma_addr; int hash_len; int digest_buff_dma_addr; } ;
struct ahash_req_ctx {int digest_buff; int opad_digest_buff; int digest_bytes_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void const* VAR_6 ;
 void const* VAR_7 ;
 void* FUNC_0 (struct device*,scalar_t__) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ,void const*,int ) ;
 int FUNC_3 (struct ahash_req_ctx*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_8, struct ahash_req_ctx *VAR_9,
   struct cc_hash_ctx *VAR_10)
{
 bool VAR_11 = VAR_10->is_hmac;

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));

 if (VAR_11) {
  if (VAR_10->hw_mode != VAR_2 &&
      VAR_10->hw_mode != VAR_1) {
   FUNC_1(VAR_8, VAR_10->digest_buff_dma_addr,
      VAR_10->inter_digestsize,
      VAR_0);

   FUNC_2(VAR_9->digest_buff, VAR_10->digest_buff,
          VAR_10->inter_digestsize);
   if (VAR_10->hash_mode == VAR_5 ||
       VAR_10->hash_mode == VAR_4)
    FUNC_2(VAR_9->digest_bytes_len,
           VAR_7,
           VAR_10->hash_len);
   else
    FUNC_2(VAR_9->digest_bytes_len,
           VAR_6,
           VAR_10->hash_len);
  }

  if (VAR_10->hash_mode != VAR_3) {
   FUNC_1(VAR_8,
      VAR_10->opad_tmp_keys_dma_addr,
      VAR_10->inter_digestsize,
      VAR_0);
   FUNC_2(VAR_9->opad_digest_buff,
          VAR_10->opad_tmp_keys_buff, VAR_10->inter_digestsize);
  }
 } else {

  const void *VAR_12 = FUNC_0(VAR_8, VAR_10->hash_mode);

  FUNC_2(VAR_9->digest_buff, VAR_12, VAR_10->inter_digestsize);
 }
}
