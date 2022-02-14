
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmac_tfm_ctx {int dummy; } ;
struct vmac_desc_ctx {int dummy; } ;
struct TYPE_3__ {scalar_t__ cra_blocksize; int cra_ctxsize; int cra_exit; int cra_init; int cra_alignmask; int cra_priority; } ;
struct TYPE_4__ {int descsize; int digestsize; int setkey; int final; int update; int init; TYPE_1__ base; } ;
struct shash_instance {scalar_t__ cra_blocksize; TYPE_2__ alg; int cra_alignmask; int cra_priority; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int name; } ;
struct crypto_alg {scalar_t__ cra_blocksize; TYPE_2__ alg; int cra_alignmask; int cra_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct shash_instance*) ;
 int FUNC_1 (struct shash_instance*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct rtattr**,int ) ;
 struct shash_instance* FUNC_3 (struct rtattr**,int ,int ) ;
 int FUNC_4 (int ,struct shash_instance*,int ,int ) ;
 int FUNC_5 (struct shash_instance*) ;
 struct shash_instance* FUNC_6 (int ,struct shash_instance*) ;
 int FUNC_7 (struct shash_instance*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct shash_instance*) ;
 int FUNC_10 (struct crypto_template*,struct shash_instance*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct crypto_template *VAR_12, struct rtattr **VAR_13)
{
 struct shash_instance *VAR_14;
 struct crypto_alg *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_2(VAR_13, VAR_2);
 if (VAR_16)
  return VAR_16;

 VAR_15 = FUNC_3(VAR_13, VAR_0,
   VAR_1);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_16 = -VAR_3;
 if (VAR_15->cra_blocksize != VAR_4)
  goto out_put_alg;

 VAR_14 = FUNC_6(VAR_12->name, VAR_15);
 VAR_16 = FUNC_1(VAR_14);
 if (FUNC_0(VAR_14))
  goto out_put_alg;

 VAR_16 = FUNC_4(FUNC_9(VAR_14), VAR_15,
   FUNC_7(VAR_14),
   VAR_1);
 if (VAR_16)
  goto out_free_inst;

 VAR_14->alg.base.cra_priority = VAR_15->cra_priority;
 VAR_14->alg.base.cra_blocksize = VAR_15->cra_blocksize;
 VAR_14->alg.base.cra_alignmask = VAR_15->cra_alignmask;

 VAR_14->alg.base.cra_ctxsize = sizeof(struct vmac_tfm_ctx);
 VAR_14->alg.base.cra_init = VAR_9;
 VAR_14->alg.base.cra_exit = VAR_6;

 VAR_14->alg.descsize = sizeof(struct vmac_desc_ctx);
 VAR_14->alg.digestsize = VAR_5 / 8;
 VAR_14->alg.init = VAR_8;
 VAR_14->alg.update = VAR_11;
 VAR_14->alg.final = VAR_7;
 VAR_14->alg.setkey = VAR_10;

 VAR_16 = FUNC_10(VAR_12, VAR_14);
 if (VAR_16) {
out_free_inst:
  FUNC_8(FUNC_7(VAR_14));
 }

out_put_alg:
 FUNC_5(VAR_15);
 return VAR_16;
}
