
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct bridge_if {int dummy; } ;
struct asn_oid {size_t len; int* subs; } ;


 int VAR_0 ;
 struct bridge_if* FUNC_0 (char*) ;

__attribute__((used)) static struct bridge_if *
FUNC_1(const struct asn_oid *VAR_1, uint VAR_2)
{
 uint VAR_3;
 char VAR_4[VAR_0];

 if (VAR_1->len - VAR_2 != VAR_1->subs[VAR_2] + 1 || VAR_1->subs[VAR_2] >= VAR_0)
  return (((void*)0));

 for (VAR_3 = 0; VAR_3 < VAR_1->subs[VAR_2]; VAR_3++)
  VAR_4[VAR_3] = VAR_1->subs[VAR_2 + VAR_3 + 1];
 VAR_4[VAR_3] = '\0';

 return (FUNC_0(VAR_4));
}
