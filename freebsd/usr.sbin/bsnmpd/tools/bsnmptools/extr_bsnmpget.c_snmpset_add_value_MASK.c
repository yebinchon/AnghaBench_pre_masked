
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int counter64; int uint32; int integer; } ;
struct snmp_value {int syntax; TYPE_1__ v; } ;
typedef int int32_t ;
 int FUNC_0 (struct snmp_value*,struct snmp_value*) ;
 int FUNC_1 (struct snmp_value*,struct snmp_value*) ;
 int FUNC_2 (struct snmp_value*,struct snmp_value*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int32_t
FUNC_4(struct snmp_value *VAR_0, struct snmp_value *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (-1);

 switch (VAR_1->syntax) {
  case 132:
   VAR_0->v.integer = VAR_1->v.integer;
   VAR_0->syntax = 132;
   break;
  case 128:
   VAR_0->v.uint32 = VAR_1->v.uint32;
   VAR_0->syntax = 128;
   break;
  case 133:
   VAR_0->v.uint32 = VAR_1->v.uint32;
   VAR_0->syntax = 133;
   break;
  case 135:
   VAR_0->v.uint32 = VAR_1->v.uint32;
   VAR_0->syntax = 135;
   break;
  case 134:
   VAR_0->v.counter64 = VAR_1->v.counter64;
   VAR_0->syntax = 134;
   break;
  case 131:
   FUNC_0(VAR_0, VAR_1);
   break;
  case 130:
   FUNC_1(VAR_0, VAR_1);
   break;
  case 129:
   FUNC_2(VAR_0, VAR_1);
   break;
  default:
   FUNC_3("Unknown syntax %d", VAR_1->syntax);
   return (-1);
 }

 return (0);
}
