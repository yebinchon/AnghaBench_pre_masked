
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tag ;
struct chachapoly_req_ctx {int tag; scalar_t__ cryptlen; } ;
struct aead_request {scalar_t__ assoclen; int src; } ;


 int VAR_0 ;
 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_1)
{
 struct chachapoly_req_ctx *VAR_2 = FUNC_0(VAR_1);
 u8 VAR_3[sizeof(VAR_2->tag)];

 FUNC_2(VAR_3, VAR_1->src,
     VAR_1->assoclen + VAR_2->cryptlen,
     sizeof(VAR_3), 0);
 if (FUNC_1(VAR_3, VAR_2->tag, sizeof(VAR_3)))
  return -VAR_0;
 return 0;
}
