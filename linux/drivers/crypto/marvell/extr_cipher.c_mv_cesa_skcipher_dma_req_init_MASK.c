
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct skcipher_request {scalar_t__ src; scalar_t__ dst; TYPE_1__ base; } ;
struct TYPE_12__ {TYPE_2__* last; int * first; } ;
struct mv_cesa_req {TYPE_3__ chain; } ;
struct mv_cesa_skcipher_req {int src_nents; int dst_nents; struct mv_cesa_req base; } ;
struct TYPE_13__ {int op_len; } ;
struct mv_cesa_skcipher_dma_iter {int dst; TYPE_6__ base; int src; } ;
struct mv_cesa_op_ctx {int dummy; } ;
typedef int gfp_t ;
struct TYPE_14__ {int dev; } ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct mv_cesa_op_ctx*) ;
 int FUNC_1 (struct mv_cesa_op_ctx*) ;
 TYPE_9__* VAR_11 ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 struct mv_cesa_op_ctx* FUNC_5 (TYPE_3__*,struct mv_cesa_op_ctx const*,int,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_6__*,int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_8 (struct mv_cesa_req*) ;
 int FUNC_9 (struct mv_cesa_op_ctx*,int ) ;
 int FUNC_10 (struct mv_cesa_skcipher_dma_iter*,struct skcipher_request*) ;
 scalar_t__ FUNC_11 (struct mv_cesa_skcipher_dma_iter*) ;
 int FUNC_12 (TYPE_3__*) ;
 struct mv_cesa_skcipher_req* FUNC_13 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_14(struct skcipher_request *VAR_12,
      const struct mv_cesa_op_ctx *VAR_13)
{
 struct mv_cesa_skcipher_req *VAR_14 = FUNC_13(VAR_12);
 gfp_t VAR_15 = (VAR_12->base.flags & VAR_4) ?
        VAR_10 : VAR_9;
 struct mv_cesa_req *VAR_16 = &VAR_14->base;
 struct mv_cesa_skcipher_dma_iter VAR_17;
 bool VAR_18 = 0;
 int VAR_19;

 VAR_16->chain.first = ((void*)0);
 VAR_16->chain.last = ((void*)0);

 if (VAR_12->src != VAR_12->dst) {
  VAR_19 = FUNC_2(VAR_11->dev, VAR_12->src, VAR_14->src_nents,
     VAR_7);
  if (!VAR_19)
   return -VAR_8;

  VAR_19 = FUNC_2(VAR_11->dev, VAR_12->dst, VAR_14->dst_nents,
     VAR_6);
  if (!VAR_19) {
   VAR_19 = -VAR_8;
   goto err_unmap_src;
  }
 } else {
  VAR_19 = FUNC_2(VAR_11->dev, VAR_12->src, VAR_14->src_nents,
     VAR_5);
  if (!VAR_19)
   return -VAR_8;
 }

 FUNC_12(&VAR_16->chain);
 FUNC_10(&VAR_17, VAR_12);

 do {
  struct mv_cesa_op_ctx *VAR_20;

  VAR_20 = FUNC_5(&VAR_16->chain, VAR_13, VAR_18, VAR_15);
  if (FUNC_0(VAR_20)) {
   VAR_19 = FUNC_1(VAR_20);
   goto err_free_tdma;
  }
  VAR_18 = 1;

  FUNC_9(VAR_20, VAR_17.base.op_len);


  VAR_19 = FUNC_6(&VAR_16->chain, &VAR_17.base,
         &VAR_17.src, VAR_15);
  if (VAR_19)
   goto err_free_tdma;


  VAR_19 = FUNC_4(&VAR_16->chain, VAR_15);
  if (VAR_19)
   goto err_free_tdma;


  VAR_19 = FUNC_6(&VAR_16->chain, &VAR_17.base,
         &VAR_17.dst, VAR_15);
  if (VAR_19)
   goto err_free_tdma;

 } while (FUNC_11(&VAR_17));


 VAR_19 = FUNC_7(&VAR_16->chain, VAR_0,
        VAR_1,
        VAR_3, VAR_15);

 if (VAR_19)
  goto err_free_tdma;

 VAR_16->chain.last->flags |= VAR_2;

 return 0;

err_free_tdma:
 FUNC_8(VAR_16);
 if (VAR_12->dst != VAR_12->src)
  FUNC_3(VAR_11->dev, VAR_12->dst, VAR_14->dst_nents,
        VAR_6);

err_unmap_src:
 FUNC_3(VAR_11->dev, VAR_12->src, VAR_14->src_nents,
       VAR_12->dst != VAR_12->src ? VAR_7 : VAR_5);

 return VAR_19;
}
