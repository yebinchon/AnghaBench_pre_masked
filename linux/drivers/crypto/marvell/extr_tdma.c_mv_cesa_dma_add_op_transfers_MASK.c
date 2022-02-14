
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_cesa_tdma_chain {int dummy; } ;
struct mv_cesa_sg_dma_iter {scalar_t__ dir; scalar_t__ op_offset; scalar_t__ offset; int sg; } ;
struct mv_cesa_dma_iter {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mv_cesa_tdma_chain*,scalar_t__,scalar_t__,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (struct mv_cesa_dma_iter*,struct mv_cesa_sg_dma_iter*,unsigned int) ;
 unsigned int FUNC_2 (struct mv_cesa_dma_iter*,struct mv_cesa_sg_dma_iter*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct mv_cesa_tdma_chain *VAR_4,
     struct mv_cesa_dma_iter *VAR_5,
     struct mv_cesa_sg_dma_iter *VAR_6,
     gfp_t VAR_7)
{
 u32 VAR_8 = VAR_6->dir == VAR_3 ?
      VAR_1 : VAR_2;
 unsigned int VAR_9;

 do {
  dma_addr_t VAR_10, VAR_11;
  int VAR_12;

  VAR_9 = FUNC_2(VAR_5, VAR_6);
  if (VAR_6->dir == VAR_3) {
   VAR_10 = VAR_0 + VAR_6->op_offset;
   VAR_11 = FUNC_3(VAR_6->sg) + VAR_6->offset;
  } else {
   VAR_10 = FUNC_3(VAR_6->sg) + VAR_6->offset;
   VAR_11 = VAR_0 + VAR_6->op_offset;
  }

  VAR_12 = FUNC_0(VAR_4, VAR_10, VAR_11, VAR_9,
          VAR_8, VAR_7);
  if (VAR_12)
   return VAR_12;

 } while (FUNC_1(VAR_5, VAR_6, VAR_9));

 return 0;
}
