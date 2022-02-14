
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct dw_dma {TYPE_1__ dma; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct dw_dma *VAR_0)
{
 struct device *VAR_1 = VAR_0->dma.dev;

 if (!VAR_1->of_node)
  return;

 FUNC_0(VAR_1->of_node);
}
