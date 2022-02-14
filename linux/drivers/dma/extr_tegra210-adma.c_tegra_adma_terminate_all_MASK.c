
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct tegra_adma_chan {TYPE_1__ vc; scalar_t__ desc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tegra_adma_chan*) ;
 int FUNC_4 (struct tegra_adma_chan*) ;
 struct tegra_adma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_1)
{
 struct tegra_adma_chan *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 FUNC_1(&VAR_2->vc.lock, VAR_3);

 if (VAR_2->desc)
  FUNC_4(VAR_2);

 FUNC_3(VAR_2);
 FUNC_7(&VAR_2->vc, &VAR_0);
 FUNC_2(&VAR_2->vc.lock, VAR_3);
 FUNC_6(&VAR_2->vc, &VAR_0);

 return 0;
}
