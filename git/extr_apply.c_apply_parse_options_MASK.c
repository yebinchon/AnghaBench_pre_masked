
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char member_1; char* member_2; int member_7; int member_6; int * member_5; int * member_4; struct apply_state* member_3; int member_0; } ;
struct apply_state {int no_add; int diffstat; int numstat; int summary; int check; int check_index; int ita_only; int cached; int threeway; int apply_in_reverse; int unidiff_zero; int apply_with_reject; int allow_overlap; int prefix; int apply_verbosity; int p_context; int line_termination; int fake_ancestor; int unsafe_paths; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*) ;
 int VAR_2 ;
 struct option FUNC_1 (int ,char*,int*,int *,int ) ;
 struct option FUNC_2 (char,char*,int*,int *) ;
 struct option FUNC_3 (int ,char*,int *,int *,int ) ;
 struct option FUNC_4 () ;
 struct option FUNC_5 (int ,char*,int *,int *) ;
 struct option FUNC_6 (char,int *,int *,int *) ;
 struct option FUNC_7 (int ,char*) ;
 struct option FUNC_8 (char,int *,int *,int *,char) ;
 struct option FUNC_9 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int,char const**,int ,struct option*,char const* const*,int ) ;

int FUNC_11(int VAR_12, const char **VAR_13,
   struct apply_state *VAR_14,
   int *VAR_15, int *VAR_16,
   const char * const *VAR_17)
{
 struct option VAR_18[] = {
  { VAR_2, 0, "exclude", VAR_14, FUNC_0("path"),
   FUNC_0("don't apply changes matching the given path"),
   VAR_5, VAR_7 },
  { VAR_2, 0, "include", VAR_14, FUNC_0("path"),
   FUNC_0("apply changes matching the given path"),
   VAR_5, VAR_8 },
  { VAR_2, 'p', ((void*)0), VAR_14, FUNC_0("num"),
   FUNC_0("remove <num> leading slashes from traditional diff paths"),
   0, VAR_9 },
  FUNC_2(0, "no-add", &VAR_14->no_add,
   FUNC_0("ignore additions made by the patch")),
  FUNC_2(0, "stat", &VAR_14->diffstat,
   FUNC_0("instead of applying the patch, output diffstat for the input")),
  FUNC_7(0, "allow-binary-replacement"),
  FUNC_7(0, "binary"),
  FUNC_2(0, "numstat", &VAR_14->numstat,
   FUNC_0("show number of added and deleted lines in decimal notation")),
  FUNC_2(0, "summary", &VAR_14->summary,
   FUNC_0("instead of applying the patch, output a summary for the input")),
  FUNC_2(0, "check", &VAR_14->check,
   FUNC_0("instead of applying the patch, see if the patch is applicable")),
  FUNC_2(0, "index", &VAR_14->check_index,
   FUNC_0("make sure the patch is applicable to the current index")),
  FUNC_2('N', "intent-to-add", &VAR_14->ita_only,
   FUNC_0("mark new files with `git add --intent-to-add`")),
  FUNC_2(0, "cached", &VAR_14->cached,
   FUNC_0("apply a patch without touching the working tree")),
  FUNC_3(0, "unsafe-paths", &VAR_14->unsafe_paths,
      FUNC_0("accept a patch that touches outside the working area"),
      VAR_4),
  FUNC_2(0, "apply", VAR_15,
   FUNC_0("also apply the patch (use with --stat/--summary/--check)")),
  FUNC_2('3', "3way", &VAR_14->threeway,
    FUNC_0( "attempt three-way merge if a patch does not apply")),
  FUNC_5(0, "build-fake-ancestor", &VAR_14->fake_ancestor,
   FUNC_0("build a temporary index based on embedded index information")),

  FUNC_8('z', ((void*)0), &VAR_14->line_termination,
   FUNC_0("paths are separated with NUL character"), '\0'),
  FUNC_6('C', ((void*)0), &VAR_14->p_context,
    FUNC_0("ensure at least <n> lines of context match")),
  { VAR_2, 0, "whitespace", VAR_14, FUNC_0("action"),
   FUNC_0("detect new or modified lines that have whitespace errors"),
   0, VAR_11 },
  { VAR_2, 0, "ignore-space-change", VAR_14, ((void*)0),
   FUNC_0("ignore changes in whitespace when finding context"),
   VAR_3, VAR_10 },
  { VAR_2, 0, "ignore-whitespace", VAR_14, ((void*)0),
   FUNC_0("ignore changes in whitespace when finding context"),
   VAR_3, VAR_10 },
  FUNC_2('R', "reverse", &VAR_14->apply_in_reverse,
   FUNC_0("apply the patch in reverse")),
  FUNC_2(0, "unidiff-zero", &VAR_14->unidiff_zero,
   FUNC_0("don't expect at least one line of context")),
  FUNC_2(0, "reject", &VAR_14->apply_with_reject,
   FUNC_0("leave the rejected hunks in corresponding *.rej files")),
  FUNC_2(0, "allow-overlap", &VAR_14->allow_overlap,
   FUNC_0("allow overlapping hunks")),
  FUNC_9(&VAR_14->apply_verbosity, FUNC_0("be verbose")),
  FUNC_1(0, "inaccurate-eof", VAR_16,
   FUNC_0("tolerate incorrectly detected missing new-line at the end of file"),
   VAR_0),
  FUNC_1(0, "recount", VAR_16,
   FUNC_0("do not trust the line counts in the hunk headers"),
   VAR_1),
  { VAR_2, 0, "directory", VAR_14, FUNC_0("root"),
   FUNC_0("prepend <root> to all filenames"),
   0, VAR_6 },
  FUNC_4()
 };

 return FUNC_10(VAR_12, VAR_13, VAR_14->prefix, VAR_18, VAR_17, 0);
}
