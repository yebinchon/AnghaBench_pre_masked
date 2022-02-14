
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdc_dma {TYPE_1__* soc; } ;
struct mdc_chan {struct mdc_dma* mdma; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* disable_chan ) (struct mdc_chan*) ;} ;


 int FUNC_0 (struct dma_chan*) ;
 struct device* FUNC_1 (struct mdc_dma*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct mdc_chan*) ;
 struct mdc_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct mdc_chan *VAR_1 = FUNC_4(VAR_0);
 struct mdc_dma *VAR_2 = VAR_1->mdma;
 struct device *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_0);
 VAR_2->soc->disable_chan(VAR_1);
 FUNC_2(VAR_3);
}
