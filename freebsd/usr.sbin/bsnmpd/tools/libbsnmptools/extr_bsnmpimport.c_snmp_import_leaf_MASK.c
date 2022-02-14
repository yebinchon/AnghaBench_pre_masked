
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct snmp_toolinfo {int dummy; } ;
struct snmp_oid2str {int syntax; struct snmp_oid2str* string; int table_idx; int access; int snmp_enum; int tc; } ;
typedef int int32_t ;
struct TYPE_2__ {struct snmp_oid2str* lno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snmp_oid2str*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (struct snmp_toolinfo*,int*,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,struct snmp_oid2str*) ;

__attribute__((used)) static int32_t
FUNC_6(struct snmp_toolinfo *VAR_7, int32_t *VAR_8,
    struct snmp_oid2str *VAR_9)
{
 int32_t VAR_10, VAR_11;

 if ((VAR_11 = FUNC_2(VAR_7, VAR_8, &(VAR_9->tc), &(VAR_9->snmp_enum)))
     < 0)
  return(-1);

 VAR_9->syntax = VAR_11;




 if (*VAR_8 == VAR_4)
  *VAR_8 = FUNC_1(VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_2 && *VAR_8 == VAR_3; VAR_10++) {
  VAR_9->access |= (uint32_t) VAR_6;
  *VAR_8 = FUNC_1(VAR_7);
 }

 if (*VAR_8 != ')') {
  FUNC_5("')' expected at end of line %d", VAR_5->lno);
  return (-1);
 }

 VAR_9->table_idx = FUNC_3(VAR_0, ((void*)0));

 if ((VAR_10 = FUNC_4(VAR_7, VAR_9)) < 0) {
  FUNC_5("Error adding leaf %s to list", VAR_9->string);
  return (-1);
 }





 if (VAR_10 == 0) {
  FUNC_0(VAR_9->string);
  FUNC_0(VAR_9);
 }

 (void) FUNC_3(VAR_1, ((void*)0));

 return (1);
}
