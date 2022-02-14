
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iproc_reqctx_s {int bd_suppress; int is_final; scalar_t__ total_todo; int chan_idx; scalar_t__ dst_nents; scalar_t__ dst_skip; int * dst_sg; scalar_t__ src_nents; scalar_t__ src_skip; int src_sg; int mb_mssg; struct iproc_ctx_s* ctx; TYPE_1__* parent; int gfp; } ;
struct iproc_ctx_s {int authkeylen; int authkey; } ;
struct crypto_ahash {int dummy; } ;
struct brcm_message {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct ahash_request {int nbytes; int result; int src; TYPE_1__ base; } ;
struct TYPE_5__ {scalar_t__ spu_type; } ;
struct TYPE_6__ {TYPE_2__ spu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct iproc_reqctx_s* FUNC_0 (struct ahash_request*) ;
 struct iproc_ctx_s* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct crypto_ahash*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct iproc_reqctx_s*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct iproc_reqctx_s*) ;

__attribute__((used)) static int FUNC_11(struct ahash_request *VAR_8)
{
 struct iproc_reqctx_s *VAR_9 = FUNC_0(VAR_8);
 struct crypto_ahash *VAR_10 = FUNC_2(VAR_8);
 struct iproc_ctx_s *VAR_11 = FUNC_1(VAR_10);
 int VAR_12 = 0;
 const char *VAR_13;

 FUNC_6("ahash_enqueue() nbytes:%u\n", VAR_8->nbytes);

 VAR_9->gfp = (VAR_8->base.flags & (VAR_0 |
         VAR_1)) ? VAR_5 : VAR_4;
 VAR_9->parent = &VAR_8->base;
 VAR_9->ctx = VAR_11;
 VAR_9->bd_suppress = 1;
 FUNC_8(&VAR_9->mb_mssg, 0, sizeof(struct brcm_message));


 VAR_9->src_sg = VAR_8->src;
 VAR_9->src_skip = 0;
 VAR_9->src_nents = 0;
 VAR_9->dst_sg = ((void*)0);
 VAR_9->dst_skip = 0;
 VAR_9->dst_nents = 0;


 if ((VAR_9->is_final == 1) && (VAR_9->total_todo == 0) &&
     (VAR_7.spu.spu_type == VAR_6)) {
  VAR_13 = FUNC_4(FUNC_3(VAR_10));
  FUNC_6("Doing %sfinal %s zero-len hash request in software\n",
    VAR_9->is_final ? "" : "non-", VAR_13);
  VAR_12 = FUNC_5((unsigned char *)VAR_13, VAR_8->result,
          ((void*)0), 0, ((void*)0), 0, VAR_11->authkey,
          VAR_11->authkeylen);
  if (VAR_12 < 0)
   FUNC_6("Hash request failed with error %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9->chan_idx = FUNC_9();

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12 != -VAR_3)

  FUNC_10(VAR_9);

 if (VAR_12 == -VAR_2)




  VAR_12 = 0;

 return VAR_12;
}
