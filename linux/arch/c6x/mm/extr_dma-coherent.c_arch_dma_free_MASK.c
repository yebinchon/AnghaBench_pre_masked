
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*) ;

void FUNC_3(struct device *VAR_2, size_t VAR_3, void *VAR_4,
  dma_addr_t VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 if (!VAR_1 || !VAR_3)
  return;

 VAR_7 = FUNC_1(((VAR_3 - 1) >> VAR_0) + 1);

 FUNC_0(FUNC_2(VAR_4), VAR_7);
}
