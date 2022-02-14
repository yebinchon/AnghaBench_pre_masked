
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct poly_req {int req; } ;
struct TYPE_2__ {struct poly_req poly; } ;
struct chachapoly_req_ctx {scalar_t__ cryptlen; int flags; int src; TYPE_1__ u; } ;
struct chachapoly_ctx {int poly; } ;
struct aead_request {scalar_t__ cryptlen; int assoclen; struct scatterlist* dst; struct scatterlist* src; } ;


 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *,int ,int ,struct aead_request*) ;
 int FUNC_2 (int *,struct scatterlist*,int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 struct chachapoly_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct aead_request*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (struct aead_request*) ;
 struct scatterlist* FUNC_8 (int ,struct scatterlist*,int ) ;

__attribute__((used)) static int FUNC_9(struct aead_request *VAR_1)
{
 struct chachapoly_ctx *VAR_2 = FUNC_4(FUNC_5(VAR_1));
 struct chachapoly_req_ctx *VAR_3 = FUNC_0(VAR_1);
 struct poly_req *VAR_4 = &VAR_3->u.poly;
 struct scatterlist *VAR_5 = VAR_1->src;
 int VAR_6;

 if (VAR_3->cryptlen == VAR_1->cryptlen)
  VAR_5 = VAR_1->dst;

 VAR_5 = FUNC_8(VAR_3->src, VAR_5, VAR_1->assoclen);

 FUNC_1(&VAR_4->req, VAR_3->flags,
       VAR_0, VAR_1);
 FUNC_3(&VAR_4->req, VAR_2->poly);
 FUNC_2(&VAR_4->req, VAR_5, ((void*)0), VAR_3->cryptlen);

 VAR_6 = FUNC_6(&VAR_4->req);
 if (VAR_6)
  return VAR_6;

 return FUNC_7(VAR_1);
}
