
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {int op; scalar_t__ verify; } ;
struct chcr_aead_ctx {scalar_t__ mayverify; } ;
struct aead_request {int dummy; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct crypto_aead*) ;
 struct chcr_aead_reqctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_6)
{
 struct crypto_aead *VAR_7 = FUNC_5(VAR_6);
 struct chcr_aead_ctx *VAR_8 = FUNC_0(FUNC_1(VAR_7));
 struct chcr_aead_reqctx *VAR_9 = FUNC_2(VAR_6);
 int VAR_10;

 if (VAR_8->mayverify == VAR_2) {
  VAR_10 = FUNC_4(VAR_7);
  VAR_9->verify = VAR_2;
 } else {
  VAR_10 = 0;
  VAR_9->verify = VAR_1;
 }
 VAR_9->op = VAR_0;
 switch (FUNC_6(VAR_7)) {
 case 130:
 case 128:
 case 131:
 case 129:
  return FUNC_3(VAR_6, VAR_10, VAR_4);
 case 133:
 case 132:
  return FUNC_3(VAR_6, VAR_10, VAR_3);
 default:
  return FUNC_3(VAR_6, VAR_10, VAR_5);
 }
}
