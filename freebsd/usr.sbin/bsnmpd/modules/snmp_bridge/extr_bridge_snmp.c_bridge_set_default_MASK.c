
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_if {char* bif_name; } ;


 int VAR_0 ;
 struct bridge_if* VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;

void
FUNC_1(struct bridge_if *VAR_2)
{
 VAR_1 = VAR_2;

 FUNC_0(VAR_0, "Set default bridge interface to: %s",
     VAR_2 == ((void*)0) ? "(none)" : VAR_2->bif_name);
}
