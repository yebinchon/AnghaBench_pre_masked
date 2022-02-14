
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct asn_oid {int dummy; } ;
typedef int int32_t ;
typedef int asn_subid_t ;


 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 int * FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, struct asn_oid *VAR_1)
{
 uint32_t VAR_2;
 int32_t VAR_3;
 char *VAR_4, *VAR_5;

 VAR_5 = VAR_0;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_2 = FUNC_2(VAR_5, &VAR_4, 10);
  if (VAR_2 > 0xff)
   return (((void*)0));
  if (*VAR_4 != '.' && FUNC_1("],\0", *VAR_4) == ((void*)0) && VAR_3 != 3)
   return (((void*)0));
  if (FUNC_0(VAR_1, (asn_subid_t) VAR_2) < 0)
   return (((void*)0));
  VAR_5 = VAR_4 + 1;
 }

 return (VAR_4);
}
