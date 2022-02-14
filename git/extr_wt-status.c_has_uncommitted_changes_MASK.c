
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tree {int object; } ;
struct TYPE_6__ {int ignore_submodules; int quick; } ;
struct TYPE_9__ {TYPE_1__ flags; } ;
struct TYPE_7__ {int nr; } ;
struct rev_info {TYPE_4__ diffopt; TYPE_2__ pending; } ;
struct repository {int index; } ;
struct TYPE_8__ {int empty_tree; } ;


 int FUNC_0 (struct rev_info*) ;
 int FUNC_1 (struct rev_info*,int *,char*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct tree* FUNC_5 (struct repository*,int ) ;
 int FUNC_6 (struct repository*,struct rev_info*,int *) ;
 int FUNC_7 (struct rev_info*,int) ;
 TYPE_3__* VAR_0 ;

int FUNC_8(struct repository *VAR_1,
       int VAR_2)
{
 struct rev_info VAR_3;
 int VAR_4;

 if (FUNC_4(VAR_1->index))
  return 0;

 FUNC_6(VAR_1, &VAR_3, ((void*)0));
 if (VAR_2)
  VAR_3.diffopt.flags.ignore_submodules = 1;
 VAR_3.diffopt.flags.quick = 1;

 FUNC_0(&VAR_3);
 if (!VAR_3.pending.nr) {




  struct tree *VAR_5 = FUNC_5(VAR_1, VAR_0->empty_tree);
  FUNC_1(&VAR_3, &VAR_5->object, "");
 }

 FUNC_3(&VAR_3.diffopt);
 VAR_4 = FUNC_7(&VAR_3, 1);
 return FUNC_2(&VAR_3.diffopt, VAR_4);
}
