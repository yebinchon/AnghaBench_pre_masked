
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_rfc4543_instance_ctx {int aead; } ;
struct aead_instance {int dummy; } ;


 struct crypto_rfc4543_instance_ctx* FUNC_0 (struct aead_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct aead_instance*) ;

__attribute__((used)) static void FUNC_3(struct aead_instance *VAR_0)
{
 struct crypto_rfc4543_instance_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->aead);

 FUNC_2(VAR_0);
}
