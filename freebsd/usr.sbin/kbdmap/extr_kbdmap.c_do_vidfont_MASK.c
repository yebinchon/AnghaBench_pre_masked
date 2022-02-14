
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {char* keym; } ;


 int FUNC_0 (char**,char*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct keymap *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4, *VAR_5;

 FUNC_0(&VAR_2, "%d/%s", VAR_0, VAR_1->keym);
 FUNC_6(VAR_2);
 FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_1->keym);
 VAR_4 = FUNC_5(VAR_3, '-');
 if (VAR_4 && VAR_4[1]!='\0') {
  VAR_4++;
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5) {
   *VAR_5 = '\0';
   FUNC_3("font%s=%s\n", VAR_4, VAR_1->keym);
  }
 }
 FUNC_1(VAR_3);
}
