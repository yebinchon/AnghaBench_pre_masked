
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ignore_submodules; int override_submodule_config; int quick; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;
struct rev_info {TYPE_2__ diffopt; } ;
struct repository {int dummy; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct repository*,struct rev_info*,int *) ;
 int FUNC_3 (struct rev_info*,int ) ;

int FUNC_4(struct repository *VAR_0, int VAR_1)
{
 struct rev_info VAR_2;
 int VAR_3;

 FUNC_2(VAR_0, &VAR_2, ((void*)0));
 if (VAR_1) {
  VAR_2.diffopt.flags.ignore_submodules = 1;
  VAR_2.diffopt.flags.override_submodule_config = 1;
 }
 VAR_2.diffopt.flags.quick = 1;
 FUNC_1(&VAR_2.diffopt);
 VAR_3 = FUNC_3(&VAR_2, 0);
 return FUNC_0(&VAR_2.diffopt, VAR_3);
}
