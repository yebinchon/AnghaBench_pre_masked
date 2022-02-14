
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_flags; int cra_ctxsize; int cra_module; int cra_alignmask; int cra_blocksize; int cra_priority; int cra_driver_name; int cra_name; } ;
struct skcipher_alg {int decrypt; int encrypt; int setkey; int exit; int init; int max_keysize; int min_keysize; int chunksize; int ivsize; TYPE_1__ base; } ;
struct simd_skcipher_ctx {int dummy; } ;
struct simd_skcipher_alg {char const* ialg_name; struct skcipher_alg alg; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct simd_skcipher_alg* FUNC_0 (struct crypto_skcipher*) ;
 struct simd_skcipher_alg* FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (char const*,int,int) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct skcipher_alg*) ;
 struct skcipher_alg* FUNC_6 (struct crypto_skcipher*) ;
 int FUNC_7 (struct simd_skcipher_alg*) ;
 struct simd_skcipher_alg* FUNC_8 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (int ,scalar_t__,char*,char const*) ;

struct simd_skcipher_alg *FUNC_10(const char *VAR_11,
            const char *VAR_12,
            const char *VAR_13)
{
 struct simd_skcipher_alg *VAR_14;
 struct crypto_skcipher *VAR_15;
 struct skcipher_alg *VAR_16;
 struct skcipher_alg *VAR_17;
 int VAR_18;

 VAR_15 = FUNC_3(VAR_13, VAR_1,
        VAR_1 | VAR_0);
 if (FUNC_2(VAR_15))
  return FUNC_0(VAR_15);

 VAR_16 = FUNC_6(VAR_15);

 VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_5);
 if (!VAR_14) {
  VAR_14 = FUNC_1(-VAR_4);
  goto out_put_tfm;
 }

 VAR_14->ialg_name = VAR_13;
 VAR_17 = &VAR_14->alg;

 VAR_18 = -VAR_3;
 if (FUNC_9(VAR_17->base.cra_name, VAR_2, "%s", VAR_11) >=
     VAR_2)
  goto out_free_salg;

 if (FUNC_9(VAR_17->base.cra_driver_name, VAR_2, "%s",
       VAR_12) >= VAR_2)
  goto out_free_salg;

 VAR_17->base.cra_flags = VAR_0;
 VAR_17->base.cra_priority = VAR_16->base.cra_priority;
 VAR_17->base.cra_blocksize = VAR_16->base.cra_blocksize;
 VAR_17->base.cra_alignmask = VAR_16->base.cra_alignmask;
 VAR_17->base.cra_module = VAR_16->base.cra_module;
 VAR_17->base.cra_ctxsize = sizeof(struct simd_skcipher_ctx);

 VAR_17->ivsize = VAR_16->ivsize;
 VAR_17->chunksize = VAR_16->chunksize;
 VAR_17->min_keysize = VAR_16->min_keysize;
 VAR_17->max_keysize = VAR_16->max_keysize;

 VAR_17->init = VAR_9;
 VAR_17->exit = VAR_8;

 VAR_17->setkey = VAR_10;
 VAR_17->encrypt = VAR_7;
 VAR_17->decrypt = VAR_6;

 VAR_18 = FUNC_5(VAR_17);
 if (VAR_18)
  goto out_free_salg;

out_put_tfm:
 FUNC_4(VAR_15);
 return VAR_14;

out_free_salg:
 FUNC_7(VAR_14);
 VAR_14 = FUNC_1(VAR_18);
 goto out_put_tfm;
}
