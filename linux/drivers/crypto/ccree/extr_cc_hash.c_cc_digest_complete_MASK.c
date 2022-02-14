
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cc_hash_ctx {int dummy; } ;
struct ahash_request {int result; int src; } ;
struct ahash_req_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahash_request*,int) ;
 struct ahash_req_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct device*,struct ahash_req_ctx*,int ,int) ;
 int FUNC_3 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_4 (struct device*,struct ahash_req_ctx*,int ,int ) ;
 struct cc_hash_ctx* FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_7 (struct ahash_request*) ;
 int FUNC_8 (struct device*,char*,struct ahash_request*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_1, void *VAR_2, int VAR_3)
{
 struct ahash_request *VAR_4 = (struct ahash_request *)VAR_2;
 struct ahash_req_ctx *VAR_5 = FUNC_1(VAR_4);
 struct crypto_ahash *VAR_6 = FUNC_7(VAR_4);
 struct cc_hash_ctx *VAR_7 = FUNC_5(VAR_6);
 u32 VAR_8 = FUNC_6(VAR_6);

 FUNC_8(VAR_1, "req=%pK\n", VAR_4);

 if (VAR_3 != -VAR_0) {

  FUNC_2(VAR_1, VAR_5, VAR_4->src, 0);
  FUNC_4(VAR_1, VAR_5, VAR_8, VAR_4->result);
  FUNC_3(VAR_1, VAR_5, VAR_7);
 }

 FUNC_0(VAR_4, VAR_3);
}
