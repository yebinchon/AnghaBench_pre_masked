
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_key {int n_sz; int e_sz; int d_sz; int n; int e; int d; int * member_0; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_key {int n_sz; int e_sz; int d_sz; int n; void* e; void* d; } ;
struct caam_rsa_ctx {struct caam_rsa_key key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct caam_rsa_ctx* FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct caam_rsa_key*) ;
 int FUNC_4 (struct caam_rsa_ctx*,struct rsa_key*) ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct rsa_key*,void const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_akcipher *VAR_4, const void *VAR_5,
     unsigned int VAR_6)
{
 struct caam_rsa_ctx *VAR_7 = FUNC_0(VAR_4);
 struct rsa_key VAR_8 = {((void*)0)};
 struct caam_rsa_key *VAR_9 = &VAR_7->key;
 int VAR_10;


 FUNC_3(VAR_9);

 VAR_10 = FUNC_6(&VAR_8, VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;


 VAR_9->d = FUNC_5(VAR_8.d, VAR_8.d_sz, VAR_2 | VAR_3);
 if (!VAR_9->d)
  goto err;

 VAR_9->e = FUNC_5(VAR_8.e, VAR_8.e_sz, VAR_2 | VAR_3);
 if (!VAR_9->e)
  goto err;







 VAR_9->n = FUNC_1(VAR_8.n, &VAR_8.n_sz);
 if (!VAR_9->n)
  goto err;

 if (FUNC_2(VAR_8.n_sz << 3)) {
  FUNC_3(VAR_9);
  return -VAR_0;
 }

 VAR_9->d_sz = VAR_8.d_sz;
 VAR_9->e_sz = VAR_8.e_sz;
 VAR_9->n_sz = VAR_8.n_sz;

 FUNC_4(VAR_7, &VAR_8);

 return 0;

err:
 FUNC_3(VAR_9);
 return -VAR_1;
}
