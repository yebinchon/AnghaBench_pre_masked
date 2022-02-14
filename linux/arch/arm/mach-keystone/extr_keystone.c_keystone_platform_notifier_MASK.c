
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dma_pfn_offset; int of_node; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_5,
          unsigned long VAR_6, void *VAR_7)
{
 struct device *VAR_8 = VAR_7;

 if (VAR_6 != VAR_0)
  return VAR_2;

 if (!VAR_8)
  return VAR_1;

 if (!VAR_8->of_node) {
  VAR_8->dma_pfn_offset = VAR_4;
  FUNC_0(VAR_8, "set dma_pfn_offset%08lx\n",
   VAR_8->dma_pfn_offset);
 }
 return VAR_3;
}
