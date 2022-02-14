
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct aead_request {int iv; } ;


 int VAR_0 ;
 struct aead_request* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct aead_request *VAR_1, int VAR_2)
{
 struct aead_request *VAR_3 = FUNC_0(VAR_1);
 struct crypto_aead *VAR_4;

 if (VAR_2 == -VAR_0)
  return;

 if (VAR_2)
  goto out;

 VAR_4 = FUNC_2(VAR_1);
 FUNC_4(VAR_1->iv, VAR_3->iv, FUNC_1(VAR_4));

out:
 FUNC_3(VAR_3->iv);
}
