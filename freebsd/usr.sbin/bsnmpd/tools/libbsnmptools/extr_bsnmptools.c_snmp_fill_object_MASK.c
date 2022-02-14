
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_value {scalar_t__ syntax; int var; } ;
struct snmp_toolinfo {int dummy; } ;
struct TYPE_2__ {scalar_t__ syntax; int var; } ;
struct snmp_object {TYPE_1__ val; } ;
typedef int int32_t ;
typedef int asn_subid_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct snmp_object*,int ,int) ;
 int FUNC_2 (struct snmp_toolinfo*,struct snmp_object*) ;
 int FUNC_3 (struct snmp_toolinfo*,struct snmp_object*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int32_t
FUNC_6(struct snmp_toolinfo *VAR_1, struct snmp_object *VAR_2,
    struct snmp_value *VAR_3)
{
 int32_t VAR_4;
 asn_subid_t VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (-1);

 if ((VAR_5 = FUNC_5(&(VAR_3->var))) > VAR_0)
  return (-1);

 FUNC_1(VAR_2, 0, sizeof(struct snmp_object));
 FUNC_0(&(VAR_2->val.var), &(VAR_3->var));
 VAR_2->val.syntax = VAR_3->syntax;

 if (VAR_2->val.syntax > 0)
  VAR_4 = FUNC_2(VAR_1, VAR_2);
 else
  VAR_4 = FUNC_3(VAR_1, VAR_2);

 (void) FUNC_4(&(VAR_3->var), VAR_5);
 (void) FUNC_4(&(VAR_2->val.var), VAR_5);

 return (VAR_4);
}
