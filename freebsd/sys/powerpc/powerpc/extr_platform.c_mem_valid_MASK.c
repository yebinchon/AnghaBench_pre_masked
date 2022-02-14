
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct mem_region {int dummy; } ;
struct TYPE_2__ {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_region**,int*,struct mem_region**,int*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_1(vm_offset_t VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_1 == 0) {
  struct mem_region *VAR_6, *VAR_7;
  int VAR_8, VAR_9;
  FUNC_0(&VAR_6, &VAR_9, &VAR_7, &VAR_8);
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if ((VAR_3 >= VAR_2[VAR_5].mr_start)
     && (VAR_3 + VAR_4 <= VAR_2[VAR_5].mr_start + VAR_2[VAR_5].mr_size))
   return (0);

 return (VAR_0);
}
