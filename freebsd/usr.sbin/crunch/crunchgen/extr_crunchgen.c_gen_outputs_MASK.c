
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ prog_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int VAR_3 ;

void
FUNC_7(void)
{
 prog_t *VAR_4;

 for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  FUNC_0(VAR_4);

 FUNC_5();
 FUNC_4();
 FUNC_2();
 FUNC_3();
 FUNC_6("");
 FUNC_1(VAR_3,
     "Run \"%s -f %s\" to build crunched binary.\n",
     VAR_1, VAR_0);
}
