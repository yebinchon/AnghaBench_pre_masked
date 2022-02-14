
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table; } ;
struct rvt_dev_info {TYPE_1__ lkey_table; scalar_t__ dma_mr; } ;


 int FUNC_0 (struct rvt_dev_info*,char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct rvt_dev_info *VAR_0)
{
 if (VAR_0->dma_mr)
  FUNC_0(VAR_0, "DMA MR not null!\n");

 FUNC_1(VAR_0->lkey_table.table);
}
