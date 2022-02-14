
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cra_blocksize; int cra_ctxsize; int cra_exit; int cra_init; int cra_priority; } ;
struct TYPE_4__ {int setkey; int final; int update; int init; TYPE_1__ base; scalar_t__ descsize; scalar_t__ digestsize; } ;
struct shash_instance {TYPE_2__ alg; scalar_t__ cra_blocksize; scalar_t__ cra_alignmask; int cra_priority; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_alg {TYPE_2__ alg; scalar_t__ cra_blocksize; scalar_t__ cra_alignmask; int cra_priority; } ;
struct cbcmac_tfm_ctx {int dummy; } ;
struct cbcmac_desc_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct shash_instance*) ;
 int FUNC_2 (struct shash_instance*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct rtattr**,int ) ;
 struct shash_instance* FUNC_4 (struct rtattr**,int ,int ) ;
 int FUNC_5 (int ,struct shash_instance*,int ,int ) ;
 int FUNC_6 (struct shash_instance*) ;
 struct shash_instance* FUNC_7 (char*,struct shash_instance*) ;
 int FUNC_8 (struct shash_instance*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct shash_instance*) ;
 int FUNC_11 (struct crypto_template*,struct shash_instance*) ;

__attribute__((used)) static int FUNC_12(struct crypto_template *VAR_9, struct rtattr **VAR_10)
{
 struct shash_instance *VAR_11;
 struct crypto_alg *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_10, VAR_2);
 if (VAR_13)
  return VAR_13;

 VAR_12 = FUNC_4(VAR_10, VAR_0,
      VAR_1);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);

 VAR_11 = FUNC_7("cbcmac", VAR_12);
 VAR_13 = FUNC_2(VAR_11);
 if (FUNC_1(VAR_11))
  goto out_put_alg;

 VAR_13 = FUNC_5(FUNC_10(VAR_11), VAR_12,
    FUNC_8(VAR_11),
    VAR_1);
 if (VAR_13)
  goto out_free_inst;

 VAR_11->alg.base.cra_priority = VAR_12->cra_priority;
 VAR_11->alg.base.cra_blocksize = 1;

 VAR_11->alg.digestsize = VAR_12->cra_blocksize;
 VAR_11->alg.descsize = FUNC_0(sizeof(struct cbcmac_desc_ctx),
       VAR_12->cra_alignmask + 1) +
        VAR_12->cra_blocksize;

 VAR_11->alg.base.cra_ctxsize = sizeof(struct cbcmac_tfm_ctx);
 VAR_11->alg.base.cra_init = VAR_4;
 VAR_11->alg.base.cra_exit = VAR_3;

 VAR_11->alg.init = VAR_6;
 VAR_11->alg.update = VAR_8;
 VAR_11->alg.final = VAR_5;
 VAR_11->alg.setkey = VAR_7;

 VAR_13 = FUNC_11(VAR_9, VAR_11);

out_free_inst:
 if (VAR_13)
  FUNC_9(FUNC_8(VAR_11));

out_put_alg:
 FUNC_6(VAR_12);
 return VAR_13;
}
