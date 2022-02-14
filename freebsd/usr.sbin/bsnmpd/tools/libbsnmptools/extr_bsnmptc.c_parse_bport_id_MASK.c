
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
 int VAR_4 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int32_t
FUNC_6(struct snmp_value *VAR_5, char *VAR_6)
{
 char *VAR_7;
 int VAR_8;
 uint32_t VAR_9;
 uint8_t VAR_10[VAR_1];


 VAR_8 = VAR_4;
 VAR_4 = 0;
 VAR_9 = FUNC_3(VAR_6, &VAR_7, 10);

 if (VAR_9 > VAR_2 || VAR_4 != 0 || *VAR_7 != '.') {
  VAR_4 = VAR_8;
  FUNC_5("Bad bridge port priority value %d", VAR_9);
  return (-1);
 }

 VAR_10[0] = VAR_9;

 VAR_6 = VAR_7 + 1;
 VAR_9 = FUNC_3(VAR_6, &VAR_7, 16);
 if (VAR_9 > 0xff) {
  FUNC_5("Bad port number - %d", VAR_9);
  return (-1);
 }

 VAR_10[1] = VAR_9;

 if ((VAR_5->v.octetstring.octets = FUNC_0(VAR_1)) == ((void*)0)) {
  FUNC_4(VAR_0, "malloc failed: %s", FUNC_2(VAR_4));
  return (-1);
 }

 VAR_5->v.octetstring.len = VAR_1;
 FUNC_1(VAR_5->v.octetstring.octets, VAR_10, VAR_1);
 VAR_5->syntax = VAR_3;
 return (1);
}
