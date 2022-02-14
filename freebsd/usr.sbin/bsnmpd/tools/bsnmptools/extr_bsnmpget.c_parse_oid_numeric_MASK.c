
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct snmp_value {int syntax; TYPE_1__ v; } ;
typedef int int32_t ;
typedef scalar_t__ asn_subid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_4(struct snmp_value *VAR_3, char *VAR_4)
{
 char *VAR_5;
 int32_t VAR_6;
 asn_subid_t VAR_7;

 do {
  VAR_6 = VAR_2;
  VAR_2 = 0;
  VAR_7 = FUNC_1(VAR_4, &VAR_5, 10);
  if (VAR_2 != 0) {
   FUNC_2("Value %s not supported", VAR_4);
   VAR_2 = VAR_6;
   return (-1);
  }
  VAR_2 = VAR_6;
  if ((asn_subid_t) VAR_7 > VAR_0) {
   FUNC_3("Suboid %u > ASN_MAXID", VAR_7);
   return (-1);
  }
  if (FUNC_0(&(VAR_3->v.oid), VAR_7) < 0)
   return (-1);
  VAR_4 = VAR_5 + 1;
 } while (*VAR_5 == '.');

 if (*VAR_5 != '\0')
  FUNC_3("OID value %s not supported", VAR_4);

 VAR_3->syntax = VAR_1;
 return (0);
}
