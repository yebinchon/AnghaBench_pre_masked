
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ prog_t ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;

void
FUNC_8(void)
{
 prog_t *VAR_7;
 FILE *VAR_8;
 char VAR_9[VAR_1];

 FUNC_4(VAR_9, VAR_1, "generating %s", VAR_5);
 FUNC_5(VAR_9);

 if ((VAR_8 = FUNC_1(VAR_5, "w")) == ((void*)0)) {
  FUNC_7("%s", VAR_5);
  VAR_2 = 1;
  return;
 }

 FUNC_2(VAR_8, "# %s - generated from %s by crunchgen %s\n\n",
     VAR_5, VAR_3, VAR_0);

 if (VAR_4[0] != '\0')
  FUNC_2(VAR_8, ".include \"%s\"\n", VAR_4);

 FUNC_6(VAR_8);
 for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
  FUNC_3(VAR_8, VAR_7);

 FUNC_2(VAR_8, "\n# ========\n");
 FUNC_0(VAR_8);
}
