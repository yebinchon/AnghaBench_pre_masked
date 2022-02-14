
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_2__ {int output_format; scalar_t__ break_opt; int detect_rename; } ;
struct rev_info {int diff; int verbose_header; int show_root_diff; int always_show_header; int use_terminator; TYPE_1__ diffopt; } ;
struct repository {int dummy; } ;
struct pretty_print_context {int member_0; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_6 (int ,struct rev_info*) ;
 char* FUNC_7 () ;
 int FUNC_8 (struct rev_info*,struct commit*) ;
 struct commit* FUNC_9 (struct repository*,struct object_id const*) ;
 scalar_t__ FUNC_10 (struct commit*) ;
 int FUNC_11 (char*,char const*,char*) ;
 int FUNC_12 (struct repository*,struct rev_info*,char const*) ;
 char* FUNC_13 (char*,int ,int *,int *) ;
 int FUNC_14 (int ,int *,struct rev_info*,int *) ;
 int FUNC_15 (char const*,char*,char const**) ;
 int FUNC_16 (struct strbuf*,struct strbuf*) ;
 int FUNC_17 (struct strbuf*,char) ;
 int FUNC_18 (struct strbuf*,char*) ;
 scalar_t__ FUNC_19 (struct strbuf*,struct strbuf*) ;
 int FUNC_20 (struct strbuf*) ;
 int FUNC_21 (char const*,char*) ;

void FUNC_22(struct repository *VAR_7,
     const char *VAR_8,
     const struct object_id *VAR_9,
     unsigned int VAR_10)
{
 struct rev_info VAR_11;
 struct commit *VAR_12;
 struct strbuf VAR_13 = VAR_3;
 const char *VAR_14;
 struct pretty_print_context VAR_15 = {0};
 struct strbuf VAR_16 = VAR_3;
 struct strbuf VAR_17 = VAR_3;

 VAR_12 = FUNC_9(VAR_7, VAR_9);
 if (!VAR_12)
  FUNC_2(FUNC_0("couldn't look up newly created commit"));
 if (FUNC_10(VAR_12))
  FUNC_2(FUNC_0("could not parse newly created commit"));

 FUNC_18(&VAR_13, "format:%h] %s");

 FUNC_5(VAR_12, "%an <%ae>", &VAR_16, &VAR_15);
 FUNC_5(VAR_12, "%cn <%ce>", &VAR_17, &VAR_15);
 if (FUNC_19(&VAR_16, &VAR_17)) {
  FUNC_18(&VAR_13, "\n Author: ");
  FUNC_16(&VAR_13, &VAR_16);
 }
 if (VAR_10 & VAR_5) {
  struct strbuf VAR_18 = VAR_3;

  FUNC_5(VAR_12, "%ad", &VAR_18, &VAR_15);
  FUNC_18(&VAR_13, "\n Date: ");
  FUNC_16(&VAR_13, &VAR_18);
  FUNC_20(&VAR_18);
 }
 if (!FUNC_1()) {
  FUNC_18(&VAR_13, "\n Committer: ");
  FUNC_16(&VAR_13, &VAR_17);
  if (VAR_6) {
   FUNC_17(&VAR_13, '\n');
   FUNC_18(&VAR_13, FUNC_7());
  }
 }
 FUNC_20(&VAR_16);
 FUNC_20(&VAR_17);

 FUNC_12(VAR_7, &VAR_11, VAR_8);
 FUNC_14(0, ((void*)0), &VAR_11, ((void*)0));

 VAR_11.diff = 1;
 VAR_11.diffopt.output_format =
  VAR_1 | VAR_2;

 VAR_11.verbose_header = 1;
 VAR_11.show_root_diff = 1;
 FUNC_6(VAR_13.buf, &VAR_11);
 VAR_11.always_show_header = 0;
 VAR_11.diffopt.detect_rename = VAR_0;
 VAR_11.diffopt.break_opt = 0;
 FUNC_4(&VAR_11.diffopt);

 VAR_14 = FUNC_13("HEAD", 0, ((void*)0), ((void*)0));
 if (!VAR_14)
  FUNC_3(FUNC_0("unable to resolve HEAD after creating commit"));
 if (!FUNC_21(VAR_14, "HEAD"))
  VAR_14 = FUNC_0("detached HEAD");
 else
  FUNC_15(VAR_14, "refs/heads/", &VAR_14);
 FUNC_11("[%s%s ", VAR_14, (VAR_10 & VAR_4) ?
      FUNC_0(" (root-commit)") : "");

 if (!FUNC_8(&VAR_11, VAR_12)) {
  VAR_11.always_show_header = 1;
  VAR_11.use_terminator = 1;
  FUNC_8(&VAR_11, VAR_12);
 }

 FUNC_20(&VAR_13);
}
