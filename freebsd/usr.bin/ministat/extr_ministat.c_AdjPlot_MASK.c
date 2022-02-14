
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plot {double min; double max; double span; double dx; double width; double x0; } ;


 struct plot VAR_0 ;

__attribute__((used)) static void
FUNC_0(double VAR_1)
{
 struct plot *VAR_2;

 VAR_2 = &VAR_0;
 if (VAR_1 < VAR_2->min)
  VAR_2->min = VAR_1;
 if (VAR_1 > VAR_2->max)
  VAR_2->max = VAR_1;
 VAR_2->span = VAR_2->max - VAR_2->min;
 VAR_2->dx = VAR_2->span / (VAR_2->width - 1.0);
 VAR_2->x0 = VAR_2->min - .5 * VAR_2->dx;
}
