
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_alg {int cra_ctxsize; int cra_flags; scalar_t__ cra_alignmask; int cra_blocksize; int cra_priority; int cra_exit; int cra_init; int cra_module; int cra_driver_name; int cra_name; } ;
struct TYPE_2__ {struct crypto_alg base; } ;
struct ahash_alg {int * setkey; TYPE_1__ halg; } ;
struct caam_hash_template {char* hmac_name; char* hmac_driver_name; char* name; char* driver_name; int alg_type; int blocksize; struct ahash_alg template_ahash; } ;
struct caam_hash_ctx {int dummy; } ;
struct caam_hash_alg {int alg_type; struct ahash_alg ahash_alg; } ;


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
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char*,char*) ;

__attribute__((used)) static struct caam_hash_alg *
FUNC_4(struct caam_hash_template *VAR_8,
  bool VAR_9)
{
 struct caam_hash_alg *VAR_10;
 struct ahash_alg *VAR_11;
 struct crypto_alg *VAR_12;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_4);
 if (!VAR_10) {
  FUNC_2("failed to allocate t_alg\n");
  return FUNC_0(-VAR_3);
 }

 VAR_10->ahash_alg = VAR_8->template_ahash;
 VAR_11 = &VAR_10->ahash_alg;
 VAR_12 = &VAR_11->halg.base;

 if (VAR_9) {
  FUNC_3(VAR_12->cra_name, VAR_2, "%s",
    VAR_8->hmac_name);
  FUNC_3(VAR_12->cra_driver_name, VAR_2, "%s",
    VAR_8->hmac_driver_name);
 } else {
  FUNC_3(VAR_12->cra_name, VAR_2, "%s",
    VAR_8->name);
  FUNC_3(VAR_12->cra_driver_name, VAR_2, "%s",
    VAR_8->driver_name);
  VAR_10->ahash_alg.setkey = ((void*)0);
 }
 VAR_12->cra_module = VAR_5;
 VAR_12->cra_init = VAR_7;
 VAR_12->cra_exit = VAR_6;
 VAR_12->cra_ctxsize = sizeof(struct caam_hash_ctx);
 VAR_12->cra_priority = VAR_0;
 VAR_12->cra_blocksize = VAR_8->blocksize;
 VAR_12->cra_alignmask = 0;
 VAR_12->cra_flags = VAR_1;

 VAR_10->alg_type = VAR_8->alg_type;

 return VAR_10;
}
