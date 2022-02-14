
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma_gcr; int dma_ocp_sysconfig; int dma_irqenable_l1; int dma_irqenable_l0; } ;
struct TYPE_3__ {int (* dma_read ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(void)
{
 VAR_4.dma_irqenable_l0 =
  VAR_5->dma_read(VAR_1, 0);
 VAR_4.dma_irqenable_l1 =
  VAR_5->dma_read(VAR_2, 0);
 VAR_4.dma_ocp_sysconfig =
  VAR_5->dma_read(VAR_3, 0);
 VAR_4.dma_gcr = VAR_5->dma_read(VAR_0, 0);
}
