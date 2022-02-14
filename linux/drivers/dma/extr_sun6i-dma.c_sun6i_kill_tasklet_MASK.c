
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct sun6i_dma_dev {int task; int irq; TYPE_1__ slave; int tasklet_shutdown; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct sun6i_dma_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct sun6i_dma_dev *VAR_0)
{

 FUNC_4(0, VAR_0->base + FUNC_0(0));
 FUNC_4(0, VAR_0->base + FUNC_0(1));


 FUNC_1(&VAR_0->tasklet_shutdown);


 FUNC_2(VAR_0->slave.dev, VAR_0->irq, VAR_0);


 FUNC_3(&VAR_0->task);
}
