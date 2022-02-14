
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr {size_t start; size_t end; } ;



__attribute__((used)) static int FUNC_0(struct attr *VAR_0, size_t VAR_1)
{
 if (VAR_1 < VAR_0->start)
  return 0;
 return VAR_1 < VAR_0->end;
}
