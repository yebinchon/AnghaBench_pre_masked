
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* item; struct TYPE_5__* next; } ;
typedef TYPE_2__ git_commit_list ;
struct TYPE_4__ {scalar_t__ time; int uninteresting; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(git_commit_list *VAR_1, int64_t VAR_2, int VAR_3)
{

 if (!VAR_1)
  return 0;





 if (VAR_2 <= VAR_1->item->time)
  return VAR_0;

 for (; VAR_1; VAR_1 = VAR_1->next) {




  if (!VAR_1->item->uninteresting || VAR_1->item->time > VAR_2)
   return VAR_0;
 }


 return VAR_3 - 1;
}
