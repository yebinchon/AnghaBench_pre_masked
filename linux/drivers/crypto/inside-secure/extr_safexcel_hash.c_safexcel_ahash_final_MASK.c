
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_ahash_req {int finish; int len; int block_sz; int* cache; int hmac_zlen; void* digest; scalar_t__ hmac; scalar_t__ len_is_le; } ;
struct safexcel_ahash_ctx {scalar_t__ alg; } ;
struct ahash_request {int nbytes; int result; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct safexcel_ahash_req* FUNC_0 (struct ahash_request*) ;
 struct safexcel_ahash_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int VAR_13 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct ahash_request*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_19)
{
 struct safexcel_ahash_req *VAR_20 = FUNC_0(VAR_19);
 struct safexcel_ahash_ctx *VAR_21 = FUNC_1(FUNC_2(VAR_19));

 VAR_20->finish = 1;

 if (FUNC_6(!VAR_20->len && !VAR_19->nbytes)) {





  if (VAR_21->alg == VAR_0)
   FUNC_3(VAR_19->result, VAR_13,
          VAR_7);
  else if (VAR_21->alg == VAR_1)
   FUNC_3(VAR_19->result, VAR_14,
          VAR_8);
  else if (VAR_21->alg == VAR_2)
   FUNC_3(VAR_19->result, VAR_15,
          VAR_9);
  else if (VAR_21->alg == VAR_3)
   FUNC_3(VAR_19->result, VAR_16,
          VAR_10);
  else if (VAR_21->alg == VAR_4)
   FUNC_3(VAR_19->result, VAR_17,
          VAR_11);
  else if (VAR_21->alg == VAR_5)
   FUNC_3(VAR_19->result, VAR_18,
          VAR_12);

  return 0;
 } else if (FUNC_6(VAR_20->hmac &&
       (VAR_20->len == VAR_20->block_sz) &&
       !VAR_19->nbytes)) {
  FUNC_4(VAR_20->cache, 0, VAR_20->block_sz);

  VAR_20->cache[0] = 0x80;

  if (VAR_20->len_is_le) {

   VAR_20->cache[VAR_20->block_sz-8] = (VAR_20->block_sz << 3) &
            255;
   VAR_20->cache[VAR_20->block_sz-7] = (VAR_20->block_sz >> 5);
  } else {

   VAR_20->cache[VAR_20->block_sz-2] = (VAR_20->block_sz >> 5);
   VAR_20->cache[VAR_20->block_sz-1] = (VAR_20->block_sz << 3) &
            255;
  }

  VAR_20->len += VAR_20->block_sz;


  VAR_20->hmac_zlen = 1;


  VAR_20->digest = VAR_6;
 } else if (VAR_20->hmac) {

  VAR_20->digest = VAR_6;
 }

 return FUNC_5(VAR_19);
}
