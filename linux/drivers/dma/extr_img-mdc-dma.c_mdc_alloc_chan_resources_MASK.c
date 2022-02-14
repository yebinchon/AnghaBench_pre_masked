
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdc_chan {int mdma; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct mdc_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_0)
{
 struct mdc_chan *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2 = FUNC_0(VAR_1->mdma);

 return FUNC_1(VAR_2);
}
