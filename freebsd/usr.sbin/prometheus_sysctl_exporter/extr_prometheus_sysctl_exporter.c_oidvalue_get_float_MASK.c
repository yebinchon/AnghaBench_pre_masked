
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double s; double u; double f; } ;
struct oidvalue {int type; TYPE_1__ value; } ;





 int FUNC_0 (int ) ;

__attribute__((used)) static double
FUNC_1(const struct oidvalue *VAR_0)
{

 switch (VAR_0->type) {
 case 129:
  return (VAR_0->value.s);
 case 128:
  return (VAR_0->value.u);
 case 130:
  return (VAR_0->value.f);
 default:
  FUNC_0(0 && "Unknown value type");
 }
}
