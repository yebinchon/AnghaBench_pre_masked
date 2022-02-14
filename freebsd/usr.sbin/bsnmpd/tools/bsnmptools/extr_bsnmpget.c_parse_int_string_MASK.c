
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int integer; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct snmp_object {TYPE_3__ val; TYPE_1__* info; } ;
typedef int int32_t ;
struct TYPE_4__ {int snmp_enum; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_4(struct snmp_object *VAR_0, char *VAR_1)
{
 int32_t VAR_2;

 if (FUNC_1(VAR_1[0]))
  return ((FUNC_2(&(VAR_0->val), VAR_1)));

 if (VAR_0->info == ((void*)0)) {
  FUNC_3("Unknown enumerated integer type - %s", VAR_1);
  return (-1);
 }
 if ((VAR_2 = FUNC_0(VAR_0->info->snmp_enum, VAR_1)) < 0)
  FUNC_3("Unknown enumerated integer type - %s", VAR_1);

 VAR_0->val.v.integer = VAR_2;
 return (1);
}
