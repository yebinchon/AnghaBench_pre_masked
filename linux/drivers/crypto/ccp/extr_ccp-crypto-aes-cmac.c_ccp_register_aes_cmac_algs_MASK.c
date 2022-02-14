
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct crypto_alg {int cra_flags; int cra_ctxsize; int cra_name; int cra_module; int cra_init; int cra_priority; void* cra_blocksize; int cra_driver_name; } ;
struct hash_alg_common {int statesize; struct crypto_alg base; void* digestsize; } ;
struct ccp_ctx {int dummy; } ;
struct ahash_alg {struct hash_alg_common halg; int setkey; int import; int export; int digest; int finup; int final; int update; int init; } ;
struct ccp_crypto_ahash_alg {int entry; struct ahash_alg alg; int mode; } ;
struct ccp_aes_cmac_exp_ctx {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct ahash_alg*) ;
 int FUNC_2 (struct ccp_crypto_ahash_alg*) ;
 struct ccp_crypto_ahash_alg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int ,char*) ;

int FUNC_7(struct list_head *VAR_19)
{
 struct ccp_crypto_ahash_alg *VAR_20;
 struct ahash_alg *VAR_21;
 struct hash_alg_common *VAR_22;
 struct crypto_alg *VAR_23;
 int VAR_24;

 VAR_20 = FUNC_3(sizeof(*VAR_20), VAR_8);
 if (!VAR_20)
  return -VAR_7;

 FUNC_0(&VAR_20->entry);
 VAR_20->mode = VAR_1;

 VAR_21 = &VAR_20->alg;
 VAR_21->init = VAR_16;
 VAR_21->update = VAR_18;
 VAR_21->final = VAR_13;
 VAR_21->finup = VAR_14;
 VAR_21->digest = VAR_11;
 VAR_21->export = VAR_12;
 VAR_21->import = VAR_15;
 VAR_21->setkey = VAR_17;

 VAR_22 = &VAR_21->halg;
 VAR_22->digestsize = VAR_0;
 VAR_22->statesize = sizeof(struct ccp_aes_cmac_exp_ctx);

 VAR_23 = &VAR_22->base;
 FUNC_6(VAR_23->cra_name, VAR_6, "cmac(aes)");
 FUNC_6(VAR_23->cra_driver_name, VAR_6, "cmac-aes-ccp");
 VAR_23->cra_flags = VAR_3 |
     VAR_4 |
     VAR_5;
 VAR_23->cra_blocksize = VAR_0;
 VAR_23->cra_ctxsize = sizeof(struct ccp_ctx);
 VAR_23->cra_priority = VAR_2;
 VAR_23->cra_init = VAR_10;
 VAR_23->cra_module = VAR_9;

 VAR_24 = FUNC_1(VAR_21);
 if (VAR_24) {
  FUNC_5("%s ahash algorithm registration error (%d)\n",
         VAR_23->cra_name, VAR_24);
  FUNC_2(VAR_20);
  return VAR_24;
 }

 FUNC_4(&VAR_20->entry, VAR_19);

 return 0;
}
