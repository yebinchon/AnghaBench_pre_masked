
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;
typedef enum tok { ____Placeholder_tok } tok ;
struct TYPE_2__ {int lno; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int32_t
FUNC_2(struct snmp_toolinfo *VAR_5)
{
 enum tok VAR_6;

 if ((VAR_6 = FUNC_0(VAR_5)) == '(')
  VAR_6 = FUNC_0(VAR_5);

 if (VAR_6 != VAR_1 || VAR_4 > VAR_0 ) {
  FUNC_1("Suboid expected - line %d", VAR_3->lno);
  return (-1);
 }

 if (FUNC_0(VAR_5) != VAR_2) {
  FUNC_1("Node name expected at line %d", VAR_3->lno);
  return (-1);
 }

 return (1);
}
