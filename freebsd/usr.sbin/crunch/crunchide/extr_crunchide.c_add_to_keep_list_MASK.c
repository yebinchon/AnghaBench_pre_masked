
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keep {struct keep* next; int * sym; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 struct keep* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int *) ;
 int * FUNC_4 (char*) ;

void
FUNC_5(char *VAR_3)
{
    struct keep *VAR_4, *VAR_5, *VAR_6;
    int VAR_7;

    VAR_7 = 0;

    for(VAR_6 = VAR_0, VAR_5 = ((void*)0); VAR_6; VAR_5 = VAR_6, VAR_6 = VAR_6->next)
 if((VAR_7 = FUNC_3(VAR_3, VAR_6->sym)) <= 0) break;

    if(VAR_6 && VAR_7 == 0)
 return;

    VAR_4 = (struct keep *) FUNC_2(sizeof(struct keep));
    if(VAR_4) VAR_4->sym = FUNC_4(VAR_3);
    if(VAR_4 == ((void*)0) || VAR_4->sym == ((void*)0)) {
 FUNC_1(VAR_2, "%s: out of memory for keep list\n", VAR_1);
 FUNC_0(1);
    }

    VAR_4->next = VAR_6;
    if(VAR_5) VAR_5->next = VAR_4;
    else VAR_0 = VAR_4;
}
