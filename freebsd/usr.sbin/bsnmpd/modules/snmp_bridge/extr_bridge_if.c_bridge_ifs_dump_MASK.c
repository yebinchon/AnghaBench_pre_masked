
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_if {int sysindex; int bif_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct bridge_if*) ;
 struct bridge_if* FUNC_1 () ;
 struct bridge_if* FUNC_2 (struct bridge_if*) ;
 int FUNC_3 (struct bridge_if*) ;
 int FUNC_4 (int ,char*,int ,int ) ;

void
FUNC_5(void)
{
 struct bridge_if *VAR_1;

 for (VAR_1 = FUNC_1(); VAR_1 != ((void*)0);
  VAR_1 = FUNC_2(VAR_1)) {
  FUNC_4(VAR_0, "Bridge %s, index - %d", VAR_1->bif_name,
      VAR_1->sysindex);
  FUNC_3(VAR_1);
  FUNC_0(VAR_1);
 }
}
