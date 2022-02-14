
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_3__ {unsigned int key_len; int key; int key_sg; int mode; int type; } ;
struct TYPE_4__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct ccp_crypto_ablkcipher_alg {int mode; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ccp_crypto_ablkcipher_alg* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_ablkcipher*,int ) ;
 int FUNC_2 (struct crypto_ablkcipher*) ;
 struct ccp_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_ablkcipher *VAR_5, const u8 *VAR_6,
     unsigned int VAR_7)
{
 struct ccp_ctx *VAR_8 = FUNC_3(FUNC_2(VAR_5));
 struct ccp_crypto_ablkcipher_alg *VAR_9 =
  FUNC_0(FUNC_2(VAR_5));

 switch (VAR_7) {
 case 130:
  VAR_8->u.aes.type = VAR_0;
  break;
 case 129:
  VAR_8->u.aes.type = VAR_1;
  break;
 case 128:
  VAR_8->u.aes.type = VAR_2;
  break;
 default:
  FUNC_1(VAR_5, VAR_3);
  return -VAR_4;
 }
 VAR_8->u.aes.mode = VAR_9->mode;
 VAR_8->u.aes.key_len = VAR_7;

 FUNC_4(VAR_8->u.aes.key, VAR_6, VAR_7);
 FUNC_5(&VAR_8->u.aes.key_sg, VAR_8->u.aes.key, VAR_7);

 return 0;
}
