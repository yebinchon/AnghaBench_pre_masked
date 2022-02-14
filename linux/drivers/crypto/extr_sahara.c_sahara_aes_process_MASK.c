
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_dev {int flags; int nb_in_sg; int in_sg; int device; int nb_out_sg; int out_sg; int dma_completion; struct sahara_ctx* ctx; int iv_base; int total; } ;
struct sahara_ctx {int dummy; } ;
struct sahara_aes_reqctx {int mode; } ;
struct ablkcipher_request {int info; int dst; int src; int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sahara_aes_reqctx* FUNC_0 (struct ablkcipher_request*) ;
 struct sahara_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 struct sahara_dev* VAR_8 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sahara_dev*) ;
 unsigned long FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct ablkcipher_request *VAR_9)
{
 struct sahara_dev *VAR_10 = VAR_8;
 struct sahara_ctx *VAR_11;
 struct sahara_aes_reqctx *VAR_12;
 int VAR_13;
 unsigned long VAR_14;


 FUNC_3(VAR_10->device,
  "dispatch request (nbytes=%d, src=%p, dst=%p)\n",
  VAR_9->nbytes, VAR_9->src, VAR_9->dst);


 VAR_10->total = VAR_9->nbytes;
 VAR_10->in_sg = VAR_9->src;
 VAR_10->out_sg = VAR_9->dst;

 VAR_12 = FUNC_0(VAR_9);
 VAR_11 = FUNC_1(FUNC_2(VAR_9));
 VAR_12->mode &= VAR_6;
 VAR_10->flags = (VAR_10->flags & ~VAR_6) | VAR_12->mode;

 if ((VAR_10->flags & VAR_5) && VAR_9->info)
  FUNC_6(VAR_10->iv_base, VAR_9->info, VAR_0);


 VAR_10->ctx = VAR_11;

 FUNC_8(&VAR_10->dma_completion);

 VAR_13 = FUNC_9(VAR_10);
 if (VAR_13)
  return -VAR_3;

 VAR_14 = FUNC_10(&VAR_10->dma_completion,
    FUNC_7(VAR_7));
 if (!VAR_14) {
  FUNC_4(VAR_10->device, "AES timeout\n");
  return -VAR_4;
 }

 FUNC_5(VAR_10->device, VAR_10->out_sg, VAR_10->nb_out_sg,
  VAR_1);
 FUNC_5(VAR_10->device, VAR_10->in_sg, VAR_10->nb_in_sg,
  VAR_2);

 return 0;
}
