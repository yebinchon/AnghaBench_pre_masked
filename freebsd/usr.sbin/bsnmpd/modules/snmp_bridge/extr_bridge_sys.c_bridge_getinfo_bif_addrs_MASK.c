
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tp_entry {int dummy; } ;
struct ifbareq {int ifba_dst; } ;
struct bridge_if {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct bridge_if*,struct ifbareq**) ;
 int FUNC_1 (struct ifbareq*,struct tp_entry*) ;
 struct tp_entry* FUNC_2 (int ,struct bridge_if*) ;
 int FUNC_3 (struct ifbareq*) ;

int
FUNC_4(struct bridge_if *VAR_0)
{
 uint32_t VAR_1;
 int32_t VAR_2;
 struct ifbareq *VAR_3, *VAR_4;
 struct tp_entry *VAR_5;

 if ((VAR_2 = FUNC_0(VAR_0, &VAR_3)) < 0)
  return (-1);

 for (VAR_1 = 0; VAR_1 < VAR_2 / sizeof(struct ifbareq); VAR_1++) {
  VAR_4 = VAR_3 + VAR_1;

  if ((VAR_5 = FUNC_2(VAR_4->ifba_dst, VAR_0)) != ((void*)0))
   FUNC_1(VAR_4, VAR_5);
 }

 FUNC_3(VAR_3);
 return (VAR_1);
}
