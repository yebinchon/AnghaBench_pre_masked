
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int uint64_t ;
struct asn_oid {int dummy; } ;
typedef int asn_subid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 int FUNC_1 (char*,char**,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_1, struct asn_oid *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8, VAR_9 = 0xFF00000000000000;

 VAR_7 = VAR_0;
 VAR_0 = 0;

 VAR_8 = FUNC_1(VAR_1, &VAR_3, 16);
 if (VAR_0 != 0) {
  FUNC_2("Bad BITS value %s", VAR_1);
  VAR_0 = VAR_7;
  return (((void*)0));
 }

 VAR_6 = 8;

 for (VAR_5 = sizeof(VAR_8); VAR_5 > 0; VAR_5--) {
  if ((VAR_8 & VAR_9) != 0)
   break;
  VAR_9 = VAR_9 >> VAR_6;
 }

 if (VAR_5 == 0)
  VAR_5 = 1;

 if (FUNC_0(VAR_2, (asn_subid_t) VAR_5) < 0)
  return (((void*)0));

 for (VAR_4 = 0, VAR_6 = 0; VAR_4 < VAR_5; VAR_4++, VAR_6 += 8)
  if (FUNC_0(VAR_2,
      (asn_subid_t)((VAR_8 & VAR_9) >> VAR_6)) < 0)
   return (((void*)0));

 return (VAR_3);
}
