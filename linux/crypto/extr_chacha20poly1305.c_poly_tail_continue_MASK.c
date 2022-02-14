
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chachapoly_req_ctx {scalar_t__ cryptlen; } ;
struct aead_request {scalar_t__ cryptlen; } ;


 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_0)
{
 struct chachapoly_req_ctx *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->cryptlen == VAR_0->cryptlen)
  return FUNC_2(VAR_0);

 return FUNC_1(VAR_0);
}
