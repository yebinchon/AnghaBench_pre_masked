
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vadc_linear_graph {scalar_t__ dx; int dy; scalar_t__ gnd; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(const struct vadc_linear_graph *VAR_0,
      u16 VAR_1,
      bool VAR_2,
      s64 *VAR_3)
{
 *VAR_3 = (VAR_1 - VAR_0->gnd);
 *VAR_3 *= VAR_0->dx;
 *VAR_3 = FUNC_0(*VAR_3, VAR_0->dy);
 if (VAR_2)
  *VAR_3 += VAR_0->dx;

 if (*VAR_3 < 0)
  *VAR_3 = 0;
}
