
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poly_req {int req; int src; int pad; } ;
struct TYPE_2__ {struct poly_req poly; } ;
struct chachapoly_req_ctx {unsigned int assoclen; int flags; TYPE_1__ u; } ;
struct chachapoly_ctx {int poly; } ;
struct aead_request {int dummy; } ;


 unsigned int VAR_0 ;
 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *,int ,int ,struct aead_request*) ;
 int FUNC_2 (int *,int ,int *,unsigned int) ;
 int FUNC_3 (int *,int ) ;
 struct chachapoly_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct aead_request*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_8 (struct aead_request*) ;
 int FUNC_9 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_2)
{
 struct chachapoly_ctx *VAR_3 = FUNC_4(FUNC_5(VAR_2));
 struct chachapoly_req_ctx *VAR_4 = FUNC_0(VAR_2);
 struct poly_req *VAR_5 = &VAR_4->u.poly;
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = -VAR_4->assoclen % VAR_0;
 FUNC_7(VAR_5->pad, 0, sizeof(VAR_5->pad));
 FUNC_9(VAR_5->src, VAR_5->pad, VAR_6);

 FUNC_1(&VAR_5->req, VAR_4->flags,
       VAR_1, VAR_2);
 FUNC_3(&VAR_5->req, VAR_3->poly);
 FUNC_2(&VAR_5->req, VAR_5->src, ((void*)0), VAR_6);

 VAR_7 = FUNC_6(&VAR_5->req);
 if (VAR_7)
  return VAR_7;

 return FUNC_8(VAR_2);
}
