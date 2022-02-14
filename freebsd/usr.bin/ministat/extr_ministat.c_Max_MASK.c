
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataset {double* points; int n; } ;



__attribute__((used)) static double
FUNC_0(const struct dataset *VAR_0)
{

 return (VAR_0->points[VAR_0->n -1]);
}
