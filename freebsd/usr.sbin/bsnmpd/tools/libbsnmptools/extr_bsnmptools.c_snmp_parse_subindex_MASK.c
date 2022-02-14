
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct TYPE_2__ {int var; } ;
struct snmp_object {TYPE_1__ val; } ;
struct index {int syntax; int tc; } ;
typedef int int32_t ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;



 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int *) ;
 char* FUNC_4 (char*,int *) ;
 char* FUNC_5 (char*,int *) ;
 char* FUNC_6 (struct snmp_toolinfo*,char*,int *) ;
 char* FUNC_7 (int ,char*,int *) ;
 char* FUNC_8 (char*,int *) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static char *
FUNC_10(struct snmp_toolinfo *VAR_3, char *VAR_4,
    struct index *VAR_5, struct snmp_object *VAR_6)
{
 char *VAR_7;
 int32_t VAR_8;
 enum snmp_syntax VAR_9;
 char VAR_10[VAR_0];

 VAR_7 = VAR_4;
 if (FUNC_0(VAR_3) == VAR_1) {
  for (VAR_8 = 0; VAR_8 < VAR_0 ; VAR_8++) {
   if (*(VAR_7 + VAR_8) == ':')
    break;
  }

  if (VAR_8 >= VAR_0) {
   FUNC_9("Unknown syntax in OID - %s", VAR_4);
   return (((void*)0));
  }

  if ((VAR_9 = FUNC_2(VAR_4)) <= VAR_2) {
   FUNC_9("Invalid  syntax - %s",VAR_10);
   return (((void*)0));
  }

  if (VAR_9 != VAR_5->syntax && !FUNC_1(VAR_3)) {
   FUNC_9("Syntax mismatch - %d expected, %d given",
       VAR_5->syntax, VAR_9);
   return (((void*)0));
  }




  VAR_7 = VAR_4 + VAR_8 + 1;
 } else
  VAR_9 = VAR_5->syntax;

 switch (VAR_9) {
  case 132:
   return (FUNC_4(VAR_7, &(VAR_6->val.var)));
  case 129:
   return (FUNC_6(VAR_3, VAR_7,
       &(VAR_6->val.var)));
  case 131:
   return (FUNC_5(VAR_7, &(VAR_6->val.var)));
  case 135:

  case 133:

  case 128:
   return (FUNC_8(VAR_7, &(VAR_6->val.var)));
  case 134:
   return (FUNC_3(VAR_7, &(VAR_6->val.var)));
  case 130:
   return (FUNC_7(VAR_5->tc, VAR_7, &(VAR_6->val.var)));
  default:

   break;
 }

 return (((void*)0));
}
