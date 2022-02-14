
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id_abbrev; int new_prefix; int old_prefix; int interhunk_lines; int context_lines; int flags; } ;
struct TYPE_4__ {int rename_threshold; int copy_threshold; int flags; } ;
struct opts {char const* treeish1; char const* treeish2; scalar_t__ cache; scalar_t__ no_index; int color; int dir; TYPE_1__ diffopts; TYPE_2__ findopts; int output; void* format; } ;
struct args_info {int pos; } ;


 struct args_info VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,struct args_info*,char*) ;
 scalar_t__ FUNC_2 (int*,struct args_info*,char*) ;
 int FUNC_3 (int *,struct args_info*,char*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void FUNC_6(struct opts *VAR_25, int VAR_26, char *VAR_27[])
{
 struct args_info VAR_28 = VAR_0;


 for (VAR_28.pos = 1; VAR_28.pos < VAR_26; ++VAR_28.pos) {
  const char *VAR_29 = VAR_27[VAR_28.pos];

  if (VAR_29[0] != '-') {
   if (VAR_25->treeish1 == ((void*)0))
    VAR_25->treeish1 = VAR_29;
   else if (VAR_25->treeish2 == ((void*)0))
    VAR_25->treeish2 = VAR_29;
   else
    FUNC_5("Only one or two tree identifiers can be provided", ((void*)0));
  }
  else if (!FUNC_4(VAR_29, "-p") || !FUNC_4(VAR_29, "-u") ||
     !FUNC_4(VAR_29, "--patch")) {
   VAR_25->output |= VAR_20;
   VAR_25->format = VAR_10;
  }
  else if (!FUNC_4(VAR_29, "--cached")) {
   VAR_25->cache = VAR_2;
   if (VAR_25->no_index >= 0) FUNC_5("--cached and --no-index are incompatible", ((void*)0));
  } else if (!FUNC_4(VAR_29, "--nocache"))
   VAR_25->cache = VAR_1;
  else if (!FUNC_4(VAR_29, "--name-only") || !FUNC_4(VAR_29, "--format=name"))
   VAR_25->format = VAR_8;
  else if (!FUNC_4(VAR_29, "--name-status") ||
    !FUNC_4(VAR_29, "--format=name-status"))
   VAR_25->format = VAR_9;
  else if (!FUNC_4(VAR_29, "--raw") || !FUNC_4(VAR_29, "--format=raw"))
   VAR_25->format = VAR_11;
  else if (!FUNC_4(VAR_29, "--format=diff-index")) {
   VAR_25->format = VAR_11;
   VAR_25->diffopts.id_abbrev = 40;
  }
  else if (!FUNC_4(VAR_29, "--no-index")) {
   VAR_25->no_index = 0;
   if (VAR_25->cache == VAR_2) FUNC_5("--cached and --no-index are incompatible", ((void*)0));
  } else if (!FUNC_4(VAR_29, "--color"))
   VAR_25->color = 0;
  else if (!FUNC_4(VAR_29, "--no-color"))
   VAR_25->color = -1;
  else if (!FUNC_4(VAR_29, "-R"))
   VAR_25->diffopts.flags |= VAR_19;
  else if (!FUNC_4(VAR_29, "-a") || !FUNC_4(VAR_29, "--text"))
   VAR_25->diffopts.flags |= VAR_7;
  else if (!FUNC_4(VAR_29, "--ignore-space-at-eol"))
   VAR_25->diffopts.flags |= VAR_14;
  else if (!FUNC_4(VAR_29, "-b") || !FUNC_4(VAR_29, "--ignore-space-change"))
   VAR_25->diffopts.flags |= VAR_13;
  else if (!FUNC_4(VAR_29, "-w") || !FUNC_4(VAR_29, "--ignore-all-space"))
   VAR_25->diffopts.flags |= VAR_12;
  else if (!FUNC_4(VAR_29, "--ignored"))
   VAR_25->diffopts.flags |= VAR_15;
  else if (!FUNC_4(VAR_29, "--untracked"))
   VAR_25->diffopts.flags |= VAR_16;
  else if (!FUNC_4(VAR_29, "--patience"))
   VAR_25->diffopts.flags |= VAR_18;
  else if (!FUNC_4(VAR_29, "--minimal"))
   VAR_25->diffopts.flags |= VAR_17;
  else if (!FUNC_4(VAR_29, "--stat"))
   VAR_25->output |= VAR_23;
  else if (!FUNC_4(VAR_29, "--numstat"))
   VAR_25->output |= VAR_21;
  else if (!FUNC_4(VAR_29, "--shortstat"))
   VAR_25->output |= VAR_22;
  else if (!FUNC_4(VAR_29, "--summary"))
   VAR_25->output |= VAR_24;
  else if (FUNC_2(
    &VAR_25->findopts.rename_threshold, &VAR_28, "-M") ||
   FUNC_2(
    &VAR_25->findopts.rename_threshold, &VAR_28, "--find-renames"))
   VAR_25->findopts.flags |= VAR_5;
  else if (FUNC_2(
    &VAR_25->findopts.copy_threshold, &VAR_28, "-C") ||
   FUNC_2(
    &VAR_25->findopts.copy_threshold, &VAR_28, "--find-copies"))
   VAR_25->findopts.flags |= VAR_3;
  else if (!FUNC_4(VAR_29, "--find-copies-harder"))
   VAR_25->findopts.flags |= VAR_4;
  else if (FUNC_0(VAR_29, "-B") || FUNC_0(VAR_29, "--break-rewrites"))

   VAR_25->findopts.flags |= VAR_6;
  else if (!FUNC_3(
    &VAR_25->diffopts.context_lines, &VAR_28, "-U") &&
   !FUNC_3(
    &VAR_25->diffopts.context_lines, &VAR_28, "--unified") &&
   !FUNC_3(
    &VAR_25->diffopts.interhunk_lines, &VAR_28, "--inter-hunk-context") &&
   !FUNC_2(
    &VAR_25->diffopts.id_abbrev, &VAR_28, "--abbrev") &&
   !FUNC_1(&VAR_25->diffopts.old_prefix, &VAR_28, "--src-prefix") &&
   !FUNC_1(&VAR_25->diffopts.new_prefix, &VAR_28, "--dst-prefix") &&
   !FUNC_1(&VAR_25->dir, &VAR_28, "--git-dir"))
   FUNC_5("Unknown command line argument", VAR_29);
 }
}
