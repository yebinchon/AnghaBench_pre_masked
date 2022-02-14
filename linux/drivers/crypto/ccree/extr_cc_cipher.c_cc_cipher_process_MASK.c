
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct skcipher_request {unsigned int cryptlen; int base; void* iv; struct scatterlist* src; struct scatterlist* dst; } ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_6__ {int op_type; } ;
struct cipher_req_ctx {int iv; TYPE_3__ gen_ctx; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_4__ {int is_cpp; int slot; int alg; } ;
struct cc_crypto_req {TYPE_1__ cpp; void* user_arg; void* user_cb; } ;
struct TYPE_5__ {int slot; int alg; } ;
struct cc_cipher_ctx {scalar_t__ key_type; int drvdata; TYPE_2__ cpp; } ;
typedef int gfp_t ;
typedef enum drv_crypto_direction { ____Placeholder_drv_crypto_direction } drv_crypto_direction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct cipher_req_ctx*,unsigned int,unsigned int,int ,struct scatterlist*,struct scatterlist*,int ) ;
 int FUNC_2 (int ,struct cc_crypto_req*,struct cc_hw_desc*,unsigned int,int *) ;
 int FUNC_3 (struct crypto_tfm*,struct cipher_req_ctx*,struct scatterlist*,struct scatterlist*,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_4 (struct crypto_tfm*,struct cipher_req_ctx*,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_5 (struct crypto_tfm*,struct cipher_req_ctx*,struct scatterlist*,struct scatterlist*,unsigned int,struct skcipher_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_6 (struct crypto_tfm*,struct cipher_req_ctx*,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_7 (struct crypto_tfm*,struct cipher_req_ctx*,unsigned int,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_8 (struct device*,struct cipher_req_ctx*,unsigned int,struct scatterlist*,struct scatterlist*) ;
 unsigned int FUNC_9 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_10 (struct skcipher_request*) ;
 struct crypto_tfm* FUNC_11 (struct crypto_skcipher*) ;
 struct cc_cipher_ctx* FUNC_12 (struct crypto_tfm*) ;
 int FUNC_13 (struct crypto_tfm*,int ) ;
 int FUNC_14 (struct device*,char*,char*,struct skcipher_request*,void*,unsigned int) ;
 int FUNC_15 (struct device*,char*,...) ;
 struct device* FUNC_16 (int ) ;
 int FUNC_17 (void*,unsigned int,int ) ;
 int FUNC_18 (int ) ;
 struct cipher_req_ctx* FUNC_19 (struct skcipher_request*) ;
 scalar_t__ FUNC_20 (struct cc_cipher_ctx*,unsigned int) ;

__attribute__((used)) static int FUNC_21(struct skcipher_request *VAR_9,
        enum drv_crypto_direction VAR_10)
{
 struct crypto_skcipher *VAR_11 = FUNC_10(VAR_9);
 struct crypto_tfm *VAR_12 = FUNC_11(VAR_11);
 struct cipher_req_ctx *VAR_13 = FUNC_19(VAR_9);
 unsigned int VAR_14 = FUNC_9(VAR_11);
 struct scatterlist *VAR_15 = VAR_9->dst;
 struct scatterlist *VAR_16 = VAR_9->src;
 unsigned int VAR_17 = VAR_9->cryptlen;
 void *VAR_18 = VAR_9->iv;
 struct cc_cipher_ctx *VAR_19 = FUNC_12(VAR_12);
 struct device *VAR_20 = FUNC_16(VAR_19->drvdata);
 struct cc_hw_desc VAR_21[VAR_7];
 struct cc_crypto_req VAR_22 = {};
 int VAR_23;
 unsigned int VAR_24 = 0;
 gfp_t VAR_25 = FUNC_0(&VAR_9->base);

 FUNC_14(VAR_20, "%s req=%p iv=%p nbytes=%d\n",
  ((VAR_10 == VAR_2) ?
  "Encrypt" : "Decrypt"), VAR_9, VAR_18, VAR_17);




 if (FUNC_20(VAR_19, VAR_17)) {
  FUNC_15(VAR_20, "Unsupported data size %d.\n", VAR_17);
  FUNC_13(VAR_12, VAR_1);
  VAR_23 = -VAR_5;
  goto exit_process;
 }
 if (VAR_17 == 0) {

  VAR_23 = 0;
  goto exit_process;
 }




 VAR_13->iv = FUNC_17(VAR_18, VAR_14, VAR_25);
 if (!VAR_13->iv) {
  VAR_23 = -VAR_6;
  goto exit_process;
 }


 VAR_22.user_cb = (void *)VAR_8;
 VAR_22.user_arg = (void *)VAR_9;


 if (VAR_19->key_type == VAR_0) {
  VAR_22.cpp.is_cpp = 1;
  VAR_22.cpp.alg = VAR_19->cpp.alg;
  VAR_22.cpp.slot = VAR_19->cpp.slot;
 }


 VAR_13->gen_ctx.op_type = VAR_10;



 VAR_23 = FUNC_1(VAR_19->drvdata, VAR_13, VAR_14, VAR_17,
          VAR_13->iv, VAR_16, VAR_15, VAR_25);
 if (VAR_23) {
  FUNC_15(VAR_20, "map_request() failed\n");
  goto exit_process;
 }




 FUNC_7(VAR_12, VAR_13, VAR_14, VAR_17, VAR_21, &VAR_24);

 FUNC_5(VAR_12, VAR_13, VAR_15, VAR_16, VAR_17, VAR_9, VAR_21, &VAR_24);

 FUNC_4(VAR_12, VAR_13, VAR_17, VAR_21, &VAR_24);

 FUNC_3(VAR_12, VAR_13, VAR_15, VAR_16, VAR_17, VAR_21, &VAR_24);

 FUNC_6(VAR_12, VAR_13, VAR_14, VAR_21, &VAR_24);



 VAR_23 = FUNC_2(VAR_19->drvdata, &VAR_22, VAR_21, VAR_24,
        &VAR_9->base);
 if (VAR_23 != -VAR_4 && VAR_23 != -VAR_3) {



  FUNC_8(VAR_20, VAR_13, VAR_14, VAR_16, VAR_15);
 }

exit_process:
 if (VAR_23 != -VAR_4 && VAR_23 != -VAR_3) {
  FUNC_18(VAR_13->iv);
 }

 return VAR_23;
}
