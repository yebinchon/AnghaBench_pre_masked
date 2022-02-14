
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct commit_list**) ;

__attribute__((used)) static struct commit_list *FUNC_1(struct commit_list *VAR_1)
{
 struct commit_list *VAR_2, *VAR_3 = ((void*)0);
 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next)
  if (VAR_2->item->object.flags & VAR_0)
   FUNC_0(VAR_2->item, &VAR_3);
 return VAR_3;
}
