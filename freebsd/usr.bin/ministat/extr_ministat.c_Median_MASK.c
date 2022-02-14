
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataset {int n; int* points; } ;



__attribute__((used)) static double
FUNC_0(const struct dataset *VAR_0)
{
 const unsigned VAR_1 = VAR_0->n / 2;

 if ((VAR_0->n % 2) == 0)
  return ((VAR_0->points[VAR_1] + (VAR_0->points[VAR_1 - 1])) / 2);
 return (VAR_0->points[VAR_1]);
}
