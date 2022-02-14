
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int* coherent_dma_mask; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ cpu_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int,int) ;
 unsigned long FUNC_1 (unsigned long) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (unsigned long,size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (unsigned long,size_t,unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_5 (size_t) ;

void *FUNC_6(struct device *VAR_6, size_t VAR_7,
  dma_addr_t *VAR_8, gfp_t VAR_9, unsigned long VAR_10)
{
 unsigned long VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 if (VAR_3.cpu_type != VAR_5 && VAR_3.cpu_type != VAR_4)
  return ((void*)0);

 VAR_13 = FUNC_3(VAR_7);
 VAR_7 = 1 << (VAR_13 + VAR_1);
 VAR_11 = FUNC_5(VAR_7);
 VAR_12 = FUNC_0(VAR_9 | VAR_2, VAR_13);
 FUNC_2(VAR_12, VAR_7);
 VAR_12 = FUNC_1(VAR_12);
 FUNC_4(VAR_11, VAR_7, VAR_12);
 *VAR_8 = (dma_addr_t) VAR_12;
 return (void *)VAR_11;
}
