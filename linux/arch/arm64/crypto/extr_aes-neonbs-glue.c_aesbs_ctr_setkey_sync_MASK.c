
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_3__ {int rounds; int rk; } ;
struct TYPE_4__ {int key_enc; } ;
struct aesbs_ctr_ctx {TYPE_1__ key; TYPE_2__ fallback; } ;


 int FUNC_0 (TYPE_2__*,int const*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 struct aesbs_ctr_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct crypto_skcipher *VAR_0, const u8 *VAR_1,
     unsigned int VAR_2)
{
 struct aesbs_ctr_ctx *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->fallback, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->key.rounds = 6 + VAR_2 / 4;

 FUNC_3();
 FUNC_1(VAR_3->key.rk, VAR_3->fallback.key_enc, VAR_3->key.rounds);
 FUNC_4();

 return 0;
}
