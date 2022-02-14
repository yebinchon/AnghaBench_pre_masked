
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cookie; } ;
struct ep93xx_dma_desc {TYPE_1__ txd; } ;
struct ep93xx_dma_chan {int flags; int active; } ;


 int VAR_0 ;
 struct ep93xx_dma_desc* FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct ep93xx_dma_chan *VAR_1)
{
 struct ep93xx_dma_desc *VAR_2;

 FUNC_1(&VAR_1->active);

 if (FUNC_2(VAR_0, &VAR_1->flags))
  return 1;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return 0;





 return !VAR_2->txd.cookie;
}
