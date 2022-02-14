
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int dummy; } ;
struct option {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,...) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 char* VAR_14 ;
 int FUNC_2 (struct wt_status*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct wt_status*) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int,char const**,char const*,struct option const*,char const* const*,int ) ;
 scalar_t__ VAR_21 ;
 void* FUNC_7 (char*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_8 (scalar_t__,char) ;
 int * VAR_25 ;
 scalar_t__ VAR_26 ;
 char* VAR_27 ;
 void* VAR_28 ;
 scalar_t__ VAR_29 ;

__attribute__((used)) static int FUNC_9(int VAR_30, const char *VAR_31[],
          const struct option *VAR_32,
          const char * const VAR_33[],
          const char *VAR_34,
          struct commit *VAR_35,
          struct wt_status *VAR_36)
{
 int VAR_37 = 0;

 VAR_30 = FUNC_6(VAR_30, VAR_31, VAR_34, VAR_32, VAR_33, 0);
 FUNC_2(VAR_36);

 if (VAR_16 && !FUNC_8(VAR_16, '>'))
  VAR_16 = FUNC_3(VAR_16);

 if (VAR_16 && VAR_22)
  FUNC_1(FUNC_0("Using both --reset-author and --author does not make sense"));

 if (VAR_19 || VAR_17 || VAR_27 || VAR_15)
  VAR_26 = 0;
 if (0 <= VAR_13)
  VAR_26 = VAR_13;


 if (VAR_7 && !VAR_35)
  FUNC_1(FUNC_0("You have nothing to amend."));
 if (VAR_7 && VAR_29 != VAR_1) {
  if (VAR_29 == VAR_2)
   FUNC_1(FUNC_0("You are in the middle of a merge -- cannot amend."));
  else if (VAR_29 == VAR_0)
   FUNC_1(FUNC_0("You are in the middle of a cherry-pick -- cannot amend."));
 }
 if (VAR_15 && VAR_23)
  FUNC_1(FUNC_0("Options --squash and --fixup cannot be used together"));
 if (VAR_27)
  VAR_37++;
 if (VAR_14)
  VAR_37++;
 if (VAR_15)
  VAR_37++;
 if (VAR_19)
  VAR_37++;
 if (VAR_37 > 1)
  FUNC_1(FUNC_0("Only one of -c/-C/-F/--fixup can be used."));
 if (VAR_17 && (VAR_14 || VAR_27 || VAR_19))
  FUNC_1((FUNC_0("Option -m cannot be combined with -c/-C/-F.")));
 if (VAR_37 || VAR_17)
  VAR_25 = ((void*)0);
 if (VAR_14)
  VAR_27 = VAR_14;
 if (VAR_7 && !VAR_27 && !VAR_15)
  VAR_27 = "HEAD";
 if (!VAR_27 && VAR_29 != VAR_0 && VAR_22)
  FUNC_1(FUNC_0("--reset-author can be used only with -C, -c or --amend."));
 if (VAR_27) {
  VAR_28 = FUNC_7(VAR_27);
  if (!VAR_22) {
   VAR_8 = VAR_27;
   VAR_9 = VAR_28;
  }
 }
 if (VAR_29 == VAR_0 && !VAR_22) {
  VAR_8 = "CHERRY_PICK_HEAD";
  VAR_9 = FUNC_7(VAR_8);
 }

 if (VAR_21)
  VAR_18 = 1;

 if (VAR_6 + VAR_20 + VAR_4 + VAR_18 > 1)
  FUNC_1(FUNC_0("Only one of --include/--only/--all/--interactive/--patch can be used."));
 if (VAR_30 == 0 && (VAR_6 || (VAR_20 && !VAR_7 && !VAR_5)))
  FUNC_1(FUNC_0("No paths with --include/--only does not make sense."));
 VAR_11 = FUNC_4(VAR_10, VAR_26);

 FUNC_5(VAR_36);

 if (VAR_4 && VAR_30 > 0)
  FUNC_1(FUNC_0("paths '%s ...' with -a does not make sense"),
      VAR_31[0]);

 if (VAR_24 != VAR_3)
  VAR_12 = 1;

 return VAR_30;
}
