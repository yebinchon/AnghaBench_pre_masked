
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chachapoly_req_ctx {scalar_t__ cryptlen; int tag; } ;
struct aead_request {scalar_t__ assoclen; int dst; } ;


 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int ,int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_0)
{
 struct chachapoly_req_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->tag, VAR_0->dst,
     VAR_0->assoclen + VAR_1->cryptlen,
     sizeof(VAR_1->tag), 1);
 return 0;
}
