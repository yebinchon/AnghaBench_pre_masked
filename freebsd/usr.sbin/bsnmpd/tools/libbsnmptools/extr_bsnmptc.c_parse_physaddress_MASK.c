
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int len; int * octets; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {int syntax; TYPE_2__ v; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_6(struct snmp_value *VAR_4, char *VAR_5)
{
 char *VAR_6;
 int32_t VAR_7;
 uint32_t VAR_8;
 uint8_t VAR_9[VAR_1];

 for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
  VAR_8 = FUNC_3(VAR_5, &VAR_6, 16);
  if (VAR_8 > 0xff) {
   FUNC_5("Integer value %s not supported", VAR_5);
   return (-1);
  }
  if(*VAR_6 != ':') {
   FUNC_5("Failed reading octet - %s", VAR_5);
   return (-1);
  }
  VAR_9[VAR_7] = VAR_8;
  VAR_5 = VAR_6 + 1;
 }


 VAR_8 = FUNC_3(VAR_5, &VAR_6, 16);
 if (VAR_8 > 0xff) {
  FUNC_5("Integer value %s not supported", VAR_5);
  return (-1);
 }
 VAR_9[5] = VAR_8;

 if ((VAR_4->v.octetstring.octets = FUNC_0(VAR_1)) == ((void*)0)) {
  FUNC_4(VAR_0, "malloc failed: %s", FUNC_2(VAR_3));
  return (-1);
 }

 VAR_4->v.octetstring.len = VAR_1;
 FUNC_1(VAR_4->v.octetstring.octets, VAR_9, VAR_1);
 VAR_4->syntax = VAR_2;
 return (1);
}
