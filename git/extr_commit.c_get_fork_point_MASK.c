
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_collect {int initial; int nr; TYPE_2__** commit; } ;
struct object_id {int dummy; } ;
struct commit_list {struct commit* item; scalar_t__ next; } ;
struct TYPE_3__ {int flags; } ;
struct commit {TYPE_1__ object; } ;
typedef int revs ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (struct object_id*,struct rev_collect*) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ,struct rev_collect*) ;
 int FUNC_2 (struct commit_list*) ;
 struct commit_list* FUNC_3 (struct commit*,int,TYPE_2__**) ;
 int FUNC_4 (char const*,struct object_id*) ;
 int FUNC_5 (struct rev_collect*,int ,int) ;

struct commit *FUNC_6(const char *VAR_2, struct commit *VAR_3)
{
 struct object_id VAR_4;
 struct rev_collect VAR_5;
 struct commit_list *VAR_6;
 int VAR_7;
 struct commit *VAR_8 = ((void*)0);

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.initial = 1;
 FUNC_1(VAR_2, VAR_1, &VAR_5);

 if (!VAR_5.nr && !FUNC_4(VAR_2, &VAR_4))
  FUNC_0(&VAR_4, &VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_5.nr; VAR_7++)
  VAR_5.commit[VAR_7]->object.flags &= ~VAR_0;

 VAR_6 = FUNC_3(VAR_3, VAR_5.nr, VAR_5.commit);





 if (!VAR_6 || VAR_6->next)
  goto cleanup_return;


 for (VAR_7 = 0; VAR_7 < VAR_5.nr; VAR_7++)
  if (&VAR_6->item->object == &VAR_5.commit[VAR_7]->object)
   break;
 if (VAR_5.nr <= VAR_7)
  goto cleanup_return;

 VAR_8 = VAR_6->item;

cleanup_return:
 FUNC_2(VAR_6);
 return VAR_8;
}
