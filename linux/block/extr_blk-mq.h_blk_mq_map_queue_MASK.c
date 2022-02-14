
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct blk_mq_ctx {struct blk_mq_hw_ctx** hctxs; } ;
typedef enum hctx_type { ____Placeholder_hctx_type } hctx_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static inline struct blk_mq_hw_ctx *FUNC_0(struct request_queue *VAR_6,
           unsigned int VAR_7,
           struct blk_mq_ctx *VAR_8)
{
 enum hctx_type VAR_9 = VAR_0;




 if (VAR_7 & VAR_3)
  VAR_9 = VAR_1;
 else if ((VAR_7 & VAR_4) == VAR_5)
  VAR_9 = VAR_2;

 return VAR_8->hctxs[VAR_9];
}
