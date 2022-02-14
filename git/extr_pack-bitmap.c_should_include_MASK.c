
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object {int dummy; } ;
struct include_data {int bitmap_git; } ;
struct commit_list {struct commit_list* next; TYPE_2__* item; } ;
struct TYPE_6__ {int oid; } ;
struct commit {struct commit_list* parents; TYPE_3__ object; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct include_data*,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct object*,int *) ;

__attribute__((used)) static int FUNC_3(struct commit *VAR_1, void *VAR_2)
{
 struct include_data *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->bitmap_git, &VAR_1->object.oid);
 if (VAR_4 < 0)
  VAR_4 = FUNC_2(VAR_3->bitmap_git,
        (struct object *)VAR_1,
        ((void*)0));

 if (!FUNC_0(VAR_3->bitmap_git, VAR_3, &VAR_1->object.oid,
    VAR_4)) {
  struct commit_list *VAR_5 = VAR_1->parents;

  while (VAR_5) {
   VAR_5->item->object.flags |= VAR_0;
   VAR_5 = VAR_5->next;
  }

  return 0;
 }

 return 1;
}
