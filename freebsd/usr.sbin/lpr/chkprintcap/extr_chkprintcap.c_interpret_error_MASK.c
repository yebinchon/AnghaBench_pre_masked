
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int printer; } ;






 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(const struct printer *VAR_1, int VAR_2)
{
 switch(VAR_2) {
 case 131:
  FUNC_0(++VAR_0, "reading printer database");
 case 129:
  ++VAR_0;
  FUNC_2("%s: loop detected in tc= expansion", VAR_1->printer);
  return 1;
 case 128:
  FUNC_2("%s: unresolved tc= expansion", VAR_1->printer);
  return 1;
 case 130:
  break;
 default:
  FUNC_1(++VAR_0, "unknown printcap library error %d", VAR_2);
 }
 return 0;
}
