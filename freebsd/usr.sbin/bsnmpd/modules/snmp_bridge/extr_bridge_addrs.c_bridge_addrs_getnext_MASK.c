
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint ;
struct tp_entry {int dummy; } ;
struct bridge_if {int dummy; } ;
struct asn_oid {scalar_t__ len; int* subs; } ;


 int VAR_0 ;
 struct tp_entry* FUNC_0 (struct bridge_if*) ;
 struct tp_entry* FUNC_1 (struct tp_entry*) ;
 struct tp_entry* FUNC_2 (int*,struct bridge_if*) ;

__attribute__((used)) static struct tp_entry *
FUNC_3(const struct asn_oid *VAR_1, uint VAR_2,
 struct bridge_if *VAR_3)
{
 int VAR_4;
 uint8_t VAR_5[VAR_0];
 static struct tp_entry *VAR_6;

 if (VAR_1->len - VAR_2 == 0)
  return (FUNC_0(VAR_3));

 if (VAR_1->len - VAR_2 != VAR_0 + 1 ||
     VAR_1->subs[VAR_2] != VAR_0)
  return (((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_5[VAR_4] = VAR_1->subs[VAR_2 + VAR_4 + 1];

 if ((VAR_6 = FUNC_2(VAR_5, VAR_3)) == ((void*)0))
  return (((void*)0));

 return (FUNC_1(VAR_6));
}
