
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* func ) (int,char**) ;int * cmd; } ;


 int FUNC_0 (int,char**) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int,char**) ;

int
FUNC_4(int VAR_2, char *VAR_3[])
{
    int VAR_4, VAR_5, VAR_6;
    char **VAR_7;

    VAR_6 = VAR_2;
    VAR_7 = VAR_3;
    while ((VAR_4 = FUNC_1(VAR_2, VAR_3, "")) != -1)
 switch(VAR_4) {
 default:
     return(FUNC_0(0, ((void*)0)));
 }

    VAR_2 -= VAR_1;
    VAR_3 += VAR_1;

    if (VAR_2 > 0)
 for (VAR_5 = 0; VAR_0[VAR_5].cmd != ((void*)0); VAR_5++)
     if (!FUNC_2(VAR_3[0], VAR_0[VAR_5].cmd))
  return(VAR_0[VAR_5].func(VAR_2, VAR_3));

    return(FUNC_0(VAR_6, VAR_7));
}
