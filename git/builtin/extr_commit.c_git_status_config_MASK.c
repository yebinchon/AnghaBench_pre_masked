
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wt_status {int submodule_summary; int rename_limit; int detect_rename; int show_untracked_files; void* relative_paths; int * color_palette; void* display_comment_prefix; int use_color; void* show_stash; int colopts; } ;
struct TYPE_2__ {void* ahead_behind; void* show_branch; int status_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*,char const*,char*,int *) ;
 void* FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char const*,int*) ;
 int FUNC_7 (char const*,char const*) ;
 void* FUNC_8 (char const*,char const*) ;
 void* FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*,char const*,int *) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char*,char const**) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_14 (char const*,char*) ;

__attribute__((used)) static int FUNC_15(const char *VAR_6, const char *VAR_7, void *VAR_8)
{
 struct wt_status *VAR_9 = VAR_8;
 const char *VAR_10;

 if (FUNC_13(VAR_6, "column."))
  return FUNC_4(VAR_6, VAR_7, "status", &VAR_9->colopts);
 if (!FUNC_14(VAR_6, "status.submodulesummary")) {
  int VAR_11;
  VAR_9->submodule_summary = FUNC_6(VAR_6, VAR_7, &VAR_11);
  if (VAR_11 && VAR_9->submodule_summary)
   VAR_9->submodule_summary = -1;
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.short")) {
  if (FUNC_5(VAR_6, VAR_7))
   VAR_5.status_format = VAR_4;
  else
   VAR_5.status_format = VAR_3;
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.branch")) {
  VAR_5.show_branch = FUNC_5(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.aheadbehind")) {
  VAR_5.ahead_behind = FUNC_5(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.showstash")) {
  VAR_9->show_stash = FUNC_5(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.color") || !FUNC_14(VAR_6, "color.status")) {
  VAR_9->use_color = FUNC_7(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.displaycommentprefix")) {
  VAR_9->display_comment_prefix = FUNC_5(VAR_6, VAR_7);
  return 0;
 }
 if (FUNC_12(VAR_6, "status.color.", &VAR_10) ||
     FUNC_12(VAR_6, "color.status.", &VAR_10)) {
  int VAR_12 = FUNC_11(VAR_10);
  if (VAR_12 < 0)
   return 0;
  if (!VAR_7)
   return FUNC_2(VAR_6);
  return FUNC_1(VAR_7, VAR_9->color_palette[VAR_12]);
 }
 if (!FUNC_14(VAR_6, "status.relativepaths")) {
  VAR_9->relative_paths = FUNC_5(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.showuntrackedfiles")) {
  if (!VAR_7)
   return FUNC_2(VAR_6);
  else if (!FUNC_14(VAR_7, "no"))
   VAR_9->show_untracked_files = VAR_2;
  else if (!FUNC_14(VAR_7, "normal"))
   VAR_9->show_untracked_files = VAR_1;
  else if (!FUNC_14(VAR_7, "all"))
   VAR_9->show_untracked_files = VAR_0;
  else
   return FUNC_3(FUNC_0("Invalid untracked files mode '%s'"), VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "diff.renamelimit")) {
  if (VAR_9->rename_limit == -1)
   VAR_9->rename_limit = FUNC_8(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.renamelimit")) {
  VAR_9->rename_limit = FUNC_8(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "diff.renames")) {
  if (VAR_9->detect_rename == -1)
   VAR_9->detect_rename = FUNC_9(VAR_6, VAR_7);
  return 0;
 }
 if (!FUNC_14(VAR_6, "status.renames")) {
  VAR_9->detect_rename = FUNC_9(VAR_6, VAR_7);
  return 0;
 }
 return FUNC_10(VAR_6, VAR_7, ((void*)0));
}
