
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simd_aead_ctx {int dummy; } ;
struct TYPE_2__ {int cra_flags; int cra_ctxsize; int cra_module; int cra_alignmask; int cra_blocksize; int cra_priority; int cra_driver_name; int cra_name; } ;
struct aead_alg {int decrypt; int encrypt; int setauthsize; int setkey; int exit; int init; int chunksize; int maxauthsize; int ivsize; TYPE_1__ base; } ;
struct simd_aead_alg {char const* ialg_name; struct aead_alg alg; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct simd_aead_alg* FUNC_0 (struct crypto_aead*) ;
 struct simd_aead_alg* FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;
 struct aead_alg* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (char const*,int,int) ;
 int FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (struct aead_alg*) ;
 int FUNC_7 (struct simd_aead_alg*) ;
 struct simd_aead_alg* FUNC_8 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (int ,scalar_t__,char*,char const*) ;

struct simd_aead_alg *FUNC_10(const char *VAR_12,
           const char *VAR_13,
           const char *VAR_14)
{
 struct simd_aead_alg *VAR_15;
 struct crypto_aead *VAR_16;
 struct aead_alg *VAR_17;
 struct aead_alg *VAR_18;
 int VAR_19;

 VAR_16 = FUNC_4(VAR_14, VAR_1,
    VAR_1 | VAR_0);
 if (FUNC_2(VAR_16))
  return FUNC_0(VAR_16);

 VAR_17 = FUNC_3(VAR_16);

 VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_5);
 if (!VAR_15) {
  VAR_15 = FUNC_1(-VAR_4);
  goto out_put_tfm;
 }

 VAR_15->ialg_name = VAR_14;
 VAR_18 = &VAR_15->alg;

 VAR_19 = -VAR_3;
 if (FUNC_9(VAR_18->base.cra_name, VAR_2, "%s", VAR_12) >=
     VAR_2)
  goto out_free_salg;

 if (FUNC_9(VAR_18->base.cra_driver_name, VAR_2, "%s",
       VAR_13) >= VAR_2)
  goto out_free_salg;

 VAR_18->base.cra_flags = VAR_0;
 VAR_18->base.cra_priority = VAR_17->base.cra_priority;
 VAR_18->base.cra_blocksize = VAR_17->base.cra_blocksize;
 VAR_18->base.cra_alignmask = VAR_17->base.cra_alignmask;
 VAR_18->base.cra_module = VAR_17->base.cra_module;
 VAR_18->base.cra_ctxsize = sizeof(struct simd_aead_ctx);

 VAR_18->ivsize = VAR_17->ivsize;
 VAR_18->maxauthsize = VAR_17->maxauthsize;
 VAR_18->chunksize = VAR_17->chunksize;

 VAR_18->init = VAR_9;
 VAR_18->exit = VAR_8;

 VAR_18->setkey = VAR_11;
 VAR_18->setauthsize = VAR_10;
 VAR_18->encrypt = VAR_7;
 VAR_18->decrypt = VAR_6;

 VAR_19 = FUNC_6(VAR_18);
 if (VAR_19)
  goto out_free_salg;

out_put_tfm:
 FUNC_5(VAR_16);
 return VAR_15;

out_free_salg:
 FUNC_7(VAR_15);
 VAR_15 = FUNC_1(VAR_19);
 goto out_put_tfm;
}
