
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int octets; int len; } ;
struct TYPE_4__ {int counter64; int uint32; int ipaddress; int oid; TYPE_1__ octetstring; int integer; } ;
struct snmp_value {int syntax; TYPE_2__ v; } ;
struct snmp_toolinfo {int dummy; } ;
struct snmp_oid2str {int tc; int * snmp_enum; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snmp_toolinfo*,int ) ;
 int FUNC_3 (struct snmp_toolinfo*,int ) ;
 int FUNC_4 (struct snmp_toolinfo*,int ) ;
 int FUNC_5 (struct snmp_toolinfo*,int *,int ) ;
 int FUNC_6 (struct snmp_toolinfo*,int ) ;
 int FUNC_7 (struct snmp_toolinfo*,int ,int ,int ) ;
 int FUNC_8 (struct snmp_toolinfo*,int *) ;
 int FUNC_9 (struct snmp_toolinfo*,int ) ;
 int VAR_2 ;

int32_t
FUNC_10(struct snmp_toolinfo *VAR_3, struct snmp_value *VAR_4,
    struct snmp_oid2str *VAR_5)
{
 if (VAR_4 == ((void*)0))
  return (-1);

 if (FUNC_0(VAR_3) != VAR_0)
  FUNC_1(VAR_2, " = ");

 switch (VAR_4->syntax) {
     case 135:
  if (VAR_5 != ((void*)0))
   FUNC_5(VAR_3, VAR_5->snmp_enum,
       VAR_4->v.integer);
  else
   FUNC_5(VAR_3, ((void*)0), VAR_4->v.integer);
  break;

     case 130:
  if (VAR_5 != ((void*)0))
   FUNC_7(VAR_3, VAR_5->tc,
       VAR_4->v.octetstring.len, VAR_4->v.octetstring.octets);
  else
   FUNC_7(VAR_3, VAR_1,
       VAR_4->v.octetstring.len, VAR_4->v.octetstring.octets);
  break;

     case 129:
  FUNC_8(VAR_3, &(VAR_4->v.oid));
  break;

     case 134:
  FUNC_6(VAR_3, VAR_4->v.ipaddress);
  break;

     case 139:
  FUNC_2(VAR_3, VAR_4->v.uint32);
  break;

     case 136:
  FUNC_4(VAR_3, VAR_4->v.uint32);
  break;

     case 128:
  FUNC_9(VAR_3, VAR_4->v.uint32);
  break;

     case 138:
  FUNC_3(VAR_3, VAR_4->v.counter64);
  break;

     case 132:
  FUNC_1(VAR_2, "No Such Object\n");
  return (VAR_4->syntax);

     case 133:
  FUNC_1(VAR_2, "No Such Instance\n");
  return (VAR_4->syntax);

     case 137:
  FUNC_1(VAR_2, "End of Mib View\n");
  return (VAR_4->syntax);

     case 131:

  FUNC_1(VAR_2, "agent returned NULL Syntax\n");
  return (VAR_4->syntax);

     default:

  FUNC_1(VAR_2, "agent returned unknown syntax\n");
  return (-1);
 }

 FUNC_1(VAR_2, "\n");

 return (0);
}
