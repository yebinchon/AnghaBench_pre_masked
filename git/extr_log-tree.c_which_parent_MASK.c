
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ FUNC_0 (int *,struct object_id const*) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_0, const struct commit *VAR_1)
{
 int VAR_2;
 const struct commit_list *VAR_3;

 for (VAR_2 = 0, VAR_3 = VAR_1->parents; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(&VAR_3->item->object.oid, VAR_0))
   return VAR_2;
  VAR_2++;
 }
 return -1;
}
