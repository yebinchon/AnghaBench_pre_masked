
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsldma_chan {int dummy; } ;
struct fsl_dma_ld_hw {int count; } ;


 int FUNC_0 (struct fsldma_chan*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fsldma_chan *VAR_0,
    struct fsl_dma_ld_hw *VAR_1, u32 VAR_2)
{
 VAR_1->count = FUNC_0(VAR_0, VAR_2, 32);
}
