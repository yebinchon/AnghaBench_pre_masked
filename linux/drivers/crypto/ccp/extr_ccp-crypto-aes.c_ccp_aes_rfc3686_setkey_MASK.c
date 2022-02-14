
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_3__ {int nonce; } ;
struct TYPE_4__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 struct ccp_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_2, const u8 *VAR_3,
      unsigned int VAR_4)
{
 struct ccp_ctx *VAR_5 = FUNC_2(FUNC_1(VAR_2));

 if (VAR_4 < VAR_0)
  return -VAR_1;

 VAR_4 -= VAR_0;
 FUNC_3(VAR_5->u.aes.nonce, VAR_3 + VAR_4, VAR_0);

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
