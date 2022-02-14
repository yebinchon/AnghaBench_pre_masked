
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;

bool FUNC_2(struct device *VAR_1,
      phys_addr_t VAR_2,
      dma_addr_t VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = FUNC_0(VAR_3);
 return (!VAR_0 && (VAR_4 != VAR_5) &&
  !FUNC_1(VAR_1));
}
