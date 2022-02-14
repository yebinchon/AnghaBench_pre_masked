
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsa_key {int d_sz; int d; int e_sz; int e; int n_sz; int n; } ;
struct crypto_akcipher {int dummy; } ;
struct TYPE_3__ {int n_len; int key_len; int e_len; int d_len; int d_buf; int d_sg; int e_buf; int e_sg; int n_buf; int n_sg; } ;
struct TYPE_4__ {TYPE_1__ rsa; } ;
struct ccp_ctx {TYPE_2__ u; } ;
typedef int raw_key ;


 int VAR_0 ;
 struct ccp_ctx* FUNC_0 (struct crypto_akcipher*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int*,int ,int ) ;
 int FUNC_3 (struct ccp_ctx*) ;
 int FUNC_4 (struct rsa_key*,int ,int) ;
 int FUNC_5 (struct rsa_key*,void const*,unsigned int) ;
 int FUNC_6 (struct rsa_key*,void const*,unsigned int) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int FUNC_8(struct crypto_akcipher *VAR_1, const void *VAR_2,
     unsigned int VAR_3, bool VAR_4)
{
 struct ccp_ctx *VAR_5 = FUNC_0(VAR_1);
 struct rsa_key VAR_6;
 int VAR_7;

 FUNC_3(VAR_5);
 FUNC_4(&VAR_6, 0, sizeof(VAR_6));


 if (VAR_4)
  VAR_7 = FUNC_5(&VAR_6, VAR_2, VAR_3);
 else
  VAR_7 = FUNC_6(&VAR_6, VAR_2, VAR_3);
 if (VAR_7)
  goto n_key;

 VAR_7 = FUNC_2(&VAR_5->u.rsa.n_buf, &VAR_5->u.rsa.n_len,
     VAR_6.n, VAR_6.n_sz);
 if (VAR_7)
  goto key_err;
 FUNC_7(&VAR_5->u.rsa.n_sg, VAR_5->u.rsa.n_buf, VAR_5->u.rsa.n_len);

 VAR_5->u.rsa.key_len = VAR_5->u.rsa.n_len << 3;
 if (FUNC_1(VAR_5->u.rsa.key_len)) {
  VAR_7 = -VAR_0;
  goto key_err;
 }

 VAR_7 = FUNC_2(&VAR_5->u.rsa.e_buf, &VAR_5->u.rsa.e_len,
     VAR_6.e, VAR_6.e_sz);
 if (VAR_7)
  goto key_err;
 FUNC_7(&VAR_5->u.rsa.e_sg, VAR_5->u.rsa.e_buf, VAR_5->u.rsa.e_len);

 if (VAR_4) {
  VAR_7 = FUNC_2(&VAR_5->u.rsa.d_buf,
      &VAR_5->u.rsa.d_len,
      VAR_6.d, VAR_6.d_sz);
  if (VAR_7)
   goto key_err;
  FUNC_7(&VAR_5->u.rsa.d_sg,
       VAR_5->u.rsa.d_buf, VAR_5->u.rsa.d_len);
 }

 return 0;

key_err:
 FUNC_3(VAR_5);

n_key:
 return VAR_7;
}
