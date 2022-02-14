
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int oid; } ;
struct tree {TYPE_2__ object; } ;
struct pathspec {scalar_t__ nr; } ;
struct option {char* member_2; char* member_4; char* member_5; int member_7; int member_6; int * member_3; int member_1; int member_0; } ;
struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
struct TYPE_7__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_10__ {int * empty_tree; } ;
struct TYPE_9__ {int updated_skipworktree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lock_file VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 struct option const FUNC_1 (char,char*,int*,int ) ;
 struct option const FUNC_2 () ;
 struct option const FUNC_3 (int ,char*,int*,int ,int) ;
 struct option const FUNC_4 (int*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_5 (char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,struct object_id*) ;
 scalar_t__ FUNC_10 (char const*,struct object_id*) ;
 scalar_t__ FUNC_11 (char const*,struct object_id*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (char*,int*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_15 (struct lock_file*,int ) ;
 scalar_t__ FUNC_16 () ;
 struct commit* FUNC_17 (int ,struct object_id*) ;
 int FUNC_18 (struct object_id*,int *) ;
 int VAR_18 ;
 int FUNC_19 (struct pathspec*,char const**,char const*,int,char const**) ;
 int FUNC_20 (int,char const**,char const*,struct option const*,int ,int ) ;
 struct tree* FUNC_21 (struct object_id*) ;
 int FUNC_22 (struct commit*) ;
 int FUNC_23 (char*,int) ;
 scalar_t__ FUNC_24 (struct pathspec*,struct object_id*,int) ;
 int FUNC_25 (TYPE_3__*,int,int *,int *,char*) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (struct object_id*,int,int) ;
 int FUNC_28 (char const*,struct object_id*) ;
 char** VAR_19 ;
 int FUNC_29 (char const*,char*,struct pathspec*) ;
 int FUNC_30 () ;
 int FUNC_31 (char const*,char*) ;
 TYPE_5__* VAR_20 ;
 TYPE_3__ VAR_21 ;
 int VAR_22 ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char*) ;
 scalar_t__ FUNC_34 (TYPE_3__*,struct lock_file*,int ) ;

int FUNC_35(int VAR_23, const char **VAR_24, const char *VAR_25)
{
 int VAR_26 = VAR_7, VAR_27 = 0, VAR_28 = 0;
 int VAR_29 = 0, VAR_30;
 const char *VAR_31;
 struct object_id VAR_32;
 struct pathspec VAR_33;
 int VAR_34 = 0;
 const struct option VAR_35[] = {
  FUNC_4(&VAR_28, FUNC_0("be quiet, only report errors")),
  FUNC_3(0, "mixed", &VAR_26,
      FUNC_0("reset HEAD and index"), VAR_6),
  FUNC_3(0, "soft", &VAR_26, FUNC_0("reset only HEAD"), VAR_14),
  FUNC_3(0, "hard", &VAR_26,
    FUNC_0("reset HEAD, index and working tree"), VAR_1),
  FUNC_3(0, "merge", &VAR_26,
    FUNC_0("reset HEAD, index and working tree"), VAR_5),
  FUNC_3(0, "keep", &VAR_26,
    FUNC_0("reset HEAD but keep local changes"), VAR_2),
  { VAR_8, 0, "recurse-submodules", ((void*)0),
       "reset", "control recursive updating of submodules",
       VAR_10, VAR_18 },
  FUNC_1('p', "patch", &VAR_29, FUNC_0("select hunks interactively")),
  FUNC_1('N', "intent-to-add", &VAR_34,
    FUNC_0("record only the fact that removed paths will be added later")),
  FUNC_2()
 };

 FUNC_13(VAR_16, ((void*)0));
 FUNC_14("reset.quiet", &VAR_28);

 VAR_23 = FUNC_20(VAR_23, VAR_24, VAR_25, VAR_35, VAR_17,
      VAR_9);
 FUNC_19(&VAR_33, VAR_24, VAR_25, VAR_29, &VAR_31);

 VAR_30 = !FUNC_31(VAR_31, "HEAD") && FUNC_9("HEAD", &VAR_32);
 if (VAR_30) {

  FUNC_18(&VAR_32, VAR_20->empty_tree);
 } else if (!VAR_33.nr) {
  struct commit *VAR_36;
  if (FUNC_10(VAR_31, &VAR_32))
   FUNC_6(FUNC_5("Failed to resolve '%s' as a valid revision."), VAR_31);
  VAR_36 = FUNC_17(VAR_22, &VAR_32);
  if (!VAR_36)
   FUNC_6(FUNC_5("Could not parse object '%s'."), VAR_31);
  FUNC_18(&VAR_32, &VAR_36->object.oid);
 } else {
  struct tree *VAR_37;
  if (FUNC_11(VAR_31, &VAR_32))
   FUNC_6(FUNC_5("Failed to resolve '%s' as a valid tree."), VAR_31);
  VAR_37 = FUNC_21(&VAR_32);
  if (!VAR_37)
   FUNC_6(FUNC_5("Could not parse object '%s'."), VAR_31);
  FUNC_18(&VAR_32, &VAR_37->object.oid);
 }

 if (VAR_29) {
  if (VAR_26 != VAR_7)
   FUNC_6(FUNC_5("--patch is incompatible with --{hard,mixed,soft}"));
  FUNC_32("patch-interactive");
  return FUNC_29(VAR_31, "--patch=reset", &VAR_33);
 }




 if (VAR_33.nr) {
  if (VAR_26 == VAR_6)
   FUNC_33(FUNC_5("--mixed with paths is deprecated; use 'git reset -- <paths>' instead."));
  else if (VAR_26 != VAR_7)
   FUNC_6(FUNC_5("Cannot do %s reset with paths."),
     FUNC_5(VAR_19[VAR_26]));
 }
 if (VAR_26 == VAR_7)
  VAR_26 = VAR_6;

 if (VAR_33.nr)
  FUNC_32("path");
 else
  FUNC_32(VAR_19[VAR_26]);

 if (VAR_26 != VAR_14 && (VAR_26 != VAR_6 || FUNC_8()))
  FUNC_30();

 if (VAR_26 == VAR_6 && FUNC_16())
  FUNC_6(FUNC_5("%s reset is not allowed in a bare repository"),
      FUNC_5(VAR_19[VAR_26]));

 if (VAR_34 && VAR_26 != VAR_6)
  FUNC_6(FUNC_5("-N can only be used with --mixed"));




 if (VAR_26 == VAR_14 || VAR_26 == VAR_2)
  FUNC_7(VAR_26);

 if (VAR_26 != VAR_14) {
  struct lock_file VAR_38 = VAR_4;
  FUNC_15(&VAR_38, VAR_3);
  if (VAR_26 == VAR_6) {
   int VAR_39 = VAR_28 ? VAR_13 : VAR_12;
   if (FUNC_24(&VAR_33, &VAR_32, VAR_34))
    return 1;
   VAR_21.updated_skipworktree = 1;
   if (!VAR_28 && FUNC_8()) {
    uint64_t VAR_40, VAR_41;

    VAR_40 = FUNC_12();
    FUNC_25(&VAR_21, VAR_39, ((void*)0), ((void*)0),
           FUNC_5("Unstaged changes after reset:"));
    VAR_41 = (FUNC_12() - VAR_40) / 1000000;
    if (VAR_15 && VAR_41 > VAR_11) {
     FUNC_23(FUNC_5("\nIt took %.2f seconds to enumerate unstaged changes after reset.  You can\n"
      "use '--quiet' to avoid this.  Set the config setting reset.quiet to true\n"
      "to make this the default.\n"), VAR_41 / 1000.0);
    }
   }
  } else {
   int VAR_42 = FUNC_27(&VAR_32, VAR_26, VAR_28);
   if (VAR_26 == VAR_2 && !VAR_42)
    VAR_42 = FUNC_27(&VAR_32, VAR_6, VAR_28);
   if (VAR_42)
    FUNC_6(FUNC_5("Could not reset index file to revision '%s'."), VAR_31);
  }

  if (FUNC_34(&VAR_21, &VAR_38, VAR_0))
   FUNC_6(FUNC_5("Could not write new index file."));
 }

 if (!VAR_33.nr && !VAR_30) {


  VAR_27 = FUNC_28(VAR_31, &VAR_32);

  if (VAR_26 == VAR_1 && !VAR_27 && !VAR_28)
   FUNC_22(FUNC_17(VAR_22, &VAR_32));
 }
 if (!VAR_33.nr)
  FUNC_26(VAR_22, 0);

 return VAR_27;
}
