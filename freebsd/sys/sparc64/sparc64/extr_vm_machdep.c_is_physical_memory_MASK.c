
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct ofw_mem_region {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 struct ofw_mem_region* VAR_0 ;
 int VAR_1 ;

int
FUNC_0(vm_paddr_t VAR_2)
{
 struct ofw_mem_region *VAR_3;

 for (VAR_3 = VAR_0; VAR_3 < VAR_0 + VAR_1; VAR_3++)
  if (VAR_2 >= VAR_3->mr_start && VAR_2 < VAR_3->mr_start + VAR_3->mr_size)
   return (1);
 return (0);
}
