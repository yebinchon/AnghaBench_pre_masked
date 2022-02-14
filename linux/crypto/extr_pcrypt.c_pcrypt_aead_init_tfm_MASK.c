
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcrypt_request {int dummy; } ;
struct pcrypt_instance_ctx {int spawn; int tfm_count; } ;
struct pcrypt_aead_ctx {struct crypto_aead* child; int cb_cpu; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
struct aead_instance {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct aead_instance* FUNC_2 (struct crypto_aead*) ;
 struct pcrypt_instance_ctx* FUNC_3 (struct aead_instance*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 unsigned int FUNC_7 (int ) ;
 struct pcrypt_aead_ctx* FUNC_8 (struct crypto_aead*) ;
 scalar_t__ FUNC_9 (struct crypto_aead*) ;
 int FUNC_10 (struct crypto_aead*,scalar_t__) ;
 struct crypto_aead* FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct crypto_aead *VAR_1)
{
 int VAR_2, VAR_3;
 struct aead_instance *VAR_4 = FUNC_2(VAR_1);
 struct pcrypt_instance_ctx *VAR_5 = FUNC_3(VAR_4);
 struct pcrypt_aead_ctx *VAR_6 = FUNC_8(VAR_1);
 struct crypto_aead *VAR_7;

 VAR_3 = (unsigned int)FUNC_4(&VAR_5->tfm_count) %
      FUNC_7(VAR_0);

 VAR_6->cb_cpu = FUNC_5(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  VAR_6->cb_cpu = FUNC_6(VAR_6->cb_cpu, VAR_0);

 VAR_7 = FUNC_11(&VAR_5->spawn);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6->child = VAR_7;
 FUNC_10(VAR_1, sizeof(struct pcrypt_request) +
         sizeof(struct aead_request) +
         FUNC_9(VAR_7));

 return 0;
}
