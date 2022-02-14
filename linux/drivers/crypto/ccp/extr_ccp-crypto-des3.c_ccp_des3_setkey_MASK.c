
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_3__ {unsigned int key_len; int key; int key_sg; int mode; int type; } ;
struct TYPE_4__ {TYPE_1__ des3; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct ccp_crypto_ablkcipher_alg {int mode; } ;


 int VAR_0 ;
 struct ccp_crypto_ablkcipher_alg* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 struct ccp_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int ,int const*,unsigned int) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct crypto_ablkcipher*,int const*) ;

__attribute__((used)) static int FUNC_6(struct crypto_ablkcipher *VAR_1, const u8 *VAR_2,
  unsigned int VAR_3)
{
 struct ccp_ctx *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 struct ccp_crypto_ablkcipher_alg *VAR_5 =
  FUNC_0(FUNC_1(VAR_1));
 int VAR_6;

 VAR_6 = FUNC_5(VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;




 VAR_4->u.des3.type = VAR_0;
 VAR_4->u.des3.mode = VAR_5->mode;
 VAR_4->u.des3.key_len = VAR_3;

 FUNC_3(VAR_4->u.des3.key, VAR_2, VAR_3);
 FUNC_4(&VAR_4->u.des3.key_sg, VAR_4->u.des3.key, VAR_3);

 return 0;
}
