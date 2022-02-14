
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead_spawn {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cryptd_aead_request_ctx {int dummy; } ;
struct cryptd_aead_ctx {struct crypto_aead* child; } ;
struct aead_instance_ctx {struct crypto_aead_spawn aead_spawn; } ;
struct aead_instance {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct aead_instance* FUNC_2 (struct crypto_aead*) ;
 struct aead_instance_ctx* FUNC_3 (struct aead_instance*) ;
 struct cryptd_aead_ctx* FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (struct crypto_aead*,int ) ;
 struct crypto_aead* FUNC_7 (struct crypto_aead_spawn*) ;
 int FUNC_8 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_9(struct crypto_aead *VAR_0)
{
 struct aead_instance *VAR_1 = FUNC_2(VAR_0);
 struct aead_instance_ctx *VAR_2 = FUNC_3(VAR_1);
 struct crypto_aead_spawn *VAR_3 = &VAR_2->aead_spawn;
 struct cryptd_aead_ctx *VAR_4 = FUNC_4(VAR_0);
 struct crypto_aead *VAR_5;

 VAR_5 = FUNC_7(VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4->child = VAR_5;
 FUNC_6(
  VAR_0, FUNC_8((unsigned)sizeof(struct cryptd_aead_request_ctx),
    FUNC_5(VAR_5)));
 return 0;
}
