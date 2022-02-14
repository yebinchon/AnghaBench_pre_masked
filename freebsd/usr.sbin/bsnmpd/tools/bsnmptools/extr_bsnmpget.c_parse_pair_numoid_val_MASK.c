
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_value {int var; } ;
typedef int int32_t ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct snmp_value*,int,char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_5(char *VAR_4, struct snmp_value *VAR_5)
{
 int32_t VAR_6;
 char *VAR_7;
 enum snmp_syntax VAR_8;
 char VAR_9[VAR_0];

 VAR_7 = VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_7[VAR_6] == '=')
   break;

 if (VAR_6 >= VAR_0) {
  FUNC_4("OID too long - %s", VAR_4);
  return (-1);
 }
 FUNC_3(VAR_9, VAR_7, (size_t) (VAR_6 + 1));

 VAR_7 = VAR_4 + VAR_6 + 1;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if(VAR_7[VAR_6] == ':')
   break;

 if (VAR_6 >= VAR_1) {
  FUNC_4("Unknown syntax in OID - %s", VAR_4);
  return (-1);
 }

 if ((VAR_8 = FUNC_0(VAR_7)) <= VAR_3) {
  FUNC_4("Unknown syntax in OID - %s", VAR_7);
  return (-1);
 }

 VAR_7 = VAR_7 + VAR_6 + 1;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  if (VAR_7[VAR_6] == '\0')
   break;

 if (VAR_7[VAR_6] != '\0') {
  FUNC_4("Value string too long - %s", VAR_7);
  return (-1);
 }





 if (FUNC_2(VAR_9, &(VAR_5->var)) < 0) {
  FUNC_4("Error parsing OID %s", VAR_9);
  return (-1);
 }

 if (FUNC_1(VAR_5, VAR_8, VAR_7) < 0)
  return (-1);

 return (1);
}
