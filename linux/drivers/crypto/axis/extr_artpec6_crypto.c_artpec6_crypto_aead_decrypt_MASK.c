
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_aead_req_ctx {int decrypt; int common; } ;
struct aead_request {scalar_t__ cryptlen; int base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct artpec6_crypto_aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_3)
{
 int VAR_4;
 struct artpec6_crypto_aead_req_ctx *VAR_5 = FUNC_0(VAR_3);

 VAR_5->decrypt = 1;
 if (VAR_3->cryptlen < VAR_0)
  return -VAR_1;

 VAR_4 = FUNC_2(&VAR_5->common,
      &VAR_3->base,
      VAR_2,
      ((void*)0), 0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  FUNC_1(&VAR_5->common);
  return VAR_4;
 }

 return FUNC_4(&VAR_5->common);
}
