
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct qce_sha_ctx {int * authkey; } ;
struct crypto_wait {int dummy; } ;
struct crypto_ahash {int base; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct ahash_request* FUNC_2 (struct crypto_ahash*,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct ahash_request*,int ,int ,struct crypto_wait*) ;
 int FUNC_5 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_6 (struct crypto_ahash*,int ) ;
 int FUNC_7 (struct ahash_request*) ;
 unsigned int FUNC_8 (struct crypto_ahash*) ;
 int FUNC_9 (struct crypto_ahash*,int ) ;
 int FUNC_10 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_11 (char const*,int ,int ) ;
 int FUNC_12 (struct crypto_ahash*) ;
 int FUNC_13 (struct crypto_wait*) ;
 int VAR_8 ;
 unsigned int FUNC_14 (int ) ;
 struct qce_sha_ctx* FUNC_15 (int *) ;
 int FUNC_16 (int ,struct crypto_wait*) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (int *,int const*,unsigned int) ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (struct scatterlist*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_22(struct crypto_ahash *VAR_9, const u8 *VAR_10,
     unsigned int VAR_11)
{
 unsigned int VAR_12 = FUNC_8(VAR_9);
 struct qce_sha_ctx *VAR_13 = FUNC_15(&VAR_9->base);
 struct crypto_wait VAR_14;
 struct ahash_request *VAR_15;
 struct scatterlist VAR_16;
 unsigned int VAR_17;
 struct crypto_ahash *VAR_18;
 u8 *VAR_19;
 int VAR_20;
 const char *VAR_21;

 VAR_17 = FUNC_14(FUNC_10(VAR_9));
 FUNC_20(VAR_13->authkey, 0, sizeof(VAR_13->authkey));

 if (VAR_11 <= VAR_17) {
  FUNC_19(VAR_13->authkey, VAR_10, VAR_11);
  return 0;
 }

 if (VAR_12 == VAR_6)
  VAR_21 = "sha1-qce";
 else if (VAR_12 == VAR_7)
  VAR_21 = "sha256-qce";
 else
  return -VAR_2;

 VAR_18 = FUNC_11(VAR_21, 0, 0);
 if (FUNC_0(VAR_18))
  return FUNC_1(VAR_18);

 VAR_15 = FUNC_2(VAR_18, VAR_4);
 if (!VAR_15) {
  VAR_20 = -VAR_3;
  goto err_free_ahash;
 }

 FUNC_13(&VAR_14);
 FUNC_4(VAR_15, VAR_0,
       VAR_8, &VAR_14);
 FUNC_6(VAR_18, ~0);

 VAR_19 = FUNC_18(VAR_11 + VAR_5, VAR_4);
 if (!VAR_19) {
  VAR_20 = -VAR_3;
  goto err_free_req;
 }

 FUNC_19(VAR_19, VAR_10, VAR_11);
 FUNC_21(&VAR_16, VAR_19, VAR_11);
 FUNC_5(VAR_15, &VAR_16, VAR_13->authkey, VAR_11);

 VAR_20 = FUNC_16(FUNC_7(VAR_15), &VAR_14);
 if (VAR_20)
  FUNC_9(VAR_9, VAR_1);

 FUNC_17(VAR_19);
err_free_req:
 FUNC_3(VAR_15);
err_free_ahash:
 FUNC_12(VAR_18);
 return VAR_20;
}
