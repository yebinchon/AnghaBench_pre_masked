
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct device*) ;

dma_addr_t FUNC_1(struct device *VAR_0, phys_addr_t VAR_1)
{
 return VAR_1 + FUNC_0(VAR_0);
}
