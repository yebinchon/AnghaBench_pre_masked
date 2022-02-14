
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct asn_oid {int dummy; } ;
typedef int asn_subid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 int FUNC_1 (char*,char**,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_2, struct asn_oid *VAR_3)
{
 char *VAR_4, *VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_3, (asn_subid_t) VAR_0) < 0)
  return (((void*)0));

 VAR_5 = VAR_2;
 for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
  VAR_8 = VAR_1;
  VAR_6 = FUNC_1(VAR_5, &VAR_4, 16);
  VAR_1 = VAR_8;
  if (VAR_6 > 0xff) {
   FUNC_2("Integer value %s not supported", VAR_2);
   return (((void*)0));
  }
  if (*VAR_4 != ':') {
   FUNC_2("Failed adding oid - %s", VAR_2);
   return (((void*)0));
  }
  if (FUNC_0(VAR_3, (asn_subid_t) VAR_6) < 0)
   return (((void*)0));
  VAR_5 = VAR_4 + 1;
 }


 VAR_8 = VAR_1;
 VAR_6 = FUNC_1(VAR_5, &VAR_4, 16);
 VAR_1 = VAR_8;
 if (VAR_6 > 0xff) {
  FUNC_2("Integer value %s not supported", VAR_2);
  return (((void*)0));
 }
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_6) < 0)
  return (((void*)0));

 return (VAR_4);
}
