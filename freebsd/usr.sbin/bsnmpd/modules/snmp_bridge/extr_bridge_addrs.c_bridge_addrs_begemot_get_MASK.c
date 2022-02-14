
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef size_t uint ;
struct tp_entry {int dummy; } ;
struct bridge_if {int dummy; } ;
struct asn_oid {size_t* subs; size_t len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tp_entry* FUNC_0 (char*,struct bridge_if*) ;
 struct bridge_if* FUNC_1 (char*) ;

__attribute__((used)) static struct tp_entry *
FUNC_2(const struct asn_oid *VAR_2, uint VAR_3)
{
 uint VAR_4, VAR_5;
 uint8_t VAR_6[VAR_0];
 char VAR_7[VAR_1];
 struct bridge_if *VAR_8;

 VAR_5 = VAR_2->subs[VAR_3];
 if (VAR_2->len - VAR_3 != VAR_5 + VAR_0 + 3 ||
     VAR_5 >= VAR_1 || VAR_2->subs[VAR_3 + VAR_5 + 1] != VAR_0)
  return (((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_7[VAR_4] = VAR_2->subs[VAR_5 + VAR_4 + 1];
 VAR_7[VAR_4] = '\0';

 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++)
  VAR_6[VAR_4 - 1] = VAR_2->subs[VAR_5 + VAR_4 + 1];

 if ((VAR_8 = FUNC_1(VAR_7)) == ((void*)0))
  return (((void*)0));

 return (FUNC_0(VAR_6, VAR_8));
}
