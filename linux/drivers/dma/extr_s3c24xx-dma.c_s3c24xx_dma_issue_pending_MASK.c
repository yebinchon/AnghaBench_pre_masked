
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct s3c24xx_dma_chan {scalar_t__ state; TYPE_1__ vc; int phy; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct s3c24xx_dma_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct s3c24xx_dma_chan* FUNC_3 (struct dma_chan*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_1)
{
 struct s3c24xx_dma_chan *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->vc.lock, VAR_3);
 if (FUNC_4(&VAR_2->vc)) {
  if (!VAR_2->phy && VAR_2->state != VAR_0)
   FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_2->vc.lock, VAR_3);
}
