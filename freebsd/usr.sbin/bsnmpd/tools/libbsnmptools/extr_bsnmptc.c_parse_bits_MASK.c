
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v ;
typedef int uint64_t ;
struct TYPE_3__ {int* octets; int len; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {int syntax; TYPE_2__ v; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_5(struct snmp_value *VAR_3, char *VAR_4)
{
 char *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10, VAR_11 = 0xFF00000000000000;

 VAR_9 = VAR_2;
 VAR_2 = 0;

 VAR_10 = FUNC_2(VAR_4, &VAR_5, 16);

 if (VAR_2 != 0) {
  FUNC_4("Bad BITS value %s", VAR_4);
  VAR_2 = VAR_9;
  return (-1);
 }

 VAR_8 = 8;

 for (VAR_7 = sizeof(VAR_10); VAR_7 > 0; VAR_7--) {
  if ((VAR_10 & VAR_11) != 0)
   break;
  VAR_11 = VAR_11 >> VAR_8;
 }

 if (VAR_7 == 0)
  VAR_7 = 1;

 if ((VAR_3->v.octetstring.octets = FUNC_0(VAR_7)) == ((void*)0)) {
  FUNC_3(VAR_0, "malloc failed: %s", FUNC_1(VAR_2));
  return (-1);
 }

 VAR_3->v.octetstring.len = VAR_7;
 for (VAR_6 = 0, VAR_8 = 0; VAR_6 < VAR_7; VAR_6++, VAR_8 += 8)
  VAR_3->v.octetstring.octets[VAR_6] = (VAR_10 & VAR_11) >> VAR_8;
 VAR_3->syntax = VAR_1;
 return (1);
}
