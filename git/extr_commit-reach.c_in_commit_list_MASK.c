
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_6__ {int oid; } ;
struct commit {TYPE_3__ object; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const struct commit_list *VAR_0, struct commit *VAR_1)
{
 for (; VAR_0; VAR_0 = VAR_0->next)
  if (FUNC_0(&VAR_0->item->object.oid, &VAR_1->object.oid))
   return 1;
 return 0;
}
