
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int prev; } ;
struct fsldma_chan {TYPE_2__ ld_pending; } ;
struct TYPE_4__ {int phys; } ;
struct fsl_desc_sw {int tx_list; TYPE_1__ async_tx; int hw; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (struct fsldma_chan*,int *,int ) ;
 struct fsl_desc_sw* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fsldma_chan *VAR_0, struct fsl_desc_sw *VAR_1)
{
 struct fsl_desc_sw *VAR_2 = FUNC_3(VAR_0->ld_pending.prev);

 if (FUNC_0(&VAR_0->ld_pending))
  goto out_splice;
 FUNC_2(VAR_0, &VAR_2->hw, VAR_1->async_tx.phys);





out_splice:
 FUNC_1(&VAR_1->tx_list, &VAR_0->ld_pending);
}
