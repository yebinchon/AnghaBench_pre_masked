
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int min_keysize; int max_keysize; void* ivsize; int decrypt; int encrypt; int setkey; } ;
struct crypto_alg {int cra_flags; int cra_ctxsize; int cra_name; int cra_module; int cra_exit; int cra_init; TYPE_1__ cra_ablkcipher; int * cra_type; int cra_priority; void* cra_blocksize; int cra_driver_name; } ;
struct ccp_ctx {int dummy; } ;
struct ccp_crypto_ablkcipher_alg {int entry; struct crypto_alg alg; } ;
struct ccp_aes_xts_def {char* name; char* drv_name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (struct ccp_crypto_ablkcipher_alg*) ;
 struct ccp_crypto_ablkcipher_alg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct list_head *VAR_18,
        const struct ccp_aes_xts_def *VAR_19)
{
 struct ccp_crypto_ablkcipher_alg *VAR_20;
 struct crypto_alg *VAR_21;
 int VAR_22;

 VAR_20 = FUNC_3(sizeof(*VAR_20), VAR_10);
 if (!VAR_20)
  return -VAR_9;

 FUNC_0(&VAR_20->entry);

 VAR_21 = &VAR_20->alg;

 FUNC_6(VAR_21->cra_name, VAR_8, "%s", VAR_19->name);
 FUNC_6(VAR_21->cra_driver_name, VAR_8, "%s",
   VAR_19->drv_name);
 VAR_21->cra_flags = VAR_7 | VAR_4 |
    VAR_5 |
    VAR_6;
 VAR_21->cra_blocksize = VAR_0;
 VAR_21->cra_ctxsize = sizeof(struct ccp_ctx);
 VAR_21->cra_priority = VAR_3;
 VAR_21->cra_type = &VAR_17;
 VAR_21->cra_ablkcipher.setkey = VAR_16;
 VAR_21->cra_ablkcipher.encrypt = VAR_15;
 VAR_21->cra_ablkcipher.decrypt = VAR_14;
 VAR_21->cra_ablkcipher.min_keysize = VAR_2 * 2;
 VAR_21->cra_ablkcipher.max_keysize = VAR_1 * 2;
 VAR_21->cra_ablkcipher.ivsize = VAR_0;
 VAR_21->cra_init = VAR_13;
 VAR_21->cra_exit = VAR_12;
 VAR_21->cra_module = VAR_11;

 VAR_22 = FUNC_1(VAR_21);
 if (VAR_22) {
  FUNC_5("%s ablkcipher algorithm registration error (%d)\n",
         VAR_21->cra_name, VAR_22);
  FUNC_2(VAR_20);
  return VAR_22;
 }

 FUNC_4(&VAR_20->entry, VAR_18);

 return 0;
}
