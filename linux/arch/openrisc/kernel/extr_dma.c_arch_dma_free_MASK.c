
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long,unsigned long,int *,int *) ;

void
FUNC_3(struct device *VAR_2, size_t VAR_3, void *VAR_4,
  dma_addr_t VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = (unsigned long)VAR_4;


 FUNC_0(FUNC_2(&VAR_1, VAR_7, VAR_7 + VAR_3,
   &VAR_0, ((void*)0)));

 FUNC_1(VAR_4, VAR_3);
}
