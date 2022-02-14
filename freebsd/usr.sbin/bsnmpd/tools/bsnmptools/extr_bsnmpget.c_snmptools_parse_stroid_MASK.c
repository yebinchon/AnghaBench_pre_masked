
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct TYPE_2__ {scalar_t__ syntax; int var; } ;
struct snmp_object {TYPE_1__ val; } ;
struct asn_oid {scalar_t__ len; } ;
typedef scalar_t__ int32_t ;
typedef int asn_subid_t ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct asn_oid*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (struct asn_oid*,int ,int) ;
 scalar_t__ FUNC_5 (struct snmp_toolinfo*,struct snmp_object*,char*) ;
 char* FUNC_6 (struct snmp_toolinfo*,char*,struct snmp_object*) ;
 char* FUNC_7 (char*,struct asn_oid*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (char*,char*,scalar_t__) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static char *
FUNC_11(struct snmp_toolinfo *VAR_2,
    struct snmp_object *VAR_3, char *VAR_4)
{
 char VAR_5[VAR_0], *VAR_6;
 int32_t VAR_7 = 0;
 struct asn_oid VAR_8;

 VAR_6 = VAR_4;

 if (*VAR_6 == '.')
  VAR_6++;

 while (FUNC_2(*VAR_6) || *VAR_6 == '_' || (VAR_7 != 0 && FUNC_3(*VAR_6))) {
  VAR_6++;
  VAR_7++;
 }

 if (VAR_7 <= 0 || VAR_7 >= VAR_0)
  return (((void*)0));

 FUNC_4(&VAR_8, 0, sizeof(struct asn_oid));
 if ((VAR_6 = FUNC_7((VAR_4 + VAR_7), &VAR_8)) == ((void*)0)) {
  FUNC_10("Invalid OID - %s", VAR_4);
  return (((void*)0));
 }

 FUNC_9(VAR_5, VAR_4, VAR_7 + 1);
 if (FUNC_5(VAR_2, VAR_3, VAR_5) < 0) {
  FUNC_10("No entry for %s in mapping lists", VAR_5);
  return (((void*)0));
 }


 if (VAR_8.len > 0)
  FUNC_1(&(VAR_3->val.var), &VAR_8);
 else if (*VAR_6 == '[') {
  if ((VAR_6 = FUNC_6(VAR_2, VAR_6 + 1, VAR_3)) == ((void*)0))
   return (((void*)0));
 } else if (VAR_3->val.syntax > 0 && FUNC_0(VAR_2) ==
     VAR_1) {
  if (FUNC_8(&(VAR_3->val.var), (asn_subid_t) 0) < 0)
   return (((void*)0));
 }

 return (VAR_6);
}
