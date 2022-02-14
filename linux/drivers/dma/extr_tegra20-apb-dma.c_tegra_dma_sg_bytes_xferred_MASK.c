
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_dma_sg_req {unsigned int req_len; long words_xferred; int node; } ;
struct tegra_dma_channel {TYPE_2__* tdma; int pending_sg_req; } ;
struct TYPE_4__ {TYPE_1__* chip_data; } ;
struct TYPE_3__ {scalar_t__ support_separate_wcount_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (struct tegra_dma_channel*,struct tegra_dma_sg_req*,unsigned long) ;
 int FUNC_2 (int *,int *) ;
 unsigned long FUNC_3 (struct tegra_dma_channel*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct tegra_dma_channel *VAR_3,
            struct tegra_dma_sg_req *VAR_4)
{
 unsigned long VAR_5, VAR_6 = 0;

 if (!FUNC_2(&VAR_4->node, &VAR_3->pending_sg_req))
  return 0;

 if (VAR_3->tdma->chip_data->support_separate_wcount_reg)
  VAR_6 = FUNC_3(VAR_3, VAR_1);

 VAR_5 = FUNC_3(VAR_3, VAR_0);

 if (!VAR_3->tdma->chip_data->support_separate_wcount_reg)
  VAR_6 = VAR_5;

 if (VAR_5 & VAR_2)
  return VAR_4->req_len;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_6);

 if (!VAR_6) {
  if (VAR_4->words_xferred)
   VAR_6 = VAR_4->req_len - 4;

 } else if (VAR_6 < VAR_4->words_xferred) {
  FUNC_0(1);

  VAR_6 = VAR_4->req_len - 4;
 } else {
  VAR_4->words_xferred = VAR_6;
 }

 return VAR_6;
}
