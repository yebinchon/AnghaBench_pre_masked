
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct asn_oid {int dummy; } ;
typedef int asn_subid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 int FUNC_1 (char*,char**,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_3, struct asn_oid *VAR_4)
{
 char *VAR_5, *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_4, (asn_subid_t) VAR_0) < 0)
  return (((void*)0));

 VAR_6 = VAR_3;

 VAR_8 = VAR_2;
 VAR_2 = 0;
 VAR_7 = FUNC_1(VAR_6, &VAR_5, 10);

 if (VAR_7 > VAR_1 || VAR_2 != 0 || *VAR_5 != '.') {
  VAR_2 = VAR_8;
  FUNC_2("Bad bridge port priority value %d", VAR_7);
  return (((void*)0));
 }

 if (FUNC_0(VAR_4, (asn_subid_t) VAR_7) < 0)
  return (((void*)0));

 VAR_8 = VAR_2;
 VAR_2 = 0;
 VAR_7 = FUNC_1(VAR_6, &VAR_5, 16);
 VAR_2 = VAR_8;

 if (VAR_7 > 0xff) {
  FUNC_2("Bad port number - %d", VAR_7);
  return (((void*)0));
 }

 if (FUNC_0(VAR_4, (asn_subid_t) VAR_7) < 0)
  return (((void*)0));

 return (VAR_5);
}
