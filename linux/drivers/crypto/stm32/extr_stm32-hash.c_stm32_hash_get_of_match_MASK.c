
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_dev {scalar_t__ dma_maxburst; int pdata; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct stm32_hash_dev *VAR_1,
       struct device *VAR_2)
{
 VAR_1->pdata = FUNC_2(VAR_2);
 if (!VAR_1->pdata) {
  FUNC_0(VAR_2, "no compatible OF match\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_2->of_node, "dma-maxburst",
     &VAR_1->dma_maxburst)) {
  FUNC_1(VAR_2, "dma-maxburst not specified, using 0\n");
  VAR_1->dma_maxburst = 0;
 }

 return 0;
}
