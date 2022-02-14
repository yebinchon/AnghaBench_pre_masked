
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct entry {int ttl; struct commit* commit; } ;
struct TYPE_4__ {scalar_t__ nr; } ;
struct data {scalar_t__ non_common_revs; TYPE_2__ rev_list; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct TYPE_3__ {int flags; struct object_id const oid; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct entry*) ;
 int FUNC_1 (struct commit*) ;
 struct entry* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct data*,struct entry*,int ) ;

__attribute__((used)) static const struct object_id *FUNC_4(struct data *VAR_2)
{
 struct commit *VAR_3 = ((void*)0);

 while (VAR_3 == ((void*)0)) {
  struct entry *VAR_4;
  struct commit *VAR_5;
  struct commit_list *VAR_6;
  int VAR_7 = 0;

  if (VAR_2->rev_list.nr == 0 || VAR_2->non_common_revs == 0)
   return ((void*)0);

  VAR_4 = FUNC_2(&VAR_2->rev_list);
  VAR_5 = VAR_4->commit;
  VAR_5->object.flags |= VAR_1;
  if (!(VAR_5->object.flags & VAR_0))
   VAR_2->non_common_revs--;

  if (!(VAR_5->object.flags & VAR_0) && !VAR_4->ttl)
   VAR_3 = VAR_5;

  FUNC_1(VAR_5);
  for (VAR_6 = VAR_5->parents; VAR_6; VAR_6 = VAR_6->next)
   VAR_7 |= FUNC_3(VAR_2, VAR_4, VAR_6->item);

  if (!(VAR_5->object.flags & VAR_0) && !VAR_7)





   VAR_3 = VAR_5;

  FUNC_0(VAR_4);
 }

 return &VAR_3->object.oid;
}
