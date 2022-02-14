
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dir; int dev_type; } ;
struct d40_chan {TYPE_2__ dma_cfg; TYPE_1__* base; } ;
struct TYPE_3__ {int rev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct d40_chan*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct d40_chan *VAR_3)
{
 if (VAR_3->base->rev < 3)
  return;

 if ((VAR_3->dma_cfg.dir == VAR_1) ||
     (VAR_3->dma_cfg.dir == VAR_0))
  FUNC_0(VAR_3, VAR_3->dma_cfg.dev_type, 1);

 if ((VAR_3->dma_cfg.dir == VAR_2) ||
     (VAR_3->dma_cfg.dir == VAR_0))
  FUNC_0(VAR_3, VAR_3->dma_cfg.dev_type, 0);
}
