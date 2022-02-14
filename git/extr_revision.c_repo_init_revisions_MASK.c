
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int use_default_notes; } ;
struct TYPE_9__ {char const* prefix; int prefix_length; } ;
struct TYPE_10__ {int status_only; } ;
struct TYPE_6__ {int recursive; int quick; } ;
struct TYPE_7__ {struct rev_info* change_fn_data; int change; int add_remove; TYPE_1__ flags; struct repository* repo; } ;
struct rev_info {int ignore_merges; int simplify_history; int dense; char const* prefix; int max_age; int min_age; int skip_count; int max_count; int max_parents; int expand_tabs_in_log; int expand_tabs_in_log_default; TYPE_3__ notes_opt; TYPE_4__ diffopt; struct repository* repo; TYPE_5__ grep_filter; int commit_format; int sort_order; TYPE_2__ pruning; int abbrev; } ;
struct repository {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,struct repository*,char const*) ;
 int FUNC_1 (struct repository*) ;
 int FUNC_2 (struct rev_info*,int ,int) ;
 int FUNC_3 (struct repository*,TYPE_4__*) ;
 int FUNC_4 (char const*) ;

void FUNC_5(struct repository *VAR_5,
    struct rev_info *VAR_6,
    const char *VAR_7)
{
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->repo = VAR_5;
 VAR_6->abbrev = VAR_1;
 VAR_6->ignore_merges = 1;
 VAR_6->simplify_history = 1;
 VAR_6->pruning.repo = VAR_5;
 VAR_6->pruning.flags.recursive = 1;
 VAR_6->pruning.flags.quick = 1;
 VAR_6->pruning.add_remove = VAR_3;
 VAR_6->pruning.change = VAR_4;
 VAR_6->pruning.change_fn_data = VAR_6;
 VAR_6->sort_order = VAR_2;
 VAR_6->dense = 1;
 VAR_6->prefix = VAR_7;
 VAR_6->max_age = -1;
 VAR_6->min_age = -1;
 VAR_6->skip_count = -1;
 VAR_6->max_count = -1;
 VAR_6->max_parents = -1;
 VAR_6->expand_tabs_in_log = -1;

 VAR_6->commit_format = VAR_0;
 VAR_6->expand_tabs_in_log_default = 8;

 FUNC_1(VAR_6->repo);
 FUNC_0(&VAR_6->grep_filter, VAR_6->repo, VAR_7);
 VAR_6->grep_filter.status_only = 1;

 FUNC_3(VAR_6->repo, &VAR_6->diffopt);
 if (VAR_7 && !VAR_6->diffopt.prefix) {
  VAR_6->diffopt.prefix = VAR_7;
  VAR_6->diffopt.prefix_length = FUNC_4(VAR_7);
 }

 VAR_6->notes_opt.use_default_notes = -1;
}
