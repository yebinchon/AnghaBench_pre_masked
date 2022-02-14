
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid; } ;
struct snmp_value {TYPE_1__ v; } ;
struct snmp_toolinfo {int dummy; } ;
struct TYPE_4__ {int var; } ;
struct snmp_object {TYPE_2__ val; } ;
typedef int int32_t ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct snmp_object*,int ,int) ;
 int FUNC_3 (struct snmp_value*,char*) ;
 scalar_t__ FUNC_4 (struct snmp_toolinfo*,struct snmp_object*,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_6(struct snmp_toolinfo *VAR_0,
    struct snmp_value *VAR_1, char *VAR_2)
{
 struct snmp_object VAR_3;

 if (FUNC_1(VAR_2[0]))
  return (FUNC_3(VAR_1, VAR_2));

 FUNC_2(&VAR_3, 0, sizeof(struct snmp_object));
 if (FUNC_4(VAR_0, &VAR_3, VAR_2) < 0) {
  FUNC_5("Unknown OID enum string - %s", VAR_2);
  return (-1);
 }

 FUNC_0(&(VAR_1->v.oid), &(VAR_3.val.var));
 return (1);
}
