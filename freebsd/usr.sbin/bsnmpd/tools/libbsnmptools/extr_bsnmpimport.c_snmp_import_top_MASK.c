
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct enum_type {int is_enum; int is_bits; int snmp_enum; int syntax; } ;
typedef char int32_t ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;
struct TYPE_2__ {int fname; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (struct snmp_toolinfo*,int ,int *,int) ;
 char FUNC_1 (struct snmp_toolinfo*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct snmp_toolinfo*,char*,int*,int *) ;
 struct enum_type* FUNC_4 (int ) ;
 int FUNC_5 (struct snmp_toolinfo*,struct enum_type*) ;
 char FUNC_6 (struct snmp_toolinfo*,char*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int32_t
FUNC_8(struct snmp_toolinfo *VAR_8, int32_t *VAR_9)
{
 enum snmp_tc VAR_10;
 struct enum_type *VAR_11;

 if (*VAR_9 == '(')
  return (FUNC_6(VAR_8, VAR_9));

 if (*VAR_9 == VAR_5) {
  if ((*VAR_9 = FUNC_1(VAR_8)) != VAR_4) {
   FUNC_7("type name expected after typedef - %s",
       VAR_6->fname);
   return (-1);
  }

  VAR_11 = FUNC_4(VAR_7);

  *VAR_9 = FUNC_1(VAR_8);
  VAR_11->is_enum = (*VAR_9 == VAR_1);
  VAR_11->is_bits = (*VAR_9 == VAR_0);
  VAR_11->syntax = FUNC_3(VAR_8, VAR_9, &VAR_10, &(VAR_11->snmp_enum));
  FUNC_5(VAR_8, VAR_11);

  return (1);
 }

 if (*VAR_9 == VAR_3) {
  int VAR_12;

  *VAR_9 = FUNC_1(VAR_8);
  if (*VAR_9 != VAR_2) {
   FUNC_7("filename expected in include directive - %s",
       VAR_7);
   return (-1);
  }

  if (( VAR_12 = FUNC_0(VAR_8, VAR_7, ((void*)0), 1)) == 0) {
   *VAR_9 = FUNC_1(VAR_8);
   return (1);
  }

  if (VAR_12 == -1)
   return (-1);

  FUNC_2(VAR_7);
  *VAR_9 = FUNC_1(VAR_8);
  return (1);
 }

 FUNC_7("'(' or 'typedef' expected - %s", VAR_7);
 return (-1);
}
