
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int u32 ;
struct TYPE_17__ {TYPE_3__* first; TYPE_2__* last; } ;
struct mv_cesa_req {TYPE_4__ chain; } ;
struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_ahash_req {scalar_t__ src_nents; scalar_t__ cache_ptr; scalar_t__ last_req; int op_tmpl; struct mv_cesa_req base; } ;
struct TYPE_18__ {unsigned int op_len; scalar_t__ len; } ;
struct TYPE_19__ {scalar_t__ sg; } ;
struct mv_cesa_ahash_dma_iter {TYPE_6__ base; TYPE_7__ src; } ;
struct TYPE_14__ {int flags; } ;
struct ahash_request {int src; scalar_t__ nbytes; TYPE_1__ base; } ;
typedef int gfp_t ;
struct TYPE_16__ {int flags; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_13__ {int dev; } ;


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
 scalar_t__ FUNC_0 (struct mv_cesa_op_ctx*) ;
 int FUNC_1 (struct mv_cesa_op_ctx*) ;
 struct mv_cesa_ahash_req* FUNC_2 (struct ahash_request*) ;
 TYPE_12__* VAR_10 ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (TYPE_4__*,struct mv_cesa_ahash_req*,int ) ;
 struct mv_cesa_op_ctx* FUNC_6 (TYPE_4__*,struct mv_cesa_ahash_dma_iter*,struct mv_cesa_ahash_req*,unsigned int,int ) ;
 int FUNC_7 (struct ahash_request*) ;
 int FUNC_8 (struct mv_cesa_ahash_dma_iter*,struct ahash_request*) ;
 int FUNC_9 (struct mv_cesa_ahash_dma_iter*) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 struct mv_cesa_op_ctx* FUNC_11 (TYPE_4__*,int *,unsigned int,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_6__*,TYPE_7__*,int ) ;
 int FUNC_13 (struct mv_cesa_req*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_16(struct ahash_request *VAR_11)
{
 struct mv_cesa_ahash_req *VAR_12 = FUNC_2(VAR_11);
 gfp_t VAR_13 = (VAR_11->base.flags & VAR_5) ?
        VAR_9 : VAR_8;
 struct mv_cesa_req *VAR_14 = &VAR_12->base;
 struct mv_cesa_ahash_dma_iter VAR_15;
 struct mv_cesa_op_ctx *VAR_16 = ((void*)0);
 unsigned int VAR_17;
 bool VAR_18 = 0;
 int VAR_19;
 u32 VAR_20;

 VAR_14->chain.first = ((void*)0);
 VAR_14->chain.last = ((void*)0);

 if (!FUNC_14(&VAR_12->op_tmpl))
  VAR_18 = 1;

 if (VAR_12->src_nents) {
  VAR_19 = FUNC_3(VAR_10->dev, VAR_11->src, VAR_12->src_nents,
     VAR_6);
  if (!VAR_19) {
   VAR_19 = -VAR_7;
   goto err;
  }
 }

 FUNC_15(&VAR_14->chain);
 FUNC_8(&VAR_15, VAR_11);





 VAR_19 = FUNC_5(&VAR_14->chain, VAR_12, VAR_13);
 if (VAR_19)
  goto err_free_tdma;

 if (VAR_15.src.sg) {





  while (1) {
   VAR_19 = FUNC_12(&VAR_14->chain,
          &VAR_15.base,
          &VAR_15.src, VAR_13);
   if (VAR_19)
    goto err_free_tdma;

   VAR_17 = VAR_15.base.op_len;

   if (!FUNC_9(&VAR_15))
    break;

   VAR_16 = FUNC_11(&VAR_14->chain, &VAR_12->op_tmpl,
        VAR_17, VAR_13);
   if (FUNC_0(VAR_16)) {
    VAR_19 = FUNC_1(VAR_16);
    goto err_free_tdma;
   }
  }
 } else {

  VAR_17 = VAR_15.base.op_len;
 }






 if (VAR_12->last_req)
  VAR_16 = FUNC_6(&VAR_14->chain, &VAR_15, VAR_12,
      VAR_17, VAR_13);
 else if (VAR_17)
  VAR_16 = FUNC_11(&VAR_14->chain, &VAR_12->op_tmpl,
       VAR_17, VAR_13);

 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_1(VAR_16);
  goto err_free_tdma;
 }







 VAR_20 = VAR_14->chain.last->flags & VAR_4;

 if (VAR_16 && VAR_20 != VAR_2) {

  VAR_19 = FUNC_10(&VAR_14->chain, VAR_13);
  if (VAR_19)
   goto err_free_tdma;
 }

 if (!VAR_12->last_req)
  VAR_12->cache_ptr = VAR_11->nbytes + VAR_12->cache_ptr -
      VAR_15.base.len;
 else
  VAR_12->cache_ptr = 0;

 VAR_14->chain.last->flags |= VAR_1;

 if (VAR_20 != VAR_2)
  VAR_14->chain.last->flags |= VAR_0;

 if (VAR_18) {





  VAR_14->chain.first->flags |= VAR_3;
 }

 return 0;

err_free_tdma:
 FUNC_13(VAR_14);
 FUNC_4(VAR_10->dev, VAR_11->src, VAR_12->src_nents, VAR_6);

err:
 FUNC_7(VAR_11);

 return VAR_19;
}
