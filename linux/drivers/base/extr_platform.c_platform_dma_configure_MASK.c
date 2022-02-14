
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int fwnode; scalar_t__ of_node; } ;
typedef enum dev_dma_attr { ____Placeholder_dev_dma_attr } dev_dma_attr ;


 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,scalar_t__,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct device *VAR_0)
{
 enum dev_dma_attr VAR_1;
 int VAR_2 = 0;

 if (VAR_0->of_node) {
  VAR_2 = FUNC_3(VAR_0, VAR_0->of_node, 1);
 } else if (FUNC_2(VAR_0)) {
  VAR_1 = FUNC_1(FUNC_4(VAR_0->fwnode));
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 }

 return VAR_2;
}
