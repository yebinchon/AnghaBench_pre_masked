
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataset {double syy; unsigned int n; double const* points; } ;


 double FUNC_0 (struct dataset*) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static double
FUNC_2(struct dataset *VAR_0)
{
 unsigned VAR_1;
 const double VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0->syy)) {
  VAR_0->syy = 0.0;
  for (VAR_1 = 0; VAR_1 < VAR_0->n; VAR_1++)
   VAR_0->syy += (VAR_0->points[VAR_1] - VAR_2) * (VAR_0->points[VAR_1] - VAR_2);
 }

 return (VAR_0->syy / (VAR_0->n - 1.0));
}
