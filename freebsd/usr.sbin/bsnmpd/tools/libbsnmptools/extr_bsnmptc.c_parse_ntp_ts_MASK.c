
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
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_6(struct snmp_value *VAR_4, char *VAR_5)
{
 char *VAR_6;
 int32_t VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10;
 uint8_t VAR_11[VAR_1];

 VAR_9 = VAR_3;
 VAR_3 = 0;
 VAR_10 = FUNC_3(VAR_5, &VAR_6, 10);
 if (VAR_3 != 0 || (VAR_10 / 1000) > 9) {
  VAR_3 = VAR_9;
  FUNC_5("Integer value %s not supported", VAR_5);
  return (-1);
 } else
  VAR_3 = VAR_9;

 if (*VAR_6 != '.') {
  FUNC_5("Failed reading octet - %s", VAR_5);
  return (-1);
 }

 for (VAR_7 = 0, VAR_8 = 1000; VAR_7 < 4; VAR_7++) {
  VAR_11[VAR_7] = VAR_10 / VAR_8;
  VAR_10 = VAR_10 % VAR_8;
  VAR_8 = VAR_8 / 10;
 }
 VAR_5 = VAR_6 + 1;

 VAR_9 = VAR_3;
 VAR_3 = 0;
 VAR_10 = FUNC_3(VAR_5, &VAR_6, 10);
 if (VAR_3 != 0 || (VAR_10 / 1000) > 9) {
  VAR_3 = VAR_9;
  FUNC_5("Integer value %s not supported", VAR_5);
  return (-1);
 } else
  VAR_3 = VAR_9;

 for (VAR_7 = 0, VAR_8 = 1000; VAR_7 < 4; VAR_7++) {
  VAR_11[VAR_7 + 4] = VAR_10 / VAR_8;
  VAR_10 = VAR_10 % VAR_8;
  VAR_8 = VAR_8 / 10;
 }

 if ((VAR_4->v.octetstring.octets = FUNC_0(VAR_1)) == ((void*)0)) {
  FUNC_4(VAR_0, "malloc failed: %s", FUNC_2(VAR_3));
  return (-1);
 }

 VAR_4->v.octetstring.len = VAR_1;
 FUNC_1(VAR_4->v.octetstring.octets, VAR_11, VAR_1);
 VAR_4->syntax = VAR_2;
 return (1);
}
