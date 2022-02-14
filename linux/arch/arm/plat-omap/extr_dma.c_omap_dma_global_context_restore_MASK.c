
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev_id; } ;
struct TYPE_5__ {int dma_gcr; int dma_ocp_sysconfig; int dma_irqenable_l0; int dma_irqenable_l1; } ;
struct TYPE_4__ {int (* dma_write ) (int,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int ) ;

void FUNC_7(void)
{
 int VAR_10;

 VAR_9->dma_write(VAR_8.dma_gcr, VAR_1, 0);
 VAR_9->dma_write(VAR_8.dma_ocp_sysconfig,
  VAR_5, 0);
 VAR_9->dma_write(VAR_8.dma_irqenable_l0,
  VAR_2, 0);
 VAR_9->dma_write(VAR_8.dma_irqenable_l1,
  VAR_3, 0);

 if (FUNC_0(VAR_0))
  VAR_9->dma_write(0x3 , VAR_4, 0);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  if (VAR_6[VAR_10].dev_id != -1)
   FUNC_1(VAR_10);
}
