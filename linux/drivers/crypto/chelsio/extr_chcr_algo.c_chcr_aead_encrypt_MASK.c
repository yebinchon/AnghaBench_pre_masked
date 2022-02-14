
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {int op; int verify; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;






 int VAR_1 ;
 struct chcr_aead_reqctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_5)
{
 struct crypto_aead *VAR_6 = FUNC_2(VAR_5);
 struct chcr_aead_reqctx *VAR_7 = FUNC_0(VAR_5);

 VAR_7->verify = VAR_1;
 VAR_7->op = VAR_0;

 switch (FUNC_3(VAR_6)) {
 case 128:
 case 130:
 case 131:
 case 129:
  return FUNC_1(VAR_5, 0, VAR_3);
 case 133:
 case 132:
  return FUNC_1(VAR_5, 0, VAR_2);
 default:
  return FUNC_1(VAR_5, 0, VAR_4);
 }
}
