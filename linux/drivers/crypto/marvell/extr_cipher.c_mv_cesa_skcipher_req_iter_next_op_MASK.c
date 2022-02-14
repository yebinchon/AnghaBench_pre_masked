
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ op_offset; } ;
struct TYPE_3__ {scalar_t__ op_offset; } ;
struct mv_cesa_skcipher_dma_iter {int base; TYPE_2__ dst; TYPE_1__ src; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool
FUNC_1(struct mv_cesa_skcipher_dma_iter *VAR_0)
{
 VAR_0->src.op_offset = 0;
 VAR_0->dst.op_offset = 0;

 return FUNC_0(&VAR_0->base);
}
