
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_sha_reqctx {unsigned int buf_cnt; unsigned int total; scalar_t__ in_sg; int rembuf; scalar_t__ in_sg_chain; scalar_t__ buf; scalar_t__ last; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {unsigned int nbytes; scalar_t__ src; } ;


 int VAR_0 ;
 struct sahara_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 struct crypto_ahash* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct crypto_ahash*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 int FUNC_6 (scalar_t__,scalar_t__,unsigned int,unsigned int,int ) ;
 int FUNC_7 (scalar_t__,int,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_11(struct ahash_request *VAR_1)
{
 struct crypto_ahash *VAR_2 = FUNC_1(VAR_1);
 struct sahara_sha_reqctx *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_3(FUNC_2(VAR_2));


 VAR_6 = VAR_3->buf_cnt + VAR_1->nbytes;


 if (!VAR_3->last && (VAR_6 < VAR_5)) {

  FUNC_6(VAR_3->buf + VAR_3->buf_cnt, VAR_1->src,
      0, VAR_1->nbytes, 0);
  VAR_3->buf_cnt += VAR_1->nbytes;

  return 0;
 }


 if (VAR_3->buf_cnt)
  FUNC_4(VAR_3->rembuf, VAR_3->buf, VAR_3->buf_cnt);


 VAR_4 = VAR_3->last ? 0 : VAR_6 & (VAR_5 - 1);
 if (VAR_4) {
  unsigned int VAR_7 = VAR_1->nbytes - VAR_4;

  FUNC_6(VAR_3->buf, VAR_1->src, VAR_7,
     VAR_4, 0);
 }


 VAR_1->nbytes = VAR_1->nbytes - VAR_4;

 FUNC_5(VAR_1->src, VAR_1->nbytes);


 if (VAR_3->buf_cnt && VAR_1->nbytes) {
  FUNC_9(VAR_3->in_sg_chain, 2);
  FUNC_10(VAR_3->in_sg_chain, VAR_3->rembuf, VAR_3->buf_cnt);

  FUNC_7(VAR_3->in_sg_chain, 2, VAR_1->src);

  VAR_3->total = VAR_1->nbytes + VAR_3->buf_cnt;
  VAR_3->in_sg = VAR_3->in_sg_chain;

  VAR_1->src = VAR_3->in_sg_chain;

 } else if (VAR_3->buf_cnt) {
  if (VAR_1->src)
   VAR_3->in_sg = VAR_1->src;
  else
   VAR_3->in_sg = VAR_3->in_sg_chain;

  FUNC_8(VAR_3->in_sg, VAR_3->rembuf, VAR_3->buf_cnt);
  VAR_3->total = VAR_3->buf_cnt;

 } else {
  VAR_3->in_sg = VAR_1->src;
  VAR_3->total = VAR_1->nbytes;
  VAR_1->src = VAR_3->in_sg;
 }


 VAR_3->buf_cnt = VAR_4;

 return -VAR_0;
}
