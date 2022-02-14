
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poly_req {int req; } ;
struct TYPE_2__ {struct poly_req poly; } ;
struct chachapoly_req_ctx {int flags; TYPE_1__ u; } ;
struct chachapoly_ctx {int poly; } ;
struct aead_request {int dummy; } ;


 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *,int ,int ,struct aead_request*) ;
 int FUNC_2 (int *,int ) ;
 struct chachapoly_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct aead_request*) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_1)
{
 struct chachapoly_ctx *VAR_2 = FUNC_3(FUNC_4(VAR_1));
 struct chachapoly_req_ctx *VAR_3 = FUNC_0(VAR_1);
 struct poly_req *VAR_4 = &VAR_3->u.poly;
 int VAR_5;

 FUNC_1(&VAR_4->req, VAR_3->flags,
       VAR_0, VAR_1);
 FUNC_2(&VAR_4->req, VAR_2->poly);

 VAR_5 = FUNC_5(&VAR_4->req);
 if (VAR_5)
  return VAR_5;

 return FUNC_6(VAR_1);
}
