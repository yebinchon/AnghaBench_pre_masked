
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_vector {scalar_t__ start; scalar_t__ size; } ;



__attribute__((used)) static bool FUNC_0(struct mem_vector *VAR_0, struct mem_vector *VAR_1)
{

 if (VAR_0->start + VAR_0->size <= VAR_1->start)
  return 0;

 if (VAR_0->start >= VAR_1->start + VAR_1->size)
  return 0;
 return 1;
}
