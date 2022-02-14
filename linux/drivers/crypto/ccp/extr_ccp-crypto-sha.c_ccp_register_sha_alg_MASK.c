
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct crypto_alg {int cra_flags; int cra_ctxsize; int cra_name; int cra_module; int cra_exit; int cra_init; int cra_priority; int cra_blocksize; int cra_driver_name; } ;
struct hash_alg_common {int statesize; struct crypto_alg base; int digestsize; } ;
struct ccp_sha_exp_ctx {int dummy; } ;
struct ccp_sha_def {char* name; char* drv_name; int block_size; int digest_size; int type; } ;
struct ccp_ctx {int dummy; } ;
struct ahash_alg {struct hash_alg_common halg; int import; int export; int digest; int finup; int final; int update; int init; } ;
struct ccp_crypto_ahash_alg {int entry; struct ahash_alg alg; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (struct list_head*,struct ccp_sha_def const*,struct ccp_crypto_ahash_alg*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ahash_alg*) ;
 int FUNC_3 (struct ccp_crypto_ahash_alg*) ;
 struct ccp_crypto_ahash_alg* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_8(struct list_head *VAR_17,
    const struct ccp_sha_def *VAR_18)
{
 struct ccp_crypto_ahash_alg *VAR_19;
 struct ahash_alg *VAR_20;
 struct hash_alg_common *VAR_21;
 struct crypto_alg *VAR_22;
 int VAR_23;

 VAR_19 = FUNC_4(sizeof(*VAR_19), VAR_6);
 if (!VAR_19)
  return -VAR_5;

 FUNC_0(&VAR_19->entry);

 VAR_19->type = VAR_18->type;

 VAR_20 = &VAR_19->alg;
 VAR_20->init = VAR_15;
 VAR_20->update = VAR_16;
 VAR_20->final = VAR_12;
 VAR_20->finup = VAR_13;
 VAR_20->digest = VAR_10;
 VAR_20->export = VAR_11;
 VAR_20->import = VAR_14;

 VAR_21 = &VAR_20->halg;
 VAR_21->digestsize = VAR_18->digest_size;
 VAR_21->statesize = sizeof(struct ccp_sha_exp_ctx);

 VAR_22 = &VAR_21->base;
 FUNC_7(VAR_22->cra_name, VAR_4, "%s", VAR_18->name);
 FUNC_7(VAR_22->cra_driver_name, VAR_4, "%s",
   VAR_18->drv_name);
 VAR_22->cra_flags = VAR_1 |
     VAR_2 |
     VAR_3;
 VAR_22->cra_blocksize = VAR_18->block_size;
 VAR_22->cra_ctxsize = sizeof(struct ccp_ctx);
 VAR_22->cra_priority = VAR_0;
 VAR_22->cra_init = VAR_9;
 VAR_22->cra_exit = VAR_8;
 VAR_22->cra_module = VAR_7;

 VAR_23 = FUNC_2(VAR_20);
 if (VAR_23) {
  FUNC_6("%s ahash algorithm registration error (%d)\n",
         VAR_22->cra_name, VAR_23);
  FUNC_3(VAR_19);
  return VAR_23;
 }

 FUNC_5(&VAR_19->entry, VAR_17);

 VAR_23 = FUNC_1(VAR_17, VAR_18, VAR_19);

 return VAR_23;
}
