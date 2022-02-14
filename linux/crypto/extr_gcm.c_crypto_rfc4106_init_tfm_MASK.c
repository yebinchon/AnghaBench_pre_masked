
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_rfc4106_req_ctx {int dummy; } ;
struct crypto_rfc4106_ctx {struct crypto_aead* child; } ;
struct crypto_aead_spawn {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_instance {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 struct aead_instance* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead_spawn* FUNC_4 (struct aead_instance*) ;
 unsigned long FUNC_5 (struct crypto_aead*) ;
 struct crypto_rfc4106_ctx* FUNC_6 (struct crypto_aead*) ;
 int FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*,scalar_t__) ;
 struct crypto_aead* FUNC_9 (struct crypto_aead_spawn*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct crypto_aead *VAR_0)
{
 struct aead_instance *VAR_1 = FUNC_3(VAR_0);
 struct crypto_aead_spawn *VAR_2 = FUNC_4(VAR_1);
 struct crypto_rfc4106_ctx *VAR_3 = FUNC_6(VAR_0);
 struct crypto_aead *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_9(VAR_2);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_3->child = VAR_4;

 VAR_5 = FUNC_5(VAR_4);
 VAR_5 &= ~(FUNC_10() - 1);
 FUNC_8(
  VAR_0,
  sizeof(struct crypto_rfc4106_req_ctx) +
  FUNC_0(FUNC_7(VAR_4), FUNC_10()) +
  VAR_5 + 24);

 return 0;
}
