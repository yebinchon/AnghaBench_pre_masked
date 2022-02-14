
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double s; double u; double f; } ;
struct oidvalue {int type; TYPE_1__ value; } ;
typedef int FILE ;







 int FUNC_0 (double) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (double) ;

__attribute__((used)) static void
FUNC_3(const struct oidvalue *VAR_0, FILE *VAR_1)
{

 switch (VAR_0->type) {
 case 129:
  FUNC_1(VAR_1, "%jd", VAR_0->value.s);
  break;
 case 128:
  FUNC_1(VAR_1, "%ju", VAR_0->value.u);
  break;
 case 132:
  switch (FUNC_0(VAR_0->value.f)) {
  case 131:
   if (FUNC_2(VAR_0->value.f))
    FUNC_1(VAR_1, "-Inf");
   else
    FUNC_1(VAR_1, "+Inf");
   break;
  case 130:
   FUNC_1(VAR_1, "Nan");
   break;
  default:
   FUNC_1(VAR_1, "%.6f", VAR_0->value.f);
   break;
  }
  break;
 }
}
