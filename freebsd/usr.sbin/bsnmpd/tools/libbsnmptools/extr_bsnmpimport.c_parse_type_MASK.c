
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct enum_type {struct enum_pairs* snmp_enum; } ;
struct enum_pairs {int dummy; } ;
typedef int int32_t ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct enum_pairs*) ;
 struct enum_pairs* FUNC_1 () ;
 int FUNC_2 (struct enum_pairs*) ;
 char FUNC_3 (struct snmp_toolinfo*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct snmp_toolinfo*,int*,struct enum_pairs*) ;
 scalar_t__ FUNC_5 (struct snmp_toolinfo*,int*,int*) ;
 struct enum_type* FUNC_6 (struct snmp_toolinfo*,int ) ;
 int VAR_6 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int32_t
FUNC_8(struct snmp_toolinfo *VAR_7, int32_t *VAR_8,
    enum snmp_tc *VAR_9, struct enum_pairs **VAR_10)
{
 int32_t VAR_11, VAR_12;

 VAR_11 = VAR_6;
 *VAR_9 = 0;

 if (*VAR_8 == VAR_3 || *VAR_8 == VAR_1) {
  if (*VAR_10 == ((void*)0)) {
   if ((*VAR_10 = FUNC_1()) == ((void*)0))
    return (-1);
   VAR_12 = 1;
   *VAR_9 = VAR_0;
  } else
   VAR_12 = 0;

  if (FUNC_3(VAR_7) != '(') {
   FUNC_7("'(' expected after ENUM/BITS");
   return (-1);
  }

  if ((*VAR_8 = FUNC_3(VAR_7)) != VAR_4) {
   FUNC_7("need value for ENUM//BITS");
   if (VAR_12 == 1) {
    FUNC_2(*VAR_10);
    *VAR_10 = ((void*)0);
   }
   return (-1);
  }

  if (FUNC_4(VAR_7, VAR_8, *VAR_10) < 0) {
   FUNC_0(*VAR_10);
   *VAR_10 = ((void*)0);
   return (-1);
  }

  *VAR_8 = FUNC_3(VAR_7);

 } else if (*VAR_8 == VAR_2) {
  struct enum_type *VAR_13;

  *VAR_9 = 0;
  VAR_13 = FUNC_6(VAR_7, VAR_5);
  if (VAR_13 != ((void*)0))
   *VAR_10 = VAR_13->snmp_enum;

  *VAR_8 = FUNC_3(VAR_7);

 } else {
  if ((*VAR_8 = FUNC_3(VAR_7)) == '|') {
   if (FUNC_5(VAR_7, VAR_8, VAR_9) < 0)
    return (-1);
  }
 }

 return (VAR_11);
}
