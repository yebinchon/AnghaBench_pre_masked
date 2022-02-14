
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wt_status {scalar_t__ detect_rename; scalar_t__ rename_limit; scalar_t__ rename_score; int pathspec; int ignore_submodule_arg; int show_untracked_files; int repo; } ;
struct TYPE_3__ {int dirty_submodules; int ignore_untracked_in_submodules; int override_submodule_config; } ;
struct TYPE_4__ {int ita_invisible_in_index; scalar_t__ detect_rename; scalar_t__ rename_limit; scalar_t__ rename_score; struct wt_status* format_callback_data; int format_callback; TYPE_1__ flags; int output_format; } ;
struct rev_info {int prune_data; TYPE_2__ diffopt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,struct rev_info*,int *) ;
 int FUNC_3 (struct rev_info*,int ) ;
 int FUNC_4 (int ,int *,struct rev_info*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct wt_status *VAR_2)
{
 struct rev_info VAR_3;

 FUNC_2(VAR_2->repo, &VAR_3, ((void*)0));
 FUNC_4(0, ((void*)0), &VAR_3, ((void*)0));
 VAR_3.diffopt.output_format |= VAR_0;
 VAR_3.diffopt.flags.dirty_submodules = 1;
 VAR_3.diffopt.ita_invisible_in_index = 1;
 if (!VAR_2->show_untracked_files)
  VAR_3.diffopt.flags.ignore_untracked_in_submodules = 1;
 if (VAR_2->ignore_submodule_arg) {
  VAR_3.diffopt.flags.override_submodule_config = 1;
  FUNC_1(&VAR_3.diffopt, VAR_2->ignore_submodule_arg);
 }
 VAR_3.diffopt.format_callback = VAR_1;
 VAR_3.diffopt.format_callback_data = VAR_2;
 VAR_3.diffopt.detect_rename = VAR_2->detect_rename >= 0 ? VAR_2->detect_rename : VAR_3.diffopt.detect_rename;
 VAR_3.diffopt.rename_limit = VAR_2->rename_limit >= 0 ? VAR_2->rename_limit : VAR_3.diffopt.rename_limit;
 VAR_3.diffopt.rename_score = VAR_2->rename_score >= 0 ? VAR_2->rename_score : VAR_3.diffopt.rename_score;
 FUNC_0(&VAR_3.prune_data, &VAR_2->pathspec);
 FUNC_3(&VAR_3, 0);
}
