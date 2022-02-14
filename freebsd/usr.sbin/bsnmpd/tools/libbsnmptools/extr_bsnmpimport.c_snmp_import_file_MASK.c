
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct fname {int name; int cut; } ;
typedef int int32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snmp_toolinfo*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

int32_t
FUNC_5(struct snmp_toolinfo *VAR_0, struct fname *VAR_1)
{
 int VAR_2;

 FUNC_3(&(VAR_1->cut));
 FUNC_1(VAR_1->name);
 if ((VAR_2 = FUNC_2(VAR_0)) < 0)
  FUNC_4("Failed to read mappings from file %s", VAR_1->name);

 FUNC_0();

 return (VAR_2);
}
