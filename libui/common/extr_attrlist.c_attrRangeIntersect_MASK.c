
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr {size_t end; size_t start; } ;



__attribute__((used)) static int FUNC_0(struct attr *VAR_0, size_t *VAR_1, size_t *VAR_2)
{

 if (*VAR_1 >= VAR_0->end)
  return 0;
 if (*VAR_2 < VAR_0->start)
  return 0;



 if (*VAR_1 < VAR_0->start)
  *VAR_1 = VAR_0->start;
 if (*VAR_2 > VAR_0->end)
  *VAR_2 = VAR_0->end;
 return 1;
}
