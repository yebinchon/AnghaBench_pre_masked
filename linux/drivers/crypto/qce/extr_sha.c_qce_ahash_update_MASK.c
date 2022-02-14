
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct qce_sha_reqctx {unsigned int count; unsigned int buflen; unsigned int nbytes_orig; struct scatterlist* sg; int tmpbuf; scalar_t__ buf; struct scatterlist* src_orig; } ;
struct qce_device {int (* async_req_enqueue ) (struct qce_device*,TYPE_1__*) ;} ;
struct qce_alg_template {struct qce_device* qce; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {unsigned int nbytes; TYPE_1__ base; struct scatterlist* src; } ;


 int VAR_0 ;
 struct qce_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 struct crypto_ahash* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct crypto_ahash*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,struct scatterlist*,unsigned int,unsigned int,int ) ;
 int FUNC_6 (struct scatterlist*,int,struct scatterlist*) ;
 unsigned int FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (struct scatterlist*,int) ;
 int FUNC_9 (struct scatterlist*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct scatterlist*,int ,int) ;
 int FUNC_12 (struct qce_device*,TYPE_1__*) ;
 struct qce_alg_template* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ahash_request *VAR_1)
{
 struct crypto_ahash *VAR_2 = FUNC_1(VAR_1);
 struct qce_sha_reqctx *VAR_3 = FUNC_0(VAR_1);
 struct qce_alg_template *VAR_4 = FUNC_13(VAR_1->base.tfm);
 struct qce_device *VAR_5 = VAR_4->qce;
 struct scatterlist *VAR_6, *VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 VAR_12 = FUNC_3(FUNC_2(VAR_2));
 VAR_3->count += VAR_1->nbytes;


 VAR_8 = VAR_1->nbytes + VAR_3->buflen;

 if (VAR_8 <= VAR_12) {
  FUNC_5(VAR_3->buf + VAR_3->buflen, VAR_1->src,
      0, VAR_1->nbytes, 0);
  VAR_3->buflen += VAR_1->nbytes;
  return 0;
 }


 VAR_3->src_orig = VAR_1->src;
 VAR_3->nbytes_orig = VAR_1->nbytes;





 if (VAR_3->buflen)
  FUNC_4(VAR_3->tmpbuf, VAR_3->buf, VAR_3->buflen);


 VAR_10 = VAR_8 % VAR_12;
 if (VAR_10) {
  unsigned int VAR_13 = VAR_1->nbytes - VAR_10;
  FUNC_5(VAR_3->buf, VAR_1->src, VAR_13,
      VAR_10, 0);
 }


 VAR_11 = VAR_8 - VAR_10;

 VAR_9 = VAR_3->buflen;
 VAR_7 = VAR_6 = VAR_1->src;

 while (VAR_9 < VAR_11 && VAR_7) {
  if (VAR_9 + FUNC_7(VAR_7) > VAR_11)
   break;
  VAR_9 += FUNC_7(VAR_7);
  VAR_6 = VAR_7;
  VAR_7 = FUNC_10(VAR_7);
 }

 if (!VAR_6)
  return -VAR_0;

 FUNC_9(VAR_6);

 if (VAR_3->buflen) {
  FUNC_8(VAR_3->sg, 2);
  FUNC_11(VAR_3->sg, VAR_3->tmpbuf, VAR_3->buflen);
  FUNC_6(VAR_3->sg, 2, VAR_1->src);
  VAR_1->src = VAR_3->sg;
 }

 VAR_1->nbytes = VAR_11;
 VAR_3->buflen = VAR_10;

 return VAR_5->async_req_enqueue(VAR_4->qce, &VAR_1->base);
}
