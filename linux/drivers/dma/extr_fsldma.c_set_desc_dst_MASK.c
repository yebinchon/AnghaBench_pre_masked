
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fsldma_chan {int feature; } ;
struct fsl_dma_ld_hw {int dst_addr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct fsldma_chan*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct fsldma_chan *VAR_3,
    struct fsl_dma_ld_hw *VAR_4, dma_addr_t VAR_5)
{
 u64 VAR_6;

 VAR_6 = ((VAR_3->feature & VAR_2) == VAR_1)
  ? ((u64)VAR_0 << 32) : 0;
 VAR_4->dst_addr = FUNC_0(VAR_3, VAR_6 | VAR_5, 64);
}
