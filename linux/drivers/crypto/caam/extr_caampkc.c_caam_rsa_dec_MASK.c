
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_akcipher {int dummy; } ;
struct caam_rsa_key {scalar_t__ n_sz; scalar_t__ priv_form; int d; int n; } ;
struct caam_rsa_ctx {int dev; struct caam_rsa_key key; } ;
struct akcipher_request {scalar_t__ dst_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct caam_rsa_ctx* FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 (struct akcipher_request*) ;
 int FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (struct akcipher_request*) ;
 struct crypto_akcipher* FUNC_4 (struct akcipher_request*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct akcipher_request *VAR_4)
{
 struct crypto_akcipher *VAR_5 = FUNC_4(VAR_4);
 struct caam_rsa_ctx *VAR_6 = FUNC_0(VAR_5);
 struct caam_rsa_key *VAR_7 = &VAR_6->key;
 int VAR_8;

 if (FUNC_6(!VAR_7->n || !VAR_7->d))
  return -VAR_0;

 if (VAR_4->dst_len < VAR_7->n_sz) {
  VAR_4->dst_len = VAR_7->n_sz;
  FUNC_5(VAR_6->dev, "Output buffer length less than parameter n\n");
  return -VAR_1;
 }

 if (VAR_7->priv_form == VAR_3)
  VAR_8 = FUNC_3(VAR_4);
 else if (VAR_7->priv_form == VAR_2)
  VAR_8 = FUNC_2(VAR_4);
 else
  VAR_8 = FUNC_1(VAR_4);

 return VAR_8;
}
