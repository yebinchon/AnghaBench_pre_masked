
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_2__ var; } ;
struct snmp_object {TYPE_1__ val; } ;
struct asn_oid {int dummy; } ;
typedef int int32_t ;
typedef int asn_subid_t ;


 int VAR_0 ;
 int FUNC_0 (struct asn_oid*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct snmp_object*,int ,int) ;
 scalar_t__ FUNC_3 (struct snmp_toolinfo*,struct snmp_object*,char*) ;
 char* FUNC_4 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (struct asn_oid*,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static char *
FUNC_8(struct snmp_toolinfo *VAR_1, char *VAR_2,
    struct asn_oid *VAR_3)
{
 int32_t VAR_4;
 char VAR_5[VAR_0 + 1], *VAR_6;
 struct snmp_object VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (FUNC_1 (*(VAR_2 + VAR_4)) == 0)
   break;

 VAR_6 = VAR_2 + VAR_4;
 FUNC_2(&VAR_7, 0, sizeof(struct snmp_object));
 if (VAR_4 == 0) {
  if ((VAR_6 = FUNC_4(VAR_2, &(VAR_7.val.var))) == ((void*)0))
   return (((void*)0));
  if (FUNC_5(VAR_3, (asn_subid_t) VAR_7.val.var.len) < 0)
   return (((void*)0));
 } else {
  FUNC_6(VAR_5, VAR_2, VAR_4 + 1);
  if (FUNC_3(VAR_1, &VAR_7, VAR_5) < 0) {
   FUNC_7("Unknown string - %s", VAR_5);
   return (((void*)0));
  }
 }

 FUNC_0(VAR_3, &(VAR_7.val.var));
 return (VAR_6);
}
