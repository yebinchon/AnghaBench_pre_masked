
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; struct TYPE_3__* next; } ;
typedef TYPE_1__ strlst_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_3 (char*) ;

char *FUNC_4(char *VAR_2)
{
 char VAR_3[VAR_0];
 strlst_t *VAR_4;
 char *VAR_5;

 for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  FUNC_2(VAR_3, VAR_0, "%s/%s", VAR_4->str, VAR_2);
  if (!FUNC_0(VAR_3))
   continue;

  if ((VAR_5 = FUNC_3(VAR_3)) == ((void*)0))
   FUNC_1();

  return VAR_5;
 }
 return ((void*)0);
}
