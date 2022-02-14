
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; } ;
struct TYPE_5__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
typedef int lastName ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__,int) ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int VAR_0 ;

void FUNC_9(void) {
 char VAR_1[1024];
  menuDef_t *VAR_2 = FUNC_0();
 char *VAR_3 = FUNC_5("ui_menuFiles");
 if (VAR_2 && VAR_2->window.name) {
  FUNC_3(VAR_1, VAR_2->window.name, sizeof(VAR_1));
 }
 if (VAR_3 == ((void*)0) || VAR_3[0] == '\0') {
  VAR_3 = "ui/menus.txt";
 }

 FUNC_4();




 FUNC_8("gameinfo.txt");
 FUNC_6();


 FUNC_7(VAR_3, VAR_0);
 FUNC_2();
 FUNC_1(VAR_1);

}
