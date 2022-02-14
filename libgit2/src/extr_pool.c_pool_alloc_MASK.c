
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t avail; size_t size; int * data; } ;
typedef TYPE_1__ git_pool_page ;
struct TYPE_6__ {TYPE_1__* pages; } ;
typedef TYPE_2__ git_pool ;


 void* FUNC_0 (TYPE_2__*,size_t) ;

__attribute__((used)) static void *FUNC_1(git_pool *VAR_0, size_t VAR_1)
{
 git_pool_page *VAR_2 = VAR_0->pages;
 void *VAR_3 = ((void*)0);

 if (!VAR_2 || VAR_2->avail < VAR_1)
  return FUNC_0(VAR_0, VAR_1);

 VAR_3 = &VAR_2->data[VAR_2->size - VAR_2->avail];
 VAR_2->avail -= VAR_1;

 return VAR_3;
}
