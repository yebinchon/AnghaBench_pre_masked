
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct tp_entry {size_t* tp_addr; } ;
struct asn_oid {size_t len; size_t* subs; } ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct asn_oid *VAR_1, uint VAR_2,
 const struct tp_entry *VAR_3)
{
 int VAR_4;

 VAR_1->len = VAR_2 + VAR_0 + 1;
 VAR_1->subs[VAR_2] = VAR_0;

 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++)
  VAR_1->subs[VAR_2 + VAR_4] = VAR_3->tp_addr[VAR_4 - 1];
}
