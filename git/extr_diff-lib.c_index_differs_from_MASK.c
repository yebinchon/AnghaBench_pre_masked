
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct setup_revision_opt {char const* def; } ;
struct TYPE_4__ {int quick; int exit_with_status; scalar_t__ has_changes; } ;
struct TYPE_3__ {int ita_invisible_in_index; TYPE_2__ flags; } ;
struct rev_info {TYPE_1__ diffopt; int pending; } ;
struct repository {int dummy; } ;
struct diff_flags {int dummy; } ;
typedef int opt ;


 int FUNC_0 (TYPE_2__*,struct diff_flags const*) ;
 int FUNC_1 (struct setup_revision_opt*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct repository*,struct rev_info*,int *) ;
 int FUNC_4 (struct rev_info*,int) ;
 int FUNC_5 (int ,int *,struct rev_info*,struct setup_revision_opt*) ;

int FUNC_6(struct repository *VAR_0,
         const char *VAR_1, const struct diff_flags *VAR_2,
         int VAR_3)
{
 struct rev_info VAR_4;
 struct setup_revision_opt VAR_5;

 FUNC_3(VAR_0, &VAR_4, ((void*)0));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.def = VAR_1;
 FUNC_5(0, ((void*)0), &VAR_4, &VAR_5);
 VAR_4.diffopt.flags.quick = 1;
 VAR_4.diffopt.flags.exit_with_status = 1;
 if (VAR_2)
  FUNC_0(&VAR_4.diffopt.flags, VAR_2);
 VAR_4.diffopt.ita_invisible_in_index = VAR_3;
 FUNC_4(&VAR_4, 1);
 FUNC_2(&VAR_4.pending);
 return (VAR_4.diffopt.flags.has_changes != 0);
}
