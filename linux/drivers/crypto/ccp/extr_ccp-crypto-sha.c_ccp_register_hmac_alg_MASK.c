
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct crypto_alg {int cra_name; int cra_exit; int cra_init; int cra_driver_name; } ;
struct hash_alg_common {struct crypto_alg base; } ;
struct ccp_sha_def {char* name; char* drv_name; } ;
struct ahash_alg {struct hash_alg_common halg; int setkey; } ;
struct ccp_crypto_ahash_alg {int entry; struct ahash_alg alg; int child_alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ahash_alg*) ;
 int FUNC_2 (struct ccp_crypto_ahash_alg*) ;
 struct ccp_crypto_ahash_alg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int ,char*,char*) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct list_head *VAR_6,
     const struct ccp_sha_def *VAR_7,
     const struct ccp_crypto_ahash_alg *VAR_8)
{
 struct ccp_crypto_ahash_alg *VAR_9;
 struct ahash_alg *VAR_10;
 struct hash_alg_common *VAR_11;
 struct crypto_alg *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;


 *VAR_9 = *VAR_8;
 FUNC_0(&VAR_9->entry);

 FUNC_7(VAR_9->child_alg, VAR_7->name, VAR_0);

 VAR_10 = &VAR_9->alg;
 VAR_10->setkey = VAR_5;

 VAR_11 = &VAR_10->halg;

 VAR_12 = &VAR_11->base;
 FUNC_6(VAR_12->cra_name, VAR_0, "hmac(%s)", VAR_7->name);
 FUNC_6(VAR_12->cra_driver_name, VAR_0, "hmac-%s",
   VAR_7->drv_name);
 VAR_12->cra_init = VAR_4;
 VAR_12->cra_exit = VAR_3;

 VAR_13 = FUNC_1(VAR_10);
 if (VAR_13) {
  FUNC_5("%s ahash algorithm registration error (%d)\n",
         VAR_12->cra_name, VAR_13);
  FUNC_2(VAR_9);
  return VAR_13;
 }

 FUNC_4(&VAR_9->entry, VAR_6);

 return VAR_13;
}
