
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ git_pool_page ;
struct TYPE_6__ {TYPE_1__* pages; } ;
typedef TYPE_2__ git_pool ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(git_pool *VAR_0)
{
 git_pool_page *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->pages; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }

 VAR_0->pages = ((void*)0);
}
