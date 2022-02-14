
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int task; } ;
struct tegra_adma_chan {int sreq_dir; scalar_t__ sreq_index; int irq; TYPE_1__ vc; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct tegra_adma_chan*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tegra_adma_chan*) ;
 int FUNC_4 (struct dma_chan*) ;
 struct tegra_adma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_1)
{
 struct tegra_adma_chan *VAR_2 = FUNC_5(VAR_1);

 FUNC_4(VAR_1);
 FUNC_6(&VAR_2->vc);
 FUNC_2(&VAR_2->vc.task);
 FUNC_0(VAR_2->irq, VAR_2);
 FUNC_1(FUNC_3(VAR_2));

 VAR_2->sreq_index = 0;
 VAR_2->sreq_dir = VAR_0;
}
