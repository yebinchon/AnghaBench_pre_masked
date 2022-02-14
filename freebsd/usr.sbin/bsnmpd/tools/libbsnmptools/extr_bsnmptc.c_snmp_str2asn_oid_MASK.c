
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct asn_oid {int dummy; } ;
typedef int asn_subid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 int * FUNC_1 (char*,char) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_1, struct asn_oid *VAR_2)
{
 uint32_t VAR_3, VAR_4 = 0;






 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_1(",]", *(VAR_1 + VAR_4)) != ((void*)0))
   break;
 }

 if (VAR_4 >= VAR_0)
  return (((void*)0));

 if (FUNC_0(VAR_2, (asn_subid_t) VAR_4) < 0)
  return (((void*)0));

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  if (FUNC_0(VAR_2, (asn_subid_t) *(VAR_1 + VAR_3)) < 0)
   return (((void*)0));

 return (VAR_1 + VAR_4);
}
