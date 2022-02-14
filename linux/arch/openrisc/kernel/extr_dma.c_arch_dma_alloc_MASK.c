
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 (void*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,unsigned long,unsigned long,int *,int *) ;

void *
FUNC_4(struct device *VAR_3, size_t VAR_4, dma_addr_t *VAR_5,
  gfp_t VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;
 void *VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_6 | VAR_0);
 if (!VAR_9)
  return ((void*)0);


 *VAR_5 = FUNC_0(VAR_9);

 VAR_8 = (unsigned long)VAR_9;





 if (FUNC_3(&VAR_1, VAR_8, VAR_8 + VAR_4, &VAR_2,
   ((void*)0))) {
  FUNC_2(VAR_9, VAR_4);
  return ((void*)0);
 }

 return (void *)VAR_8;
}
