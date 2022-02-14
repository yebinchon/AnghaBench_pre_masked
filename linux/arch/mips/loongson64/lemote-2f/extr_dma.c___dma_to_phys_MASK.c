
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;



phys_addr_t FUNC_0(struct device *VAR_0, dma_addr_t VAR_1)
{
 if (VAR_1 > 0x8fffffff)
  return VAR_1;
 return VAR_1 & 0x0fffffff;
}
