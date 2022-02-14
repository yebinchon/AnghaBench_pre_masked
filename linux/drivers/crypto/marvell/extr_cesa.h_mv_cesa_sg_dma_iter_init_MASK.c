
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mv_cesa_sg_dma_iter {int dir; struct scatterlist* sg; scalar_t__ offset; scalar_t__ op_offset; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;



__attribute__((used)) static inline void FUNC_0(struct mv_cesa_sg_dma_iter *VAR_0,
         struct scatterlist *VAR_1,
         enum dma_data_direction VAR_2)
{
 VAR_0->op_offset = 0;
 VAR_0->offset = 0;
 VAR_0->sg = VAR_1;
 VAR_0->dir = VAR_2;
}
