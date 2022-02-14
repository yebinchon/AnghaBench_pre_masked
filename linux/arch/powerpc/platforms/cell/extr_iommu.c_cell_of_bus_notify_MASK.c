
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int * dma_ops; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_3, unsigned long VAR_4,
         void *VAR_5)
{
 struct device *VAR_6 = VAR_5;


 if (VAR_4 != VAR_0)
  return 0;

 if (VAR_1)
  VAR_6->dma_ops = &VAR_2;
 FUNC_0(VAR_6);
 return 0;
}
