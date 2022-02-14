
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct snmp_toolinfo {int dummy; } ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;
struct TYPE_2__ {char* str; } ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,scalar_t__,char*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct snmp_toolinfo *VAR_4, enum snmp_tc VAR_5,
    uint32_t VAR_6, uint8_t *VAR_7)
{
 char *VAR_8;

 if (VAR_6 == 0 || VAR_7 == ((void*)0))
  return;

 if (FUNC_0(VAR_4) == VAR_0)
  FUNC_1(VAR_2, "%s : ",
      VAR_3[VAR_1].str);

 if ((VAR_8 = FUNC_3(VAR_5, VAR_6, (char *) VAR_7)) != ((void*)0)) {
  FUNC_1(VAR_2, "%s", VAR_8);
  FUNC_2(VAR_8);
 }
}
