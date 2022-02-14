
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_sg_dma_iter {scalar_t__ op_offset; scalar_t__ offset; scalar_t__ sg; } ;
struct mv_cesa_dma_iter {scalar_t__ op_len; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

bool FUNC_3(struct mv_cesa_dma_iter *VAR_0,
     struct mv_cesa_sg_dma_iter *VAR_1,
     unsigned int VAR_2)
{
 if (!VAR_1->sg)
  return 0;

 VAR_1->op_offset += VAR_2;
 VAR_1->offset += VAR_2;
 if (VAR_1->offset == FUNC_0(VAR_1->sg)) {
  if (FUNC_1(VAR_1->sg))
   return 0;
  VAR_1->offset = 0;
  VAR_1->sg = FUNC_2(VAR_1->sg);
 }

 if (VAR_1->op_offset == VAR_0->op_len)
  return 0;

 return 1;
}
