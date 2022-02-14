
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct bridge_if {size_t* bif_name; } ;
struct asn_oid {size_t len; size_t* subs; } ;


 size_t FUNC_0 (size_t*) ;

__attribute__((used)) static void
FUNC_1(struct asn_oid *VAR_0, uint VAR_1,
 const struct bridge_if *VAR_2)
{
 uint VAR_3;

 VAR_0->len = VAR_1 + FUNC_0(VAR_2->bif_name) + 1;
 VAR_0->subs[VAR_1] = FUNC_0(VAR_2->bif_name);

 for (VAR_3 = 1; VAR_3 <= FUNC_0(VAR_2->bif_name); VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->bif_name[VAR_3 - 1];
}
