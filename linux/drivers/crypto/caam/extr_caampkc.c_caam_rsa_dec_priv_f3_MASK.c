
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priv_f3; } ;
struct rsa_edesc {int hw_desc; TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_ctx {struct device* dev; } ;
struct akcipher_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rsa_edesc*) ;
 int FUNC_1 (struct rsa_edesc*) ;
 struct caam_rsa_ctx* FUNC_2 (struct crypto_akcipher*) ;
 int FUNC_3 (struct device*,int ,int ,struct akcipher_request*) ;
 struct crypto_akcipher* FUNC_4 (struct akcipher_request*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct rsa_edesc*) ;
 struct rsa_edesc* FUNC_7 (struct akcipher_request*,int ) ;
 int FUNC_8 (struct device*,struct rsa_edesc*,struct akcipher_request*) ;
 int VAR_2 ;
 int FUNC_9 (struct device*,struct rsa_edesc*,struct akcipher_request*) ;
 int FUNC_10 (struct akcipher_request*,struct rsa_edesc*) ;

__attribute__((used)) static int FUNC_11(struct akcipher_request *VAR_3)
{
 struct crypto_akcipher *VAR_4 = FUNC_4(VAR_3);
 struct caam_rsa_ctx *VAR_5 = FUNC_2(VAR_4);
 struct device *VAR_6 = VAR_5->dev;
 struct rsa_edesc *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_7(VAR_3, VAR_0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);


 VAR_8 = FUNC_10(VAR_3, VAR_7);
 if (VAR_8)
  goto init_fail;


 FUNC_5(VAR_7->hw_desc, &VAR_7->pdb.priv_f3);

 VAR_8 = FUNC_3(VAR_6, VAR_7->hw_desc, VAR_2, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 FUNC_9(VAR_6, VAR_7, VAR_3);

init_fail:
 FUNC_8(VAR_6, VAR_7, VAR_3);
 FUNC_6(VAR_7);
 return VAR_8;
}
