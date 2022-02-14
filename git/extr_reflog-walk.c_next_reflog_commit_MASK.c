
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reflog_info {int noid; } ;
struct object {scalar_t__ type; } ;
struct commit_reflog {size_t recno; TYPE_1__* reflogs; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {struct reflog_info* items; } ;


 scalar_t__ VAR_0 ;
 struct object* FUNC_0 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct commit *FUNC_1(struct commit_reflog *VAR_2)
{
 for (; VAR_2->recno >= 0; VAR_2->recno--) {
  struct reflog_info *VAR_3 = &VAR_2->reflogs->items[VAR_2->recno];
  struct object *VAR_4 = FUNC_0(VAR_1,
        &VAR_3->noid);

  if (VAR_4 && VAR_4->type == VAR_0)
   return (struct commit *)VAR_4;
 }
 return ((void*)0);
}
