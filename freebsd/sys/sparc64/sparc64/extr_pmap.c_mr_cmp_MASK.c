
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_mem_region {scalar_t__ mr_start; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct ofw_mem_region *VAR_2;
 const struct ofw_mem_region *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 if (VAR_2->mr_start < VAR_3->mr_start)
  return (-1);
 else if (VAR_2->mr_start > VAR_3->mr_start)
  return (1);
 else
  return (0);
}
