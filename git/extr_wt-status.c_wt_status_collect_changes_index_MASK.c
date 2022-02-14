
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wt_status {char* ignore_submodule_arg; scalar_t__ detect_rename; scalar_t__ rename_limit; scalar_t__ rename_score; int pathspec; int reference; scalar_t__ is_initial; int repo; } ;
struct setup_revision_opt {int def; } ;
struct TYPE_3__ {int override_submodule_config; } ;
struct TYPE_4__ {int ita_invisible_in_index; scalar_t__ detect_rename; scalar_t__ rename_limit; scalar_t__ rename_score; struct wt_status* format_callback_data; int format_callback; int output_format; TYPE_1__ flags; } ;
struct rev_info {int prune_data; TYPE_2__ diffopt; } ;
typedef int opt ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (struct setup_revision_opt*,int ,int) ;
 int FUNC_4 (int ,struct rev_info*,int *) ;
 int FUNC_5 (struct rev_info*,int) ;
 int FUNC_6 (int ,int *,struct rev_info*,struct setup_revision_opt*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct wt_status *VAR_2)
{
 struct rev_info VAR_3;
 struct setup_revision_opt VAR_4;

 FUNC_4(VAR_2->repo, &VAR_3, ((void*)0));
 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.def = VAR_2->is_initial ? FUNC_1() : VAR_2->reference;
 FUNC_6(0, ((void*)0), &VAR_3, &VAR_4);

 VAR_3.diffopt.flags.override_submodule_config = 1;
 VAR_3.diffopt.ita_invisible_in_index = 1;
 if (VAR_2->ignore_submodule_arg) {
  FUNC_2(&VAR_3.diffopt, VAR_2->ignore_submodule_arg);
 } else {
  FUNC_2(&VAR_3.diffopt, "dirty");
 }

 VAR_3.diffopt.output_format |= VAR_0;
 VAR_3.diffopt.format_callback = VAR_1;
 VAR_3.diffopt.format_callback_data = VAR_2;
 VAR_3.diffopt.detect_rename = VAR_2->detect_rename >= 0 ? VAR_2->detect_rename : VAR_3.diffopt.detect_rename;
 VAR_3.diffopt.rename_limit = VAR_2->rename_limit >= 0 ? VAR_2->rename_limit : VAR_3.diffopt.rename_limit;
 VAR_3.diffopt.rename_score = VAR_2->rename_score >= 0 ? VAR_2->rename_score : VAR_3.diffopt.rename_score;
 FUNC_0(&VAR_3.prune_data, &VAR_2->pathspec);
 FUNC_5(&VAR_3, 1);
}
