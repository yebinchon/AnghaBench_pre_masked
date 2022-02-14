
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cryp_reqctx {int mode; } ;
struct stm32_cryp_ctx {struct stm32_cryp* cryp; } ;
struct stm32_cryp {int flags; int in_sg_len; int out_sg_len; struct aead_request* areq; scalar_t__ total_out; int out_walk; int out_sg; int in_sg; int in_walk; int dev; scalar_t__ total_in; int out_sg_save; scalar_t__ total_out_save; scalar_t__ total_in_save; scalar_t__ authsize; struct ablkcipher_request* req; struct stm32_cryp_ctx* ctx; int hw_blocksize; } ;
struct aead_request {scalar_t__ assoclen; int dst; int src; scalar_t__ cryptlen; } ;
struct ablkcipher_request {int dst; int src; scalar_t__ nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct stm32_cryp_reqctx* FUNC_0 (struct ablkcipher_request*) ;
 struct stm32_cryp_reqctx* FUNC_1 (struct aead_request*) ;
 struct stm32_cryp_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct ablkcipher_request*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct stm32_cryp_ctx* FUNC_5 (int ) ;
 int FUNC_6 (struct aead_request*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct stm32_cryp*) ;
 scalar_t__ FUNC_9 (struct stm32_cryp*) ;
 scalar_t__ FUNC_10 (struct stm32_cryp*) ;
 scalar_t__ FUNC_11 (struct stm32_cryp*) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,int ) ;
 void* FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (struct stm32_cryp*) ;
 int FUNC_16 (struct stm32_cryp*) ;

__attribute__((used)) static int FUNC_17(struct ablkcipher_request *VAR_5,
      struct aead_request *VAR_6)
{
 struct stm32_cryp_ctx *VAR_7;
 struct stm32_cryp *VAR_8;
 struct stm32_cryp_reqctx *VAR_9;
 int VAR_10;

 if (!VAR_5 && !VAR_6)
  return -VAR_2;

 VAR_7 = VAR_5 ? FUNC_2(FUNC_3(VAR_5)) :
      FUNC_5(FUNC_6(VAR_6));

 VAR_8 = VAR_7->cryp;

 if (!VAR_8)
  return -VAR_3;

 VAR_9 = VAR_5 ? FUNC_0(VAR_5) : FUNC_1(VAR_6);
 VAR_9->mode &= VAR_4;

 VAR_7->cryp = VAR_8;

 VAR_8->flags = (VAR_8->flags & ~VAR_4) | VAR_9->mode;
 VAR_8->hw_blocksize = FUNC_8(VAR_8) ? VAR_0 : VAR_1;
 VAR_8->ctx = VAR_7;

 if (VAR_5) {
  VAR_8->req = VAR_5;
  VAR_8->areq = ((void*)0);
  VAR_8->total_in = VAR_5->nbytes;
  VAR_8->total_out = VAR_8->total_in;
 } else {
  VAR_8->areq = VAR_6;
  VAR_8->req = ((void*)0);
  VAR_8->authsize = FUNC_4(FUNC_6(VAR_6));
  VAR_8->total_in = VAR_6->assoclen + VAR_6->cryptlen;
  if (FUNC_10(VAR_8))

   VAR_8->total_out = VAR_8->total_in + VAR_8->authsize;
  else

   VAR_8->total_out = VAR_8->total_in - VAR_8->authsize;
 }

 VAR_8->total_in_save = VAR_8->total_in;
 VAR_8->total_out_save = VAR_8->total_out;

 VAR_8->in_sg = VAR_5 ? VAR_5->src : VAR_6->src;
 VAR_8->out_sg = VAR_5 ? VAR_5->dst : VAR_6->dst;
 VAR_8->out_sg_save = VAR_8->out_sg;

 VAR_8->in_sg_len = FUNC_14(VAR_8->in_sg, VAR_8->total_in);
 if (VAR_8->in_sg_len < 0) {
  FUNC_7(VAR_8->dev, "Cannot get in_sg_len\n");
  VAR_10 = VAR_8->in_sg_len;
  return VAR_10;
 }

 VAR_8->out_sg_len = FUNC_14(VAR_8->out_sg, VAR_8->total_out);
 if (VAR_8->out_sg_len < 0) {
  FUNC_7(VAR_8->dev, "Cannot get out_sg_len\n");
  VAR_10 = VAR_8->out_sg_len;
  return VAR_10;
 }

 VAR_10 = FUNC_15(VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_13(&VAR_8->in_walk, VAR_8->in_sg);
 FUNC_13(&VAR_8->out_walk, VAR_8->out_sg);

 if (FUNC_11(VAR_8) || FUNC_9(VAR_8)) {

  FUNC_12(&VAR_8->out_walk, VAR_8->areq->assoclen);
  VAR_8->total_out -= VAR_8->areq->assoclen;
 }

 VAR_10 = FUNC_16(VAR_8);
 return VAR_10;
}
