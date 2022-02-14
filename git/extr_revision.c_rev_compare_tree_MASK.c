
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int oid; } ;
struct tree {TYPE_3__ object; } ;
struct TYPE_6__ {scalar_t__ has_changes; } ;
struct TYPE_8__ {TYPE_2__ flags; } ;
struct TYPE_5__ {int nr; } ;
struct rev_info {TYPE_4__ pruning; TYPE_1__ prune_data; scalar_t__ simplify_by_decoration; } ;
struct commit {int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,char*,TYPE_4__*) ;
 struct tree* FUNC_1 (struct commit*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct rev_info *VAR_5,
       struct commit *VAR_6, struct commit *VAR_7)
{
 struct tree *VAR_8 = FUNC_1(VAR_6);
 struct tree *VAR_9 = FUNC_1(VAR_7);

 if (!VAR_8)
  return VAR_1;
 if (!VAR_9)
  return VAR_2;

 if (VAR_5->simplify_by_decoration) {




  if (FUNC_2(&VAR_7->object))
   return VAR_0;







  if (!VAR_5->prune_data.nr)
   return VAR_3;
 }

 VAR_4 = VAR_3;
 VAR_5->pruning.flags.has_changes = 0;
 if (FUNC_0(&VAR_8->object.oid, &VAR_9->object.oid, "",
      &VAR_5->pruning) < 0)
  return VAR_0;
 return VAR_4;
}
