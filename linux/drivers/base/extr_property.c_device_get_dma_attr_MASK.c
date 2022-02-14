
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
typedef enum dev_dma_attr { ____Placeholder_dev_dma_attr } dev_dma_attr ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

enum dev_dma_attr FUNC_4(struct device *VAR_4)
{
 enum dev_dma_attr VAR_5 = VAR_3;

 if (FUNC_1(VAR_0) && VAR_4->of_node) {
  if (FUNC_3(VAR_4->of_node))
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_2;
 } else
  VAR_5 = FUNC_2(FUNC_0(VAR_4));

 return VAR_5;
}
