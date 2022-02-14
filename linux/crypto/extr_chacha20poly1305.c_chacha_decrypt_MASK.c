
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct chacha_req {int req; int iv; } ;
struct TYPE_2__ {struct chacha_req chacha; } ;
struct chachapoly_req_ctx {scalar_t__ cryptlen; int flags; int dst; int src; TYPE_1__ u; } ;
struct chachapoly_ctx {int chacha; } ;
struct aead_request {int assoclen; int dst; int src; } ;


 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct aead_request*,int) ;
 struct chachapoly_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct aead_request*) ;
 struct scatterlist* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,int ,int ,struct aead_request*) ;
 int FUNC_8 (int *,struct scatterlist*,struct scatterlist*,scalar_t__,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_1)
{
 struct chachapoly_ctx *VAR_2 = FUNC_2(FUNC_3(VAR_1));
 struct chachapoly_req_ctx *VAR_3 = FUNC_0(VAR_1);
 struct chacha_req *VAR_4 = &VAR_3->u.chacha;
 struct scatterlist *VAR_5, *VAR_6;
 int VAR_7;

 if (VAR_3->cryptlen == 0)
  goto skip;

 FUNC_1(VAR_4->iv, VAR_1, 1);

 VAR_5 = FUNC_6(VAR_3->src, VAR_1->src, VAR_1->assoclen);
 VAR_6 = VAR_5;
 if (VAR_1->src != VAR_1->dst)
  VAR_6 = FUNC_6(VAR_3->dst, VAR_1->dst, VAR_1->assoclen);

 FUNC_7(&VAR_4->req, VAR_3->flags,
          VAR_0, VAR_1);
 FUNC_9(&VAR_4->req, VAR_2->chacha);
 FUNC_8(&VAR_4->req, VAR_5, VAR_6,
       VAR_3->cryptlen, VAR_4->iv);
 VAR_7 = FUNC_4(&VAR_4->req);
 if (VAR_7)
  return VAR_7;

skip:
 return FUNC_5(VAR_1);
}
