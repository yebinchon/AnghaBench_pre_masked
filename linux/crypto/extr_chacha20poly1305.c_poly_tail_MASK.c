
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* cryptlen; void* assoclen; } ;
struct poly_req {int req; int src; TYPE_2__ tail; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_3__ {struct poly_req poly; } ;
struct chachapoly_req_ctx {int tag; int flags; int cryptlen; int assoclen; TYPE_1__ u; } ;
struct chachapoly_ctx {int poly; } ;
struct aead_request {int dummy; } ;


 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *,int ,int ,struct aead_request*) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (int ) ;
 struct chachapoly_ctx* FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct aead_request*) ;
 int VAR_0 ;
 int FUNC_9 (int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_6(VAR_1);
 struct chachapoly_ctx *VAR_3 = FUNC_5(VAR_2);
 struct chachapoly_req_ctx *VAR_4 = FUNC_0(VAR_1);
 struct poly_req *VAR_5 = &VAR_4->u.poly;
 int VAR_6;

 VAR_5->tail.assoclen = FUNC_4(VAR_4->assoclen);
 VAR_5->tail.cryptlen = FUNC_4(VAR_4->cryptlen);
 FUNC_9(VAR_5->src, &VAR_5->tail, sizeof(VAR_5->tail));

 FUNC_1(&VAR_5->req, VAR_4->flags,
       VAR_0, VAR_1);
 FUNC_3(&VAR_5->req, VAR_3->poly);
 FUNC_2(&VAR_5->req, VAR_5->src,
    VAR_4->tag, sizeof(VAR_5->tail));

 VAR_6 = FUNC_7(&VAR_5->req);
 if (VAR_6)
  return VAR_6;

 return FUNC_8(VAR_1);
}
