
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qce_sha_reqctx {int last_blk; scalar_t__ buflen; int sg; int tmpbuf; int buf; scalar_t__ nbytes_orig; int src_orig; } ;
struct qce_device {int (* async_req_enqueue ) (struct qce_device*,TYPE_1__*) ;} ;
struct qce_alg_template {struct qce_device* qce; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; scalar_t__ nbytes; int src; } ;


 struct qce_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct qce_device*,TYPE_1__*) ;
 struct qce_alg_template* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_0)
{
 struct qce_sha_reqctx *VAR_1 = FUNC_0(VAR_0);
 struct qce_alg_template *VAR_2 = FUNC_4(VAR_0->base.tfm);
 struct qce_device *VAR_3 = VAR_2->qce;

 if (!VAR_1->buflen)
  return 0;

 VAR_1->last_blk = 1;

 VAR_1->src_orig = VAR_0->src;
 VAR_1->nbytes_orig = VAR_0->nbytes;

 FUNC_1(VAR_1->tmpbuf, VAR_1->buf, VAR_1->buflen);
 FUNC_2(VAR_1->sg, VAR_1->tmpbuf, VAR_1->buflen);

 VAR_0->src = VAR_1->sg;
 VAR_0->nbytes = VAR_1->buflen;

 return VAR_3->async_req_enqueue(VAR_2->qce, &VAR_0->base);
}
