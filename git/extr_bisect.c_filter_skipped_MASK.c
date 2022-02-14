
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct commit_list {struct commit_list* next; TYPE_2__* item; } ;
struct TYPE_7__ {int nr; } ;
struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_1__ object; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int *) ;
 TYPE_3__ VAR_0 ;

struct commit_list *FUNC_1(struct commit_list *VAR_1,
       struct commit_list **VAR_2,
       int VAR_3,
       int *VAR_4,
       int *VAR_5)
{
 struct commit_list *VAR_6 = ((void*)0), **VAR_7 = &VAR_6;

 *VAR_2 = ((void*)0);

 if (VAR_5)
  *VAR_5 = 0;
 if (VAR_4)
  *VAR_4 = 0;

 if (!VAR_0.nr)
  return VAR_1;

 while (VAR_1) {
  struct commit_list *VAR_8 = VAR_1->next;
  VAR_1->next = ((void*)0);
  if (0 <= FUNC_0(&VAR_0, &VAR_1->item->object.oid)) {
   if (VAR_5 && !*VAR_5)
    *VAR_5 = 1;

   *VAR_2 = VAR_1;
   VAR_2 = &VAR_1->next;
  } else {
   if (!VAR_3) {
    if (!VAR_5 || !*VAR_5)
     return VAR_1;
   } else if (VAR_5 && !*VAR_5) {

    *VAR_5 = -1;
   }

   *VAR_7 = VAR_1;
   VAR_7 = &VAR_1->next;
   if (VAR_4)
    (*VAR_4)++;
  }
  VAR_1 = VAR_8;
 }

 if (VAR_5 && *VAR_5 == -1)
  *VAR_5 = 0;

 return VAR_6;
}
