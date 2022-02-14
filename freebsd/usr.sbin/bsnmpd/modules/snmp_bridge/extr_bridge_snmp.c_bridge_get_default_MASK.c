
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibif {int name; } ;
struct bridge_if {int bif_name; } ;


 struct bridge_if* VAR_0 ;
 struct mibif* FUNC_0 () ;
 struct mibif* FUNC_1 (struct mibif*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

struct bridge_if *
FUNC_3(void)
{
 struct mibif *VAR_1;

 if (VAR_0 != ((void*)0)) {


  for (VAR_1 = FUNC_0(); VAR_1 != ((void*)0); VAR_1 = FUNC_1(VAR_1))
   if (FUNC_2(VAR_1->name, VAR_0->bif_name) == 0)
    break;

  if (VAR_1 == ((void*)0))
   VAR_0 = ((void*)0);
 }

 return (VAR_0);
}
