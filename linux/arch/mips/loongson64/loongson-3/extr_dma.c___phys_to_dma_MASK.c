
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef long dma_addr_t ;



dma_addr_t FUNC_0(struct device *VAR_0, phys_addr_t VAR_1)
{


 long VAR_2 = (VAR_1 >> 44) & 0x3;
 return ((VAR_2 << 44) ^ VAR_1) | (VAR_2 << 37);
}
