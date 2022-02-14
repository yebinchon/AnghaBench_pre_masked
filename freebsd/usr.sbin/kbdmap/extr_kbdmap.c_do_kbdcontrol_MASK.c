
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {char* keym; } ;


 int FUNC_0 (char**,char*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct keymap *VAR_3)
{
 char *VAR_4;
 FUNC_0(&VAR_4, "kbdcontrol -l %d/%s", VAR_0, VAR_3->keym);

 if (!VAR_2)
  FUNC_3(VAR_4);

 FUNC_1(VAR_1, "keymap=\"%s\"\n", VAR_3->keym);
 FUNC_2(VAR_4);
}
