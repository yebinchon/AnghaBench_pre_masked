
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_oid {int dummy; } ;
typedef scalar_t__ asn_subid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct asn_oid*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;
 int FUNC_2 (char*,scalar_t__) ;

char *
FUNC_3(char *VAR_1, struct asn_oid *VAR_2)
{
 char *VAR_3;
 asn_subid_t VAR_4;

 if (*VAR_1 == '.')
  VAR_1++;

 if (*VAR_1 < '0' || *VAR_1 > '9')
  return (VAR_1);

 do {
  VAR_4 = FUNC_1(VAR_1, &VAR_3, 10);
  if ((asn_subid_t) VAR_4 > VAR_0) {
   FUNC_2("Suboid %u > ASN_MAXID", VAR_4);
   return (((void*)0));
  }
  if (FUNC_0(VAR_2, VAR_4) < 0)
   return (((void*)0));
  VAR_1 = VAR_3 + 1;
 } while (*VAR_3 == '.');

 return (VAR_3);
}
