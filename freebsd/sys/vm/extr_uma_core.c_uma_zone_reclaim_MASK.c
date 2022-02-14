
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uma_zone_t ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(uma_zone_t VAR_0, int VAR_1)
{

 switch (VAR_1) {
 case 128:
  FUNC_3(VAR_0);
  break;
 case 130:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
  break;
 default:
  FUNC_0("unhandled reclamation request %d", VAR_1);
 }
}
