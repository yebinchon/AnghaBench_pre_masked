
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

int32_t
FUNC_4(char *VAR_5)
{
 uint32_t VAR_6;
 int32_t VAR_7;

 FUNC_0(VAR_5 != ((void*)0));

 VAR_7 = VAR_3;
 VAR_3 = 0;

 VAR_6 = FUNC_1(VAR_5, ((void*)0), 10);
 if (VAR_3 != 0) {
  FUNC_2("Error parsing version");
  VAR_3 = VAR_7;
  return (-1);
 }

 switch (VAR_6) {
  case 1:
   VAR_4.version = VAR_0;
   break;
  case 2:
   VAR_4.version = VAR_1;
   break;
  case 3:
   VAR_4.version = VAR_2;
   break;
  default:
   FUNC_3("Unsupported SNMP version - %u", VAR_6);
   VAR_3 = VAR_7;
   return (-1);
 }

 VAR_3 = VAR_7;
 return (2);
}
