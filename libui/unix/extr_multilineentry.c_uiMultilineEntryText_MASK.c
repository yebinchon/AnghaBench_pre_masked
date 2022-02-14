
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int textbuf; } ;
typedef TYPE_1__ uiMultilineEntry ;
typedef int GtkTextIter ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (int ,int *,int *,int ) ;
 char* FUNC_4 (char*) ;

char *FUNC_5(uiMultilineEntry *VAR_1)
{
 GtkTextIter VAR_2, VAR_3;
 char *VAR_4, *VAR_5;

 FUNC_2(VAR_1->textbuf, &VAR_2);
 FUNC_1(VAR_1->textbuf, &VAR_3);
 VAR_4 = FUNC_3(VAR_1->textbuf, &VAR_2, &VAR_3, VAR_0);

 VAR_5 = FUNC_4(VAR_4);
 FUNC_0(VAR_4);
 return VAR_5;
}
