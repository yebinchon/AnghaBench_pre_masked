
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

dma_addr_t FUNC_0(struct device *VAR_2, phys_addr_t VAR_3)
{
 dma_addr_t VAR_4 = VAR_3 & VAR_1;

 if (!VAR_2)
  VAR_4 += VAR_0;
 return VAR_4;
}
