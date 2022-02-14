
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct dw_dma {TYPE_1__ dma; } ;
struct device {int of_node; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct dw_dma*) ;

void FUNC_2(struct dw_dma *VAR_1)
{
 struct device *VAR_2 = VAR_1->dma.dev;
 int VAR_3;

 if (!VAR_2->of_node)
  return;

 VAR_3 = FUNC_1(VAR_2->of_node, VAR_0, VAR_1);
 if (VAR_3)
  FUNC_0(VAR_2, "could not register of_dma_controller\n");
}
