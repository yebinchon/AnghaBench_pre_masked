
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pub; } ;
struct rsa_edesc {int hw_desc; TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_key {scalar_t__ n_sz; int e; int n; } ;
struct caam_rsa_ctx {struct device* dev; struct caam_rsa_key key; } ;
struct akcipher_request {scalar_t__ dst_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rsa_edesc*) ;
 int FUNC_1 (struct rsa_edesc*) ;
 struct caam_rsa_ctx* FUNC_2 (struct crypto_akcipher*) ;
 int FUNC_3 (struct device*,int ,int ,struct akcipher_request*) ;
 struct crypto_akcipher* FUNC_4 (struct akcipher_request*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct rsa_edesc*) ;
 struct rsa_edesc* FUNC_8 (struct akcipher_request*,int ) ;
 int FUNC_9 (struct device*,struct rsa_edesc*,struct akcipher_request*) ;
 int VAR_4 ;
 int FUNC_10 (struct device*,struct rsa_edesc*,struct akcipher_request*) ;
 int FUNC_11 (struct akcipher_request*,struct rsa_edesc*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct akcipher_request *VAR_5)
{
 struct crypto_akcipher *VAR_6 = FUNC_4(VAR_5);
 struct caam_rsa_ctx *VAR_7 = FUNC_2(VAR_6);
 struct caam_rsa_key *VAR_8 = &VAR_7->key;
 struct device *VAR_9 = VAR_7->dev;
 struct rsa_edesc *VAR_10;
 int VAR_11;

 if (FUNC_12(!VAR_8->n || !VAR_8->e))
  return -VAR_2;

 if (VAR_5->dst_len < VAR_8->n_sz) {
  VAR_5->dst_len = VAR_8->n_sz;
  FUNC_5(VAR_9, "Output buffer length less than parameter n\n");
  return -VAR_3;
 }


 VAR_10 = FUNC_8(VAR_5, VAR_0);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);


 VAR_11 = FUNC_11(VAR_5, VAR_10);
 if (VAR_11)
  goto init_fail;


 FUNC_6(VAR_10->hw_desc, &VAR_10->pdb.pub);

 VAR_11 = FUNC_3(VAR_9, VAR_10->hw_desc, VAR_4, VAR_5);
 if (!VAR_11)
  return -VAR_1;

 FUNC_10(VAR_9, VAR_10, VAR_5);

init_fail:
 FUNC_9(VAR_9, VAR_10, VAR_5);
 FUNC_7(VAR_10);
 return VAR_11;
}
