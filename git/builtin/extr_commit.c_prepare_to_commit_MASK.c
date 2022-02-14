
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int display_comment_prefix; int use_color; int * fp; int change; scalar_t__ hints; } ;
struct strbuf {size_t len; scalar_t__ buf; } ;
struct stat {int dummy; } ;
struct pretty_print_context {void* output_encoding; int member_0; } ;
struct object_id {int dummy; } ;
struct ident_split {scalar_t__ mail_begin; scalar_t__ mail_end; scalar_t__ name_begin; scalar_t__ name_end; } ;
struct diff_flags {int override_submodule_config; int ignore_submodules; } ;
struct commit {int dummy; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 struct diff_flags VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct strbuf VAR_11 ;
 char* FUNC_1 (char*) ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct strbuf*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (struct strbuf*,int ,int ) ;
 int FUNC_4 (struct argv_array*) ;
 int FUNC_5 (struct argv_array*,char*,char const*) ;
 int FUNC_6 (struct ident_split*,struct strbuf*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_9 () ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 () ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (char*) ;
 char* VAR_23 ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (char*,int *) ;
 scalar_t__ FUNC_22 (scalar_t__,int,size_t,int *) ;
 void* FUNC_23 () ;
 scalar_t__ FUNC_24 (char const*,struct object_id*) ;
 char* FUNC_25 (int ) ;
 char* FUNC_26 (int ) ;
 int FUNC_27 () ;
 char* FUNC_28 (int ) ;
 char* FUNC_29 (int ) ;
 char* FUNC_30 (int ) ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_31 (struct ident_split*,struct ident_split*) ;
 int FUNC_32 (scalar_t__,size_t) ;
 char* VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_33 (int ,char const*,struct diff_flags*,int) ;
 scalar_t__ FUNC_34 (struct commit*) ;
 scalar_t__ FUNC_35 (int ) ;
 scalar_t__ FUNC_36 (int ,int *,int ) ;
 char* VAR_27 ;
 struct commit* FUNC_37 (char*) ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_38 () ;
 int FUNC_39 (char const*) ;
 scalar_t__ FUNC_40 (scalar_t__,char const*,char*,int ,...) ;
 int FUNC_41 (int *,char const*,char const*,int,struct wt_status*) ;
 int VAR_30 ;
 int FUNC_42 (struct ident_split*,int ) ;
 scalar_t__ VAR_31 ;
 char* FUNC_43 (char*) ;
 char* VAR_32 ;
 int FUNC_44 (char*,struct stat*) ;
 int FUNC_45 (struct wt_status*,int ,char*,int ) ;
 int FUNC_46 (struct wt_status*,int ,char*,char*,...) ;
 int * VAR_33 ;
 int * VAR_34 ;
 int FUNC_47 (struct strbuf*,int *) ;
 int FUNC_48 (struct strbuf*,char*) ;
 scalar_t__ FUNC_49 (struct strbuf*,int ,int ) ;
 scalar_t__ FUNC_50 (struct strbuf*,char*,int ) ;
 int FUNC_51 (struct strbuf*) ;
 int FUNC_52 (struct strbuf*,int ) ;
 int FUNC_53 (char*,char*) ;
 int FUNC_54 (int *,int) ;
 char* FUNC_55 (int ,char*) ;
 char* VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_56 (int ) ;
 scalar_t__ VAR_37 ;
 char* VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_57 (int *) ;
 size_t FUNC_58 (scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_59(const char *VAR_41, const char *VAR_42,
        struct commit *VAR_43,
        struct wt_status *VAR_44,
        struct strbuf *VAR_45)
{
 struct stat VAR_46;
 struct strbuf VAR_47 = VAR_11;
 int VAR_48;
 struct strbuf VAR_49 = VAR_11;
 const char *VAR_50 = ((void*)0);
 const char *VAR_51 = ((void*)0);
 int VAR_52 = (VAR_17 != VAR_2);
 int VAR_53;
 int VAR_54 = 0;


 FUNC_10(VAR_45);

 if (!VAR_29 && FUNC_40(VAR_37, VAR_41, "pre-commit", ((void*)0)))
  return 0;

 if (VAR_32) {




  if (VAR_38 && !FUNC_53(VAR_38, VAR_32))
   FUNC_48(&VAR_49, "squash! ");
  else {
   struct pretty_print_context VAR_55 = {0};
   struct commit *VAR_56;
   VAR_56 = FUNC_37(VAR_32);
   if (!VAR_56)
    FUNC_11(FUNC_1("could not lookup commit %s"), VAR_32);
   VAR_55.output_encoding = FUNC_23();
   FUNC_19(VAR_56, "squash! %s\n\n", &VAR_49,
           &VAR_55);
  }
 }

 if (VAR_24 && !VAR_23) {
  FUNC_47(&VAR_49, &VAR_28);
  VAR_50 = "message";
 } else if (VAR_27 && !FUNC_53(VAR_27, "-")) {
  if (FUNC_35(0))
   FUNC_20(VAR_33, "%s", FUNC_1("(reading log message from standard input)\n"));
  if (FUNC_49(&VAR_49, 0, 0) < 0)
   FUNC_12(FUNC_1("could not read log from standard input"));
  VAR_50 = "message";
 } else if (VAR_27) {
  if (FUNC_50(&VAR_49, VAR_27, 0) < 0)
   FUNC_12(FUNC_1("could not read log file '%s'"),
      VAR_27);
  VAR_50 = "message";
 } else if (VAR_38) {
  char *VAR_57;
  VAR_57 = FUNC_55(VAR_39, "\n\n");
  if (VAR_57)
   FUNC_48(&VAR_49, FUNC_43(VAR_57 + 2));
  VAR_50 = "commit";
  VAR_51 = VAR_38;
 } else if (VAR_23) {
  struct pretty_print_context VAR_58 = {0};
  struct commit *VAR_59;
  VAR_59 = FUNC_37(VAR_23);
  if (!VAR_59)
   FUNC_11(FUNC_1("could not lookup commit %s"), VAR_23);
  VAR_58.output_encoding = FUNC_23();
  FUNC_19(VAR_59, "fixup! %s\n\n",
          &VAR_49, &VAR_58);
  if (VAR_24)
   FUNC_47(&VAR_49, &VAR_28);
  VAR_50 = "message";
 } else if (!FUNC_44(FUNC_29(VAR_36), &VAR_46)) {
  size_t VAR_60;





  if (!FUNC_44(FUNC_30(VAR_36), &VAR_46)) {
   if (FUNC_50(&VAR_49, FUNC_30(VAR_36), 0) < 0)
    FUNC_12(FUNC_1("could not read SQUASH_MSG"));
   VAR_50 = "squash";
  } else
   VAR_50 = "merge";

  VAR_60 = VAR_49.len;
  if (FUNC_50(&VAR_49, FUNC_29(VAR_36), 0) < 0)
   FUNC_12(FUNC_1("could not read MERGE_MSG"));

  if (VAR_17 == VAR_3 &&
      FUNC_58(VAR_49.buf + VAR_60,
      VAR_49.len - VAR_60) <
    VAR_49.len - VAR_60)
   VAR_54 = 1;
 } else if (!FUNC_44(FUNC_30(VAR_36), &VAR_46)) {
  if (FUNC_50(&VAR_49, FUNC_30(VAR_36), 0) < 0)
   FUNC_12(FUNC_1("could not read SQUASH_MSG"));
  VAR_50 = "squash";
 } else if (VAR_35) {
  if (FUNC_50(&VAR_49, VAR_35, 0) < 0)
   FUNC_12(FUNC_1("could not read '%s'"), VAR_35);
  VAR_50 = "template";
  VAR_52 = 0;
 }





 else if (VAR_40 == VAR_7)
  VAR_50 = "merge";
 else if (VAR_40 == VAR_5) {
  VAR_50 = "commit";
  VAR_51 = "CHERRY_PICK_HEAD";
 }

 if (VAR_32) {





  VAR_50 = "message";
  VAR_51 = "";
 }

 VAR_44->fp = FUNC_18(FUNC_27());
 if (VAR_44->fp == ((void*)0))
  FUNC_12(FUNC_1("could not open '%s'"), FUNC_27());


 VAR_53 = VAR_44->display_comment_prefix;
 VAR_44->display_comment_prefix = 1;





 VAR_44->hints = 0;

 if (VAR_52)
  FUNC_52(&VAR_49, 0);

 if (VAR_31)
  FUNC_3(&VAR_49, FUNC_32(VAR_49.buf, VAR_49.len), 0);

 if (FUNC_22(VAR_49.buf, 1, VAR_49.len, VAR_44->fp) < VAR_49.len)
  FUNC_12(FUNC_1("could not write commit template"));

 if (VAR_16)
  FUNC_2(&VAR_49);
 FUNC_51(&VAR_49);


 FUNC_48(&VAR_47, FUNC_25(VAR_9));
 if (VAR_37 && VAR_26) {
  int VAR_61 = 0;
  int VAR_62;
  struct ident_split VAR_63, VAR_64;

  if (VAR_40 != VAR_6) {
   if (VAR_17 == VAR_3 &&
    !VAR_54)
    FUNC_57(VAR_44->fp);
   FUNC_46(VAR_44, VAR_8,
       VAR_40 == VAR_7
    ? FUNC_1("\n"
     "It looks like you may be committing a merge.\n"
     "If this is not correct, please remove the file\n"
     "	%s\n"
     "and try again.\n")
    : FUNC_1("\n"
     "It looks like you may be committing a cherry-pick.\n"
     "If this is not correct, please remove the file\n"
     "	%s\n"
     "and try again.\n"),
    VAR_40 == VAR_7 ?
     FUNC_28(VAR_36) :
     FUNC_26(VAR_36));
  }

  FUNC_20(VAR_44->fp, "\n");
  if (VAR_17 == VAR_1)
   FUNC_45(VAR_44, VAR_8,
    FUNC_1("Please enter the commit message for your changes."
      " Lines starting\nwith '%c' will be ignored, and an empty"
      " message aborts the commit.\n"), VAR_18);
  else if (VAR_17 == VAR_3) {
   if (VAR_40 == VAR_6 && !VAR_54)
    FUNC_57(VAR_44->fp);
  } else
   FUNC_45(VAR_44, VAR_8,
    FUNC_1("Please enter the commit message for your changes."
      " Lines starting\n"
      "with '%c' will be kept; you may remove them"
      " yourself if you want to.\n"
      "An empty message aborts the commit.\n"), VAR_18);







  FUNC_6(&VAR_64, VAR_45);
  FUNC_6(&VAR_63, &VAR_47);

  if (FUNC_31(&VAR_64, &VAR_63))
   FUNC_46(VAR_44, VAR_8,
    FUNC_1("%s"
    "Author:    %.*s <%.*s>"),
    VAR_61++ ? "" : "\n",
    (int)(VAR_64.name_end - VAR_64.name_begin), VAR_64.name_begin,
    (int)(VAR_64.mail_end - VAR_64.mail_begin), VAR_64.mail_begin);

  if (FUNC_7())
   FUNC_46(VAR_44, VAR_8,
    FUNC_1("%s"
    "Date:      %s"),
    VAR_61++ ? "" : "\n",
    FUNC_42(&VAR_64, FUNC_0(VAR_10)));

  if (!FUNC_9())
   FUNC_46(VAR_44, VAR_8,
    FUNC_1("%s"
    "Committer: %.*s <%.*s>"),
    VAR_61++ ? "" : "\n",
    (int)(VAR_63.name_end - VAR_63.name_begin), VAR_63.name_begin,
    (int)(VAR_63.mail_end - VAR_63.mail_begin), VAR_63.mail_begin);

  FUNC_46(VAR_44, VAR_8, "%s", "");

  VAR_62 = VAR_44->use_color;
  VAR_44->use_color = 0;
  VAR_48 = FUNC_41(VAR_44->fp, VAR_41, VAR_42, 1, VAR_44);
  VAR_44->use_color = VAR_62;
  FUNC_54(&VAR_44->change, 1);
 } else {
  struct object_id VAR_65;
  const char *VAR_66 = "HEAD";

  if (!VAR_13 && FUNC_38() < 0)
   FUNC_11(FUNC_1("Cannot read index"));

  if (VAR_15)
   VAR_66 = "HEAD^1";

  if (FUNC_24(VAR_66, &VAR_65)) {
   int VAR_67, VAR_68 = 0;

   for (VAR_67 = 0; VAR_67 < VAR_13; VAR_67++)
    if (FUNC_8(VAR_12[VAR_67]))
     VAR_68++;
   VAR_48 = VAR_13 - VAR_68 > 0;
  } else {
   struct diff_flags VAR_69 = VAR_4;
   VAR_69.override_submodule_config = 1;
   if (VAR_25 &&
       !FUNC_53(VAR_25, "all"))
    VAR_69.ignore_submodules = 1;
   VAR_48 = FUNC_33(VAR_36,
        VAR_66, &VAR_69, 1);
  }
 }
 FUNC_51(&VAR_47);

 FUNC_16(VAR_44->fp);






 if (!VAR_48 && VAR_40 != VAR_7 && !VAR_14 &&
     !(VAR_15 && FUNC_34(VAR_43))) {
  VAR_44->display_comment_prefix = VAR_53;
  FUNC_41(VAR_34, VAR_41, VAR_42, 0, VAR_44);
  if (VAR_15)
   FUNC_21(FUNC_1(VAR_19), VAR_33);
  else if (VAR_40 == VAR_5) {
   FUNC_21(FUNC_1(VAR_20), VAR_33);
   if (!VAR_30)
    FUNC_21(FUNC_1(VAR_22), VAR_33);
   else
    FUNC_21(FUNC_1(VAR_21), VAR_33);
  }
  return 0;
 }

 if (!VAR_29 && FUNC_17("pre-commit")) {





  FUNC_13();
 }
 FUNC_39(VAR_41);

 if (FUNC_56(0)) {
  FUNC_14(FUNC_1("Error building trees"));
  return 0;
 }

 if (FUNC_40(VAR_37, VAR_41, "prepare-commit-msg",
       FUNC_27(), VAR_50, VAR_51, ((void*)0)))
  return 0;

 if (VAR_37) {
  struct argv_array VAR_70 = VAR_0;

  FUNC_5(&VAR_70, "GIT_INDEX_FILE=%s", VAR_41);
  if (FUNC_36(FUNC_27(), ((void*)0), VAR_70.argv)) {
   FUNC_20(VAR_33,
   "%s", FUNC_1("Please supply the message using either -m or -F option.\n"));
   FUNC_15(1);
  }
  FUNC_4(&VAR_70);
 }

 if (!VAR_29 &&
     FUNC_40(VAR_37, VAR_41, "commit-msg", FUNC_27(), ((void*)0))) {
  return 0;
 }

 return 1;
}
