
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibif {int name; } ;
struct bridge_if {int num_addrs; int bif_name; } ;


 int FUNC_0 () ;
 struct bridge_if* FUNC_1 () ;
 struct bridge_if* FUNC_2 (struct bridge_if*) ;
 int FUNC_3 (struct bridge_if*) ;
 int FUNC_4 (struct bridge_if*) ;
 struct mibif* FUNC_5 () ;
 struct mibif* FUNC_6 (struct mibif*) ;
 scalar_t__ FUNC_7 (int ,int ) ;

void
FUNC_8(void)
{
 struct mibif *VAR_0;
 struct bridge_if *VAR_1, *VAR_2;

 for (VAR_1 = FUNC_1(); VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = FUNC_2(VAR_1);

  for (VAR_0 = FUNC_5(); VAR_0 != ((void*)0);
      VAR_0 = FUNC_6(VAR_0))
   if (FUNC_7(VAR_0->name, VAR_1->bif_name) == 0)
    break;

  if (VAR_0 != ((void*)0))
   VAR_1->num_addrs = FUNC_4(VAR_1);
  else
   FUNC_3(VAR_1);
 }

 FUNC_0();
}
