
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_sg_dma_iter {scalar_t__ offset; int sg; scalar_t__ op_offset; } ;
struct mv_cesa_dma_iter {scalar_t__ op_len; } ;


 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int
FUNC_2(struct mv_cesa_dma_iter *VAR_0,
      struct mv_cesa_sg_dma_iter *VAR_1)
{
 return FUNC_0(VAR_0->op_len - VAR_1->op_offset,
     FUNC_1(VAR_1->sg) - VAR_1->offset);
}
