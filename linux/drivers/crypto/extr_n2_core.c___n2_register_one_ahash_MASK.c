
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2_hash_tmpl {scalar_t__ hmac_type; char* name; int block_size; int digest_size; int hw_op_hashsz; int auth_type; int hash_init; int hash_zero; } ;
struct n2_hash_ctx {int dummy; } ;
struct crypto_alg {int cra_flags; int cra_ctxsize; int cra_name; int cra_exit; int cra_init; int cra_module; int cra_blocksize; int cra_priority; int cra_driver_name; } ;
struct hash_alg_common {struct crypto_alg base; int digestsize; } ;
struct ahash_alg {struct hash_alg_common halg; int import; int export; int digest; int finup; int final; int update; int init; } ;
struct n2_ahash_alg {scalar_t__ hmac_type; int entry; struct ahash_alg alg; int digest_size; int hw_op_hashsz; int auth_type; int hash_init; int hash_zero; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct n2_ahash_alg*) ;
 int VAR_8 ;
 int FUNC_1 (struct ahash_alg*) ;
 int FUNC_2 (struct n2_ahash_alg*) ;
 struct n2_ahash_alg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_9(const struct n2_hash_tmpl *VAR_18)
{
 struct n2_ahash_alg *VAR_19 = FUNC_3(sizeof(*VAR_19), VAR_5);
 struct hash_alg_common *VAR_20;
 struct crypto_alg *VAR_21;
 struct ahash_alg *VAR_22;
 int VAR_23;

 if (!VAR_19)
  return -VAR_4;

 VAR_19->hash_zero = VAR_18->hash_zero;
 VAR_19->hash_init = VAR_18->hash_init;
 VAR_19->auth_type = VAR_18->auth_type;
 VAR_19->hmac_type = VAR_18->hmac_type;
 VAR_19->hw_op_hashsz = VAR_18->hw_op_hashsz;
 VAR_19->digest_size = VAR_18->digest_size;

 VAR_22 = &VAR_19->alg;
 VAR_22->init = VAR_12;
 VAR_22->update = VAR_15;
 VAR_22->final = VAR_10;
 VAR_22->finup = VAR_11;
 VAR_22->digest = VAR_9;
 VAR_22->export = VAR_13;
 VAR_22->import = VAR_14;

 VAR_20 = &VAR_22->halg;
 VAR_20->digestsize = VAR_18->digest_size;

 VAR_21 = &VAR_20->base;
 FUNC_8(VAR_21->cra_name, VAR_3, "%s", VAR_18->name);
 FUNC_8(VAR_21->cra_driver_name, VAR_3, "%s-n2", VAR_18->name);
 VAR_21->cra_priority = VAR_6;
 VAR_21->cra_flags = VAR_1 |
     VAR_2;
 VAR_21->cra_blocksize = VAR_18->block_size;
 VAR_21->cra_ctxsize = sizeof(struct n2_hash_ctx);
 VAR_21->cra_module = VAR_7;
 VAR_21->cra_init = VAR_17;
 VAR_21->cra_exit = VAR_16;

 FUNC_4(&VAR_19->entry, &VAR_8);
 VAR_23 = FUNC_1(VAR_22);
 if (VAR_23) {
  FUNC_6("%s alg registration failed\n", VAR_21->cra_name);
  FUNC_5(&VAR_19->entry);
  FUNC_2(VAR_19);
 } else {
  FUNC_7("%s alg registered\n", VAR_21->cra_name);
 }
 if (!VAR_23 && VAR_19->hmac_type != VAR_0)
  VAR_23 = FUNC_0(VAR_19);
 return VAR_23;
}
