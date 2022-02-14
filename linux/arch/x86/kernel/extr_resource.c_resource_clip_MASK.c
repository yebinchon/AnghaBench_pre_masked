
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ end; scalar_t__ start; } ;
typedef scalar_t__ resource_size_t ;



__attribute__((used)) static void FUNC_0(struct resource *VAR_0, resource_size_t VAR_1,
     resource_size_t VAR_2)
{
 resource_size_t VAR_3 = 0, VAR_4 = 0;

 if (VAR_0->end < VAR_1 || VAR_0->start > VAR_2)
  return;

 if (VAR_0->start < VAR_1)
  VAR_3 = VAR_1 - VAR_0->start;

 if (VAR_0->end > VAR_2)
  VAR_4 = VAR_0->end - VAR_2;


 if (VAR_3 > VAR_4)
  VAR_0->end = VAR_1 - 1;
 else
  VAR_0->start = VAR_2 + 1;
}
