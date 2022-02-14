
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct ccp_rsa_def {char* name; char* driver_name; struct akcipher_alg* alg_defaults; } ;
struct TYPE_2__ {int cra_name; int cra_driver_name; } ;
struct akcipher_alg {TYPE_1__ base; } ;
struct ccp_crypto_akcipher_alg {int entry; struct akcipher_alg alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct akcipher_alg*) ;
 int FUNC_2 (struct ccp_crypto_akcipher_alg*) ;
 struct ccp_crypto_akcipher_alg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct list_head *VAR_3,
           const struct ccp_rsa_def *VAR_4)
{
 struct ccp_crypto_akcipher_alg *VAR_5;
 struct akcipher_alg *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_0(&VAR_5->entry);

 VAR_6 = &VAR_5->alg;
 *VAR_6 = *VAR_4->alg_defaults;
 FUNC_6(VAR_6->base.cra_name, VAR_0, "%s", VAR_4->name);
 FUNC_6(VAR_6->base.cra_driver_name, VAR_0, "%s",
   VAR_4->driver_name);
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  FUNC_5("%s akcipher algorithm registration error (%d)\n",
         VAR_6->base.cra_name, VAR_7);
  FUNC_2(VAR_5);
  return VAR_7;
 }

 FUNC_4(&VAR_5->entry, VAR_3);

 return 0;
}
