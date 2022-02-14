
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_ops_setup; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;

void FUNC_2(struct device *VAR_0)
{
 if (!VAR_0->archdata.dma_ops_setup)
  return;

 FUNC_0(VAR_0);

 FUNC_1(VAR_0, ((void*)0));
}
