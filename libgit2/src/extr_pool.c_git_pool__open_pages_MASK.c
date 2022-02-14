
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ git_pool_page ;
struct TYPE_5__ {TYPE_1__* pages; } ;
typedef TYPE_2__ git_pool ;



uint32_t FUNC_0(git_pool *VAR_0)
{
 uint32_t VAR_1 = 0;
 git_pool_page *VAR_2;
 for (VAR_2 = VAR_0->pages; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) VAR_1++;
 return VAR_1;
}
