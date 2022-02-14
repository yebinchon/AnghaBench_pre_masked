
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(unsigned int VAR_2, dma_addr_t VAR_3,
  size_t VAR_4)
{
 if (VAR_4 > (VAR_0 << VAR_2))
  goto err_out;
 if (FUNC_0(VAR_4 & ((1 << VAR_2) - 1)))
  goto err_out;
 if (FUNC_0(VAR_3 & ((1 << VAR_2) - 1)))
  goto err_out;

 return 0;

err_out:
 return -VAR_1;
}
