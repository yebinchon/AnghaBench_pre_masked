
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct possible_tag {scalar_t__ depth; scalar_t__ found_order; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct possible_tag *VAR_2 = (struct possible_tag *)VAR_0;
 struct possible_tag *VAR_3 = (struct possible_tag *)VAR_1;
 if (VAR_2->depth != VAR_3->depth)
  return VAR_2->depth - VAR_3->depth;
 if (VAR_2->found_order != VAR_3->found_order)
  return VAR_2->found_order - VAR_3->found_order;
 return 0;
}
