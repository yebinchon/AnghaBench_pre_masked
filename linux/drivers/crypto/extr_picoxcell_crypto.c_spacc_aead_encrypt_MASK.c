
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spacc_aead {int type; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int ,int) ;
 struct spacc_aead* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_0)
{
 struct crypto_aead *VAR_1 = FUNC_1(VAR_0);
 struct spacc_aead *VAR_2 = FUNC_3(FUNC_0(VAR_1));

 return FUNC_2(VAR_0, VAR_2->type, 1);
}
