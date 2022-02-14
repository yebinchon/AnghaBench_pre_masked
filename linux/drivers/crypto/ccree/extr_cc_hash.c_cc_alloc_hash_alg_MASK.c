
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_alg {int cra_ctxsize; int cra_flags; int cra_init; int cra_exit; scalar_t__ cra_alignmask; int cra_blocksize; int cra_priority; int cra_module; int cra_driver_name; int cra_name; } ;
struct TYPE_2__ {struct crypto_alg base; } ;
struct ahash_alg {int * setkey; TYPE_1__ halg; } ;
struct cc_hash_template {char* mac_name; char* mac_driver_name; char* name; char* driver_name; int inter_digestsize; int hw_mode; int hash_mode; int blocksize; struct ahash_alg template_ahash; } ;
struct cc_hash_ctx {int dummy; } ;
struct cc_hash_alg {int inter_digestsize; int hw_mode; int hash_mode; struct ahash_alg ahash_alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cc_hash_alg* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cc_hash_alg* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,char*,char*) ;

__attribute__((used)) static struct cc_hash_alg *FUNC_3(struct cc_hash_template *VAR_9,
          struct device *VAR_10, bool VAR_11)
{
 struct cc_hash_alg *VAR_12;
 struct crypto_alg *VAR_13;
 struct ahash_alg *VAR_14;

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return FUNC_0(-VAR_4);

 VAR_12->ahash_alg = VAR_9->template_ahash;
 VAR_14 = &VAR_12->ahash_alg;
 VAR_13 = &VAR_14->halg.base;

 if (VAR_11) {
  FUNC_2(VAR_13->cra_name, VAR_3, "%s",
    VAR_9->mac_name);
  FUNC_2(VAR_13->cra_driver_name, VAR_3, "%s",
    VAR_9->mac_driver_name);
 } else {
  VAR_14->setkey = ((void*)0);
  FUNC_2(VAR_13->cra_name, VAR_3, "%s",
    VAR_9->name);
  FUNC_2(VAR_13->cra_driver_name, VAR_3, "%s",
    VAR_9->driver_name);
 }
 VAR_13->cra_module = VAR_6;
 VAR_13->cra_ctxsize = sizeof(struct cc_hash_ctx);
 VAR_13->cra_priority = VAR_0;
 VAR_13->cra_blocksize = VAR_9->blocksize;
 VAR_13->cra_alignmask = 0;
 VAR_13->cra_exit = VAR_7;

 VAR_13->cra_init = VAR_8;
 VAR_13->cra_flags = VAR_1 | VAR_2;

 VAR_12->hash_mode = VAR_9->hash_mode;
 VAR_12->hw_mode = VAR_9->hw_mode;
 VAR_12->inter_digestsize = VAR_9->inter_digestsize;

 return VAR_12;
}
