
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct bridge_if {int dummy; } ;
struct asn_oid {scalar_t__ len; int* subs; } ;


 int VAR_0 ;
 struct bridge_if* FUNC_0 () ;
 struct bridge_if* FUNC_1 (char*) ;
 struct bridge_if* FUNC_2 (struct bridge_if*) ;

__attribute__((used)) static struct bridge_if *
FUNC_3(const struct asn_oid *VAR_1, uint VAR_2)
{
 uint VAR_3;
 char VAR_4[VAR_0];
 struct bridge_if *VAR_5;

 if (VAR_1->len - VAR_2 == 0)
  return (FUNC_0());

 if (VAR_1->len - VAR_2 != VAR_1->subs[VAR_2] + 1 || VAR_1->subs[VAR_2] >= VAR_0)
  return (((void*)0));

 for (VAR_3 = 0; VAR_3 < VAR_1->subs[VAR_2]; VAR_3++)
  VAR_4[VAR_3] = VAR_1->subs[VAR_2 + VAR_3 + 1];
 VAR_4[VAR_3] = '\0';

 if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0))
  return (((void*)0));

 return (FUNC_2(VAR_5));
}
