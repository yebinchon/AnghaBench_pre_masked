
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int ivsize; } ;
struct crypto_alg {int cra_name; TYPE_1__ cra_ablkcipher; int cra_blocksize; int cra_driver_name; } ;
struct ccp_des3_def {char* name; char* driver_name; int ivsize; int blocksize; struct crypto_alg* alg_defaults; int mode; } ;
struct ccp_crypto_ablkcipher_alg {int entry; struct crypto_alg alg; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (struct ccp_crypto_ablkcipher_alg*) ;
 struct ccp_crypto_ablkcipher_alg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct list_head *VAR_3,
     const struct ccp_des3_def *VAR_4)
{
 struct ccp_crypto_ablkcipher_alg *VAR_5;
 struct crypto_alg *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_0(&VAR_5->entry);

 VAR_5->mode = VAR_4->mode;


 VAR_6 = &VAR_5->alg;
 *VAR_6 = *VAR_4->alg_defaults;
 FUNC_6(VAR_6->cra_name, VAR_0, "%s", VAR_4->name);
 FUNC_6(VAR_6->cra_driver_name, VAR_0, "%s",
   VAR_4->driver_name);
 VAR_6->cra_blocksize = VAR_4->blocksize;
 VAR_6->cra_ablkcipher.ivsize = VAR_4->ivsize;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  FUNC_5("%s ablkcipher algorithm registration error (%d)\n",
    VAR_6->cra_name, VAR_7);
  FUNC_2(VAR_5);
  return VAR_7;
 }

 FUNC_4(&VAR_5->entry, VAR_3);

 return 0;
}
