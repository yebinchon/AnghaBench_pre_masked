
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, size_t VAR_1,
          void *VAR_2, dma_addr_t VAR_3,
          unsigned long VAR_4)
{
 int VAR_5 = FUNC_1(FUNC_2(VAR_1), VAR_2);

 FUNC_0(VAR_5 == 0);
}
