
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct snmp_toolinfo {int dummy; } ;
struct TYPE_2__ {char* str; } ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct snmp_toolinfo *VAR_4, uint8_t *VAR_5)
{
 if (FUNC_0(VAR_4) == VAR_0)
  FUNC_1(VAR_2, "%s : ",
      VAR_3[VAR_1].str);

 FUNC_1(VAR_2, "%u.%u.%u.%u", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
}
