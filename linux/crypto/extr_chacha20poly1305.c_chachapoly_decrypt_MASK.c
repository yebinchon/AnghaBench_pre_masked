
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chachapoly_req_ctx {int flags; scalar_t__ cryptlen; } ;
struct aead_request {scalar_t__ cryptlen; } ;


 scalar_t__ VAR_0 ;
 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_1)
{
 struct chachapoly_req_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->cryptlen = VAR_1->cryptlen - VAR_0;
 VAR_2->flags = FUNC_1(VAR_1);
 return FUNC_2(VAR_1);
}
