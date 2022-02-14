
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_alg {int cra_ctxsize; int cra_flags; scalar_t__ cra_alignmask; int cra_blocksize; int cra_priority; int cra_exit; int cra_init; int cra_module; int cra_driver_name; int cra_name; } ;
struct TYPE_2__ {struct crypto_alg base; } ;
struct ahash_alg {int * setkey; TYPE_1__ halg; } ;
struct caam_hash_template {char* hmac_name; char* hmac_driver_name; char* name; char* driver_name; int alg_type; int blocksize; struct ahash_alg template_ahash; } ;
struct caam_hash_ctx {int dummy; } ;
struct caam_hash_alg {struct device* dev; int alg_type; struct ahash_alg ahash_alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct caam_hash_alg* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct caam_hash_alg* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,char*,char*) ;

__attribute__((used)) static struct caam_hash_alg *FUNC_3(struct device *VAR_8,
 struct caam_hash_template *VAR_9, bool VAR_10)
{
 struct caam_hash_alg *VAR_11;
 struct ahash_alg *VAR_12;
 struct crypto_alg *VAR_13;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return FUNC_0(-VAR_3);

 VAR_11->ahash_alg = VAR_9->template_ahash;
 VAR_12 = &VAR_11->ahash_alg;
 VAR_13 = &VAR_12->halg.base;

 if (VAR_10) {
  FUNC_2(VAR_13->cra_name, VAR_2, "%s",
    VAR_9->hmac_name);
  FUNC_2(VAR_13->cra_driver_name, VAR_2, "%s",
    VAR_9->hmac_driver_name);
 } else {
  FUNC_2(VAR_13->cra_name, VAR_2, "%s",
    VAR_9->name);
  FUNC_2(VAR_13->cra_driver_name, VAR_2, "%s",
    VAR_9->driver_name);
  VAR_11->ahash_alg.setkey = ((void*)0);
 }
 VAR_13->cra_module = VAR_5;
 VAR_13->cra_init = VAR_7;
 VAR_13->cra_exit = VAR_6;
 VAR_13->cra_ctxsize = sizeof(struct caam_hash_ctx);
 VAR_13->cra_priority = VAR_0;
 VAR_13->cra_blocksize = VAR_9->blocksize;
 VAR_13->cra_alignmask = 0;
 VAR_13->cra_flags = VAR_1;

 VAR_11->alg_type = VAR_9->alg_type;
 VAR_11->dev = VAR_8;

 return VAR_11;
}
