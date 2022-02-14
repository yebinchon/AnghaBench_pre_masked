
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int32_t
FUNC_4(struct snmp_toolinfo *VAR_3, int32_t *VAR_4)
{
 while (*VAR_4 != VAR_1) {
  switch (*VAR_4) {
      case 128:
   return (-1);
      case '(':
   if (FUNC_1(VAR_3) < 0)
       return (-1);
   break;
      case ')':
   if (FUNC_3(&VAR_2) < 0)
       return (-1);
   (void) FUNC_2(VAR_0, ((void*)0));
   break;
      default:

   return (-1);
  }
  *VAR_4 = FUNC_0(VAR_3);
 }

 return (0);
}
