
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* func ) (int,int,char**) ;int * cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int,int,char**) ;

int
FUNC_6(int VAR_3, char *VAR_4[])
{
    int VAR_5, VAR_6;

    if (VAR_3 < 2) {
 FUNC_2(((void*)0));
    } else {
 if ((VAR_6 = FUNC_3(VAR_1, VAR_0)) == -1)
     FUNC_1(1, "can't open %s", VAR_1);

 for (VAR_5 = 0; VAR_2[VAR_5].cmd != ((void*)0); VAR_5++)
     if (!FUNC_4(VAR_4[1], VAR_2[VAR_5].cmd))
  break;
 VAR_2[VAR_5].func(VAR_6, VAR_3 - 1, VAR_4 + 1);
 FUNC_0(VAR_6);
    }
    return(0);
}
