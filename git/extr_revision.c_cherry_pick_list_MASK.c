
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pathspec; } ;
struct rev_info {scalar_t__ cherry_mark; TYPE_2__ diffopt; int repo; } ;
struct TYPE_6__ {int pathspec; } ;
struct patch_ids {TYPE_1__ diffopts; } ;
struct patch_id {TYPE_5__* commit; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_8__ {unsigned int flags; } ;
struct commit {TYPE_3__ object; } ;
struct TYPE_9__ {unsigned int flags; } ;
struct TYPE_10__ {TYPE_4__ object; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct commit*,struct patch_ids*) ;
 int FUNC_1 (struct patch_ids*) ;
 struct patch_id* FUNC_2 (struct commit*,struct patch_ids*) ;
 int FUNC_3 (int ,struct patch_ids*) ;

__attribute__((used)) static void FUNC_4(struct commit_list *VAR_4, struct rev_info *VAR_5)
{
 struct commit_list *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9;
 struct patch_ids VAR_10;
 unsigned VAR_11;


 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next) {
  struct commit *VAR_12 = VAR_6->item;
  unsigned VAR_13 = VAR_12->object.flags;
  if (VAR_13 & VAR_0)
   ;
  else if (VAR_13 & VAR_3)
   VAR_7++;
  else
   VAR_8++;
 }

 if (!VAR_7 || !VAR_8)
  return;

 VAR_9 = VAR_7 < VAR_8;
 FUNC_3(VAR_5->repo, &VAR_10);
 VAR_10.diffopts.pathspec = VAR_5->diffopt.pathspec;


 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next) {
  struct commit *VAR_14 = VAR_6->item;
  unsigned VAR_15 = VAR_14->object.flags;

  if (VAR_15 & VAR_0)
   continue;





  if (VAR_9 != !!(VAR_15 & VAR_3))
   continue;
  FUNC_0(VAR_14, &VAR_10);
 }


 VAR_11 = VAR_5->cherry_mark ? VAR_1 : VAR_2;


 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next) {
  struct commit *VAR_16 = VAR_6->item;
  struct patch_id *VAR_17;
  unsigned VAR_18 = VAR_16->object.flags;

  if (VAR_18 & VAR_0)
   continue;




  if (VAR_9 == !!(VAR_18 & VAR_3))
   continue;




  VAR_17 = FUNC_2(VAR_16, &VAR_10);
  if (!VAR_17)
   continue;

  VAR_16->object.flags |= VAR_11;
  VAR_17->commit->object.flags |= VAR_11;
 }

 FUNC_1(&VAR_10);
}
