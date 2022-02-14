
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct mem_region {scalar_t__ mr_start; scalar_t__ mr_size; } ;
typedef int platform_t ;


 int FUNC_0 (struct mem_region*,int*,struct mem_region*,int*) ;
 int FUNC_1 (struct mem_region*,int*,struct mem_region*,int*) ;

void
FUNC_2(platform_t VAR_0, struct mem_region *VAR_1, int *VAR_2,
    struct mem_region *VAR_3, int *VAR_4)
{
 vm_offset_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);







 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < *VAR_2; VAR_6++)
  if (VAR_1[VAR_6].mr_start + VAR_1[VAR_6].mr_size > VAR_5)
   VAR_5 = VAR_1[VAR_6].mr_start + VAR_1[VAR_6].mr_size;

 for (VAR_6 = 0; VAR_6 < *VAR_4; VAR_6++)
  if (VAR_3[VAR_6].mr_start + VAR_3[VAR_6].mr_size > VAR_5)
   VAR_3[VAR_6].mr_size = VAR_5 - VAR_3[VAR_6].mr_start;
}
