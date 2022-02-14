
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct numa_mem_region {int mr_domain; scalar_t__ mr_size; scalar_t__ mr_start; } ;
struct mem_affinity {int domain; scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int ,struct numa_mem_region*,int*) ;
 struct mem_affinity* VAR_0 ;
 int VAR_1 ;
 struct numa_mem_region* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int* VAR_4 ;
 int FUNC_2 (int,struct mem_affinity*,int*) ;

void
FUNC_3(struct numa_mem_region **VAR_5, int *VAR_6)
{
 struct mem_affinity *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_1 = 0;
 FUNC_0(VAR_3, VAR_2, &VAR_1);

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_1;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_2;
 if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_1("unset value\n");
  return;
 }
 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (VAR_2[VAR_8].mr_domain > VAR_10)
   VAR_10 = VAR_2[VAR_8].mr_domain;

 VAR_7 = VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++, VAR_7++) {
  VAR_7->start = VAR_2[VAR_8].mr_start;
  VAR_7->end = VAR_2[VAR_8].mr_start + VAR_2[VAR_8].mr_size;
  VAR_7->domain = VAR_2[VAR_8].mr_domain;
 }
 VAR_12 = 0;
 VAR_4[VAR_12] = 10;
 VAR_11 = VAR_10 + 1;
 if (VAR_11 > 1) {
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
   for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {



    if (VAR_8 == VAR_9)
     VAR_4[VAR_12] = 10;
    else
     VAR_4[VAR_12] = 21;
    VAR_12++;
   }
  }
 }
 FUNC_2(VAR_11, VAR_0, VAR_4);
}
