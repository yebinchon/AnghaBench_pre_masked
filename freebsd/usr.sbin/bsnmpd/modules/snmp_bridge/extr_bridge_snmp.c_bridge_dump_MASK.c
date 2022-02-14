
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_if {int bif_name; } ;


 int VAR_0 ;
 struct bridge_if* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct bridge_if *VAR_1;

 if ((VAR_1 = FUNC_0()) == ((void*)0))
  FUNC_3(VAR_0, "Dump: no default bridge interface");
 else
  FUNC_3(VAR_0, "Dump: default bridge interface %s",
       VAR_1->bif_name);

 FUNC_1();
 FUNC_2();
}
