
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct asn_oid {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int asn_subid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 int FUNC_1 (char*,char**,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_3, struct asn_oid *VAR_4)
{
 char *VAR_5, *VAR_6;
 uint32_t VAR_7, VAR_8;
 int32_t VAR_9;

 if (FUNC_0(VAR_4, (asn_subid_t) VAR_0) < 0)
  return (((void*)0));

 VAR_6 = VAR_3;

 VAR_9 = VAR_2;
 VAR_2 = 0;
 VAR_7 = FUNC_1(VAR_6, &VAR_5, 10);

 if (VAR_7 > VAR_1 || VAR_2 != 0 || *VAR_5 != '.') {
  VAR_2 = VAR_9;
  FUNC_2("Bad bridge priority value %d", VAR_7);
  return (((void*)0));
 }

 if (FUNC_0(VAR_4, (asn_subid_t) (VAR_7 & 0xff00)) < 0)
  return (((void*)0));

 if (FUNC_0(VAR_4, (asn_subid_t) (VAR_7 & 0xff)) < 0)
  return (((void*)0));

 VAR_6 = VAR_5 + 1;
 for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
  VAR_9 = VAR_2;
  VAR_2 = 0;
  VAR_7 = FUNC_1(VAR_6, &VAR_5, 16);
  VAR_2 = VAR_9;
  if (VAR_7 > 0xff) {
   FUNC_2("Integer value %s not supported", VAR_3);
   return (((void*)0));
  }
  if (*VAR_5 != ':') {
   FUNC_2("Failed adding oid - %s",VAR_3);
   return (((void*)0));
  }
  if (FUNC_0(VAR_4, (asn_subid_t) VAR_7) < 0)
   return (((void*)0));
  VAR_6 = VAR_5 + 1;
 }


 VAR_9 = VAR_2;
 VAR_2 = 0;
 VAR_7 = FUNC_1(VAR_6, &VAR_5, 16);
 VAR_2 = VAR_9;
 if (VAR_7 > 0xff) {
  FUNC_2("Integer value %s not supported", VAR_3);
  return (((void*)0));
 }
 if (FUNC_0(VAR_4, (asn_subid_t) VAR_7) < 0)
  return (((void*)0));

 return (VAR_5);
}
