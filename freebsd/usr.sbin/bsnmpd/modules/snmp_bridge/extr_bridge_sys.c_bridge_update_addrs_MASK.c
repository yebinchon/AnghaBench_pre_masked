
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tp_entry {int flags; } ;
struct ifbareq {int ifba_dst; } ;
struct bridge_if {int addrs_age; } ;
typedef int int32_t ;


 int VAR_0 ;
 struct tp_entry* FUNC_0 (struct bridge_if*) ;
 struct tp_entry* FUNC_1 (struct tp_entry*) ;
 struct tp_entry* FUNC_2 (int ,struct bridge_if*) ;
 int FUNC_3 (struct bridge_if*,struct ifbareq**) ;
 int FUNC_4 (struct ifbareq*,struct tp_entry*) ;
 int FUNC_5 (struct tp_entry*,struct bridge_if*) ;
 struct tp_entry* FUNC_6 (int ,struct bridge_if*) ;
 int FUNC_7 (struct ifbareq*) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct bridge_if *VAR_1)
{
 int VAR_2, VAR_3;
 uint32_t VAR_4;
 int32_t VAR_5;
 struct tp_entry *VAR_6, *VAR_7;
 struct ifbareq *VAR_8, *VAR_9;

 if ((VAR_5 = FUNC_3(VAR_1, &VAR_8)) < 0)
  return (-1);

 VAR_2 = VAR_3 = 0;


 for (VAR_4 = 0; VAR_4 < VAR_5 / sizeof(struct ifbareq); VAR_4++) {
  VAR_9 = VAR_8 + VAR_4;

  if ((VAR_6 = FUNC_2(VAR_9->ifba_dst, VAR_1)) == ((void*)0)) {
   VAR_2++;

   if ((VAR_6 = FUNC_6(VAR_9->ifba_dst, VAR_1))
       == ((void*)0))
    continue;
  } else
   VAR_3++;

  FUNC_4(VAR_9, VAR_6);
  VAR_6-> flags |= 0x01;
 }
 FUNC_7(VAR_8);

 for (VAR_6 = FUNC_0(VAR_1); VAR_6 != ((void*)0); VAR_6 = VAR_7) {
  VAR_7 = FUNC_1(VAR_6);

  if ((VAR_6-> flags & 0x01) == 0)
   FUNC_5(VAR_6, VAR_1);
  else
   VAR_6-> flags &= ~0x01;
 }


 VAR_1->addrs_age = FUNC_8(((void*)0));
 return (VAR_3 + VAR_2);
}
