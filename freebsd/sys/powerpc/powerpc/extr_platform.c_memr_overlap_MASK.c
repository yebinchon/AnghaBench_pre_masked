
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct mem_region *VAR_2, struct mem_region *VAR_3)
{
 if ((VAR_2->mr_start + VAR_2->mr_size) < VAR_3->mr_start ||
     (VAR_3->mr_start + VAR_3->mr_size) < VAR_2->mr_start)
  return (VAR_0);

 return (VAR_1);
}
