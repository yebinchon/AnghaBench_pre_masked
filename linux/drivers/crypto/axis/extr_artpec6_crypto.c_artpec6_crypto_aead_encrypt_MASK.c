
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_aead_req_ctx {int decrypt; int common; } ;
struct aead_request {int base; } ;


 struct artpec6_crypto_aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_1)
{
 int VAR_2;
 struct artpec6_crypto_aead_req_ctx *VAR_3 = FUNC_0(VAR_1);

 VAR_3->decrypt = 0;
 VAR_2 = FUNC_2(&VAR_3->common, &VAR_1->base,
      VAR_0,
      ((void*)0), 0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_3->common);
  return VAR_2;
 }

 return FUNC_4(&VAR_3->common);
}
