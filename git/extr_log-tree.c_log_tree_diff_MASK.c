
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exit_with_status; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;
struct rev_info {struct log_info* loginfo; TYPE_2__ diffopt; scalar_t__ first_parent_only; scalar_t__ combine_merges; scalar_t__ ignore_merges; scalar_t__ show_root_diff; int diff; } ;
struct object_id {int dummy; } ;
struct log_info {struct commit* parent; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct object_id*,char*,TYPE_2__*) ;
 int FUNC_1 (struct object_id*,struct object_id*,char*,TYPE_2__*) ;
 int FUNC_2 (struct rev_info*,struct commit*) ;
 struct object_id* FUNC_3 (struct commit*) ;
 struct commit_list* FUNC_4 (struct rev_info*,struct commit*) ;
 int FUNC_5 (struct rev_info*) ;
 int FUNC_6 (struct commit*) ;

__attribute__((used)) static int FUNC_7(struct rev_info *VAR_0, struct commit *VAR_1, struct log_info *VAR_2)
{
 int VAR_3;
 struct commit_list *VAR_4;
 struct object_id *VAR_5;

 if (!VAR_0->diff && !VAR_0->diffopt.flags.exit_with_status)
  return 0;

 FUNC_6(VAR_1);
 VAR_5 = FUNC_3(VAR_1);


 VAR_4 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_4) {
  if (VAR_0->show_root_diff) {
   FUNC_0(VAR_5, "", &VAR_0->diffopt);
   FUNC_5(VAR_0);
  }
  return !VAR_0->loginfo;
 }


 if (VAR_4 && VAR_4->next) {
  if (VAR_0->ignore_merges)
   return 0;
  else if (VAR_0->combine_merges)
   return FUNC_2(VAR_0, VAR_1);
  else if (VAR_0->first_parent_only) {





   FUNC_6(VAR_4->item);
   FUNC_1(FUNC_3(VAR_4->item),
          VAR_5, "", &VAR_0->diffopt);
   FUNC_5(VAR_0);
   return !VAR_0->loginfo;
  }


  VAR_2->parent = VAR_4->item;
 }

 VAR_3 = 0;
 for (;;) {
  struct commit *VAR_6 = VAR_4->item;

  FUNC_6(VAR_6);
  FUNC_1(FUNC_3(VAR_6),
         VAR_5, "", &VAR_0->diffopt);
  FUNC_5(VAR_0);

  VAR_3 |= !VAR_0->loginfo;


  VAR_4 = VAR_4->next;
  if (!VAR_4)
   break;
  VAR_2->parent = VAR_4->item;
  VAR_0->loginfo = VAR_2;
 }
 return VAR_3;
}
