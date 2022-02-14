
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct setup_revision_opt {char* submodule; int revarg_opt; int (* tweak ) (struct rev_info*,struct setup_revision_opt*) ;int * def; scalar_t__ assume_dashdash; } ;
struct TYPE_12__ {scalar_t__ follow_renames; } ;
struct TYPE_16__ {int output_format; int pickaxe_opts; int abbrev; int pathspec; TYPE_3__ flags; scalar_t__ objfind; scalar_t__ filter; } ;
struct TYPE_15__ {int ignore_locale; scalar_t__ use_reflog_filter; } ;
struct TYPE_13__ {scalar_t__ name; } ;
struct TYPE_14__ {scalar_t__ nr; } ;
struct TYPE_11__ {int pathspec; } ;
struct TYPE_10__ {int nr; } ;
struct rev_info {int diff; int topo_order; int limited; int prune; scalar_t__ expand_tabs_in_log; scalar_t__ expand_tabs_in_log_default; TYPE_7__ diffopt; scalar_t__ line_level_traverse; scalar_t__ bisect; scalar_t__ first_parent_only; TYPE_6__ grep_filter; scalar_t__ reflog_info; scalar_t__ graph; scalar_t__ no_walk; scalar_t__ reverse; TYPE_4__ children; scalar_t__ rewrite_parents; int abbrev; scalar_t__ combine_merges; scalar_t__ combined_all_paths; scalar_t__ ignore_merges; TYPE_5__ prune_data; int full_diff; TYPE_2__ pruning; scalar_t__ simplify_history; int * def; int repo; int rev_input_given; TYPE_1__ pending; scalar_t__ show_merge; int prefix; int read_from_stdin; scalar_t__ disable_stdin; } ;
struct object_id {int dummy; } ;
struct object_context {int mode; } ;
struct object {int dummy; } ;
struct argv_array {int argv; scalar_t__ argc; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct rev_info*,struct object*,int *,int ) ;
 int FUNC_2 (struct argv_array*) ;
 int FUNC_3 (struct argv_array*,char const**) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int *,int ,struct object_id*,struct object_context*) ;
 struct object* FUNC_13 (struct rev_info*,int *,struct object_id*,int ) ;
 int FUNC_14 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_15 (char const*,struct rev_info*,int,int) ;
 int FUNC_16 (struct rev_info*,int,char const**,int*,char const**,struct setup_revision_opt*) ;
 int FUNC_17 (char const*,struct rev_info*,int,char const**,int*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_5__*,int ,int ,int ,int ) ;
 int FUNC_20 (struct rev_info*) ;
 int FUNC_21 (struct rev_info*,struct argv_array*) ;
 scalar_t__ FUNC_22 (char const*,char*) ;
 int FUNC_23 (struct rev_info*,struct setup_revision_opt*) ;
 int VAR_6 ;
 int FUNC_24 (int ,char const*,int) ;

int FUNC_25(int VAR_7, const char **VAR_8, struct rev_info *VAR_9, struct setup_revision_opt *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0, VAR_16;
 struct argv_array VAR_17 = VAR_0;
 const char *VAR_18 = ((void*)0);
 int VAR_19 = 0;

 if (VAR_10)
  VAR_18 = VAR_10->submodule;


 if (VAR_10 && VAR_10->assume_dashdash) {
  VAR_14 = 1;
 } else {
  VAR_14 = 0;
  for (VAR_11 = 1; VAR_11 < VAR_7; VAR_11++) {
   const char *VAR_20 = VAR_8[VAR_11];
   if (FUNC_22(VAR_20, "--"))
    continue;
   VAR_8[VAR_11] = ((void*)0);
   VAR_7 = VAR_11;
   if (VAR_8[VAR_11 + 1])
    FUNC_3(&VAR_17, VAR_8 + VAR_11 + 1);
   VAR_14 = 1;
   break;
  }
 }


 VAR_12 = 0;
 VAR_16 = VAR_10 ? VAR_10->revarg_opt : 0;
 if (VAR_14)
  VAR_16 |= VAR_5;
 for (VAR_13 = VAR_11 = 1; VAR_11 < VAR_7; VAR_11++) {
  const char *VAR_21 = VAR_8[VAR_11];
  if (!VAR_19 && *VAR_21 == '-') {
   int VAR_22;

   VAR_22 = FUNC_17(VAR_18,
      VAR_9, VAR_7 - VAR_11, VAR_8 + VAR_11,
      &VAR_12);
   if (VAR_22 > 0) {
    VAR_11 += VAR_22 - 1;
    continue;
   }

   if (!FUNC_22(VAR_21, "--stdin")) {
    if (VAR_9->disable_stdin) {
     VAR_8[VAR_13++] = VAR_21;
     continue;
    }
    if (VAR_9->read_from_stdin++)
     FUNC_7("--stdin given twice?");
    FUNC_21(VAR_9, &VAR_17);
    continue;
   }

   if (!FUNC_22(VAR_21, "--end-of-options")) {
    VAR_19 = 1;
    continue;
   }

   VAR_22 = FUNC_16(VAR_9, VAR_7 - VAR_11, VAR_8 + VAR_11,
         &VAR_13, VAR_8, VAR_10);
   if (VAR_22 > 0) {
    VAR_11 += VAR_22 - 1;
    continue;
   }
   if (VAR_22 < 0)
    FUNC_9(128);
   continue;
  }


  if (FUNC_15(VAR_21, VAR_9, VAR_12, VAR_16)) {
   int VAR_23;
   if (VAR_14 || *VAR_21 == '^')
    FUNC_7("bad revision '%s'", VAR_21);







   for (VAR_23 = VAR_11; VAR_23 < VAR_7; VAR_23++)
    FUNC_24(VAR_9->prefix, VAR_8[VAR_23], VAR_23 == VAR_11);

   FUNC_3(&VAR_17, VAR_8 + VAR_11);
   break;
  }
  else
   VAR_15 = 1;
 }

 if (VAR_17.argc) {
  FUNC_19(&VAR_9->prune_data, 0, 0,
          VAR_9->prefix, VAR_17.argv);
 }
 FUNC_2(&VAR_17);

 if (VAR_9->def == ((void*)0))
  VAR_9->def = VAR_10 ? VAR_10->def : ((void*)0);
 if (VAR_10 && VAR_10->tweak)
  VAR_10->tweak(VAR_9, VAR_10);
 if (VAR_9->show_merge)
  FUNC_20(VAR_9);
 if (VAR_9->def && !VAR_9->pending.nr && !VAR_9->rev_input_given && !VAR_15) {
  struct object_id VAR_24;
  struct object *VAR_25;
  struct object_context VAR_26;
  if (FUNC_12(VAR_9->repo, VAR_9->def, 0, &VAR_24, &VAR_26))
   FUNC_6(VAR_9->def);
  VAR_25 = FUNC_13(VAR_9, VAR_9->def, &VAR_24, 0);
  FUNC_1(VAR_9, VAR_25, VAR_9->def, VAR_26.mode);
 }


 if (VAR_9->diffopt.output_format & ~VAR_1)
  VAR_9->diff = 1;


 if ((VAR_9->diffopt.pickaxe_opts & VAR_3) ||
     VAR_9->diffopt.filter ||
     VAR_9->diffopt.flags.follow_renames)
  VAR_9->diff = 1;

 if (VAR_9->diffopt.objfind)
  VAR_9->simplify_history = 0;

 if (VAR_9->topo_order && !FUNC_10(VAR_6))
  VAR_9->limited = 1;

 if (VAR_9->prune_data.nr) {
  FUNC_5(&VAR_9->pruning.pathspec, &VAR_9->prune_data);

  if (!VAR_9->diffopt.flags.follow_renames)
   VAR_9->prune = 1;
  if (!VAR_9->full_diff)
   FUNC_5(&VAR_9->diffopt.pathspec,
          &VAR_9->prune_data);
 }
 if (VAR_9->combine_merges)
  VAR_9->ignore_merges = 0;
 if (VAR_9->combined_all_paths && !VAR_9->combine_merges)
  FUNC_7("--combined-all-paths makes no sense without -c or --cc");

 VAR_9->diffopt.abbrev = VAR_9->abbrev;

 if (VAR_9->line_level_traverse) {
  VAR_9->limited = 1;
  VAR_9->topo_order = 1;
 }

 FUNC_8(&VAR_9->diffopt);

 FUNC_14(VAR_4,
     &VAR_9->grep_filter);
 if (!FUNC_18(FUNC_11()))
  VAR_9->grep_filter.ignore_locale = 1;
 FUNC_4(&VAR_9->grep_filter);

 if (VAR_9->reverse && VAR_9->reflog_info)
  FUNC_7("cannot combine --reverse with --walk-reflogs");
 if (VAR_9->reflog_info && VAR_9->limited)
  FUNC_7("cannot combine --walk-reflogs with history-limiting options");
 if (VAR_9->rewrite_parents && VAR_9->children.name)
  FUNC_7("cannot combine --parents and --children");




 if (VAR_9->reverse && VAR_9->graph)
  FUNC_7("cannot combine --reverse with --graph");

 if (VAR_9->reflog_info && VAR_9->graph)
  FUNC_7("cannot combine --walk-reflogs with --graph");
 if (VAR_9->no_walk && VAR_9->graph)
  FUNC_7("cannot combine --no-walk with --graph");
 if (!VAR_9->reflog_info && VAR_9->grep_filter.use_reflog_filter)
  FUNC_7("cannot use --grep-reflog without --walk-reflogs");

 if (VAR_9->first_parent_only && VAR_9->bisect)
  FUNC_7(FUNC_0("--first-parent is incompatible with --bisect"));

 if (VAR_9->line_level_traverse &&
     (VAR_9->diffopt.output_format & ~(VAR_2 | VAR_1)))
  FUNC_7(FUNC_0("-L does not yet support diff formats besides -p and -s"));

 if (VAR_9->expand_tabs_in_log < 0)
  VAR_9->expand_tabs_in_log = VAR_9->expand_tabs_in_log_default;

 return VAR_13;
}
