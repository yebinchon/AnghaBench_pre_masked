
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int keyword; struct TYPE_4__* next; } ;
typedef TYPE_1__ keywordHash_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;

keywordHash_t *FUNC_2(keywordHash_t *VAR_0[], char *VAR_1)
{
 keywordHash_t *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 for (VAR_2 = VAR_0[VAR_3]; VAR_2; VAR_2 = VAR_2->next) {
  if (!FUNC_1(VAR_2->keyword, VAR_1))
   return VAR_2;
 }
 return ((void*)0);
}
