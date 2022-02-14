
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmatest_params {scalar_t__ max_channels; } ;
struct dmatest_info {scalar_t__ nr_channels; struct dmatest_params params; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transaction_type { ____Placeholder_dma_transaction_type } dma_transaction_type ;
typedef int dma_cap_mask_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dma_chan*) ;
 struct dma_chan* FUNC_3 (int ,int ,struct dmatest_params*) ;
 scalar_t__ FUNC_4 (struct dmatest_info*,struct dma_chan*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct dmatest_info *VAR_1,
        enum dma_transaction_type VAR_2)
{
 dma_cap_mask_t VAR_3;

 FUNC_1(VAR_3);
 FUNC_0(VAR_2, VAR_3);
 for (;;) {
  struct dmatest_params *VAR_4 = &VAR_1->params;
  struct dma_chan *VAR_5;

  VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_4);
  if (VAR_5) {
   if (FUNC_4(VAR_1, VAR_5)) {
    FUNC_2(VAR_5);
    break;
   }
  } else
   break;
  if (VAR_4->max_channels &&
      VAR_1->nr_channels >= VAR_4->max_channels)
   break;
 }
}
