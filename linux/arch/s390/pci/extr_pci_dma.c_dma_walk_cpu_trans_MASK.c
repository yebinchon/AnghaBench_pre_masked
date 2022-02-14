
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dma_addr_t ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned long* FUNC_3 (unsigned long*) ;
 unsigned long* FUNC_4 (unsigned long*) ;

unsigned long *FUNC_5(unsigned long *VAR_0, dma_addr_t VAR_1)
{
 unsigned long *VAR_2, *VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_1);
 VAR_2 = FUNC_4(&VAR_0[VAR_4]);
 if (!VAR_2)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_1);
 VAR_3 = FUNC_3(&VAR_2[VAR_5]);
 if (!VAR_3)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_1);
 return &VAR_3[VAR_6];
}
