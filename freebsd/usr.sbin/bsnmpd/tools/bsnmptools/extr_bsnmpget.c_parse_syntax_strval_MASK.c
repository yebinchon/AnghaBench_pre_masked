
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct snmp_toolinfo {int dummy; } ;
struct TYPE_10__ {int syntax; } ;
struct snmp_object {TYPE_2__ val; TYPE_1__* info; } ;
typedef int int32_t ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;
struct TYPE_9__ {int tc; } ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;





 int VAR_1 ;



 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct snmp_object*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (struct snmp_toolinfo*,TYPE_2__*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int ,TYPE_2__*,char*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_12(struct snmp_toolinfo *VAR_2,
    struct snmp_object *VAR_3, char *VAR_4)
{
 uint32_t VAR_5;
 enum snmp_syntax VAR_6;





 if (FUNC_0(VAR_2) == VAR_0) {
  for (VAR_5 = 0 ; *(VAR_4 + VAR_5) != ':'; VAR_5++) {
   if (*(VAR_4 + VAR_5) == '\0') {
    FUNC_11("Syntax missing in value - %s", VAR_4);
    return (-1);
   }
  }
  if ((VAR_6 = FUNC_7(VAR_4)) <= VAR_1) {
   FUNC_11("Unknown syntax in - %s", VAR_4);
   return (-1);
  }
  if (VAR_6 != VAR_3->val.syntax) {
   if (!FUNC_1(VAR_2)) {
    FUNC_11("Bad syntax in - %s", VAR_4);
    return (-1);
   } else
    VAR_3->val.syntax = VAR_6;
  }
  VAR_5++;
 } else
  VAR_5 = 0;

 switch (VAR_3->val.syntax) {
  case 132:
   return (FUNC_4(VAR_3, VAR_4 + VAR_5));
  case 131:
   return (FUNC_5(&(VAR_3->val), VAR_4 + VAR_5));
  case 135:
   return (FUNC_2(&(VAR_3->val), VAR_4 + VAR_5));
  case 133:
   return (FUNC_3(&(VAR_3->val), VAR_4 + VAR_5));
  case 128:
   return (FUNC_8(&(VAR_3->val), VAR_4 + VAR_5));
  case 134:
   return (FUNC_9(&(VAR_3->val), VAR_4 + VAR_5));
  case 130:
   return (FUNC_10(VAR_3->info->tc, &(VAR_3->val),
       VAR_4 + VAR_5));
  case 129:
   return (FUNC_6(VAR_2, &(VAR_3->val),
       VAR_4 + VAR_5));
  default:

   break;
 }

 return (-1);
}
