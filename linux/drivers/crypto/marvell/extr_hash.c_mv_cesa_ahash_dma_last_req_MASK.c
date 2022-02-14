
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_tdma_chain {int dummy; } ;
struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_ahash_dma_req {scalar_t__ padding_dma; int padding; } ;
struct TYPE_2__ {struct mv_cesa_ahash_dma_req dma; } ;
struct mv_cesa_ahash_req {int op_tmpl; int len; TYPE_1__ req; } ;
struct mv_cesa_ahash_dma_iter {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mv_cesa_op_ctx* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mv_cesa_op_ctx*) ;
 unsigned int FUNC_2 (scalar_t__,unsigned int) ;
 int FUNC_3 (struct mv_cesa_ahash_dma_req*,int ) ;
 unsigned int FUNC_4 (struct mv_cesa_ahash_req*,int ) ;
 int FUNC_5 (struct mv_cesa_tdma_chain*,scalar_t__,scalar_t__,unsigned int,int ,int ) ;
 struct mv_cesa_op_ctx* FUNC_6 (struct mv_cesa_tdma_chain*,int *,unsigned int,int ) ;
 int FUNC_7 (struct mv_cesa_tdma_chain*,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (struct mv_cesa_op_ctx*) ;
 int FUNC_9 (struct mv_cesa_op_ctx*,int ) ;
 int FUNC_10 (struct mv_cesa_op_ctx*,int ,int ) ;

__attribute__((used)) static struct mv_cesa_op_ctx *
FUNC_11(struct mv_cesa_tdma_chain *VAR_10,
      struct mv_cesa_ahash_dma_iter *VAR_11,
      struct mv_cesa_ahash_req *VAR_12,
      unsigned int VAR_13, gfp_t VAR_14)
{
 struct mv_cesa_ahash_dma_req *VAR_15 = &VAR_12->req.dma;
 unsigned int VAR_16, VAR_17, VAR_18 = 0;
 struct mv_cesa_op_ctx *VAR_19;
 int VAR_20;





 if (VAR_12->len <= VAR_5 && VAR_13) {
  VAR_19 = FUNC_6(VAR_10, &VAR_12->op_tmpl, VAR_13,
       VAR_14);
  if (FUNC_1(VAR_19))
   return VAR_19;

  FUNC_9(VAR_19, VAR_12->len);
  FUNC_10(VAR_19, FUNC_8(VAR_19) ?
      VAR_4 :
      VAR_3,
          VAR_2);

  VAR_20 = FUNC_7(VAR_10,
      VAR_0,
      VAR_1,
      VAR_8, VAR_14);
  if (VAR_20)
   return FUNC_0(-VAR_9);
  return VAR_19;
 }






 VAR_20 = FUNC_3(VAR_15, VAR_14);
 if (VAR_20)
  return FUNC_0(VAR_20);

 VAR_17 = FUNC_4(VAR_12, VAR_15->padding);

 VAR_16 = FUNC_2(VAR_6 - VAR_13, VAR_17);
 if (VAR_16) {
  VAR_20 = FUNC_5(VAR_10,
      VAR_1 +
      VAR_13,
      VAR_15->padding_dma,
      VAR_16, VAR_7,
      VAR_14);
  if (VAR_20)
   return FUNC_0(VAR_20);

  VAR_19 = FUNC_6(VAR_10, &VAR_12->op_tmpl, VAR_13 + VAR_16,
       VAR_14);
  if (FUNC_1(VAR_19))
   return VAR_19;

  if (VAR_16 == VAR_17)
   return VAR_19;

  VAR_18 += VAR_16;
 }

 VAR_20 = FUNC_5(VAR_10,
         VAR_1,
         VAR_15->padding_dma +
         VAR_18,
         VAR_17 - VAR_18,
         VAR_7,
         VAR_14);
 if (VAR_20)
  return FUNC_0(VAR_20);

 return FUNC_6(VAR_10, &VAR_12->op_tmpl, VAR_17 - VAR_18,
        VAR_14);
}
