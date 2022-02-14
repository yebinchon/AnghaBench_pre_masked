
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t avail; void* data; struct TYPE_5__* next; } ;
typedef TYPE_1__ git_pool_page ;
struct TYPE_6__ {size_t page_size; TYPE_1__* pages; } ;
typedef TYPE_2__ git_pool ;


 scalar_t__ FUNC_0 (size_t*,size_t const,int) ;
 TYPE_1__* FUNC_1 (size_t) ;

__attribute__((used)) static void *FUNC_2(git_pool *VAR_0, size_t VAR_1)
{
 git_pool_page *VAR_2;
 const size_t VAR_3 = (VAR_1 <= VAR_0->page_size) ? VAR_0->page_size : VAR_1;
 size_t VAR_4;

 if (FUNC_0(&VAR_4, VAR_3, sizeof(git_pool_page)) ||
  !(VAR_2 = FUNC_1(VAR_4)))
  return ((void*)0);

 VAR_2->size = VAR_3;
 VAR_2->avail = VAR_3 - VAR_1;
 VAR_2->next = VAR_0->pages;

 VAR_0->pages = VAR_2;

 return VAR_2->data;
}
