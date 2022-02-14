
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_order {scalar_t__ order; int orig_order; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct obj_order const *VAR_2, *VAR_3;
 VAR_2 = (struct obj_order const *)VAR_0;
 VAR_3 = (struct obj_order const *)VAR_1;
 if (VAR_2->order != VAR_3->order)
  return VAR_2->order - VAR_3->order;
 return VAR_2->orig_order - VAR_3->orig_order;
}
