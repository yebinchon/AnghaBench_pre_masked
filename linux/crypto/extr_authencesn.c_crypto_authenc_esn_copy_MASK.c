
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_authenc_esn_ctx {int null; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dst; int src; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct aead_request*) ;
 struct crypto_authenc_esn_ctx* FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ,unsigned int,int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(struct aead_request *VAR_1, unsigned int VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_3(VAR_1);
 struct crypto_authenc_esn_ctx *VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_0, VAR_4->null);

 FUNC_7(VAR_0, VAR_4->null);
 FUNC_5(VAR_0, FUNC_1(VAR_1),
          ((void*)0), ((void*)0));
 FUNC_6(VAR_0, VAR_1->src, VAR_1->dst, VAR_2, ((void*)0));

 return FUNC_4(VAR_0);
}
