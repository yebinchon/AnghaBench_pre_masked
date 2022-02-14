
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct rev_info {int verbose_header; int max_parents; int cherry_mark; int limited; int reverse; int right_only; int topo_order; int pretty_given; int commit_format; int sort_order; } ;
struct repository {int dummy; } ;
struct pretty_print_context {int output_encoding; int fmt; int member_0; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct rev_info*) ;
 int FUNC_4 () ;
 struct commit* FUNC_5 (struct rev_info*) ;
 int FUNC_6 (char*,char**) ;
 int FUNC_7 (struct commit*) ;
 int FUNC_8 (struct pretty_print_context*,struct rev_info*,struct strbuf*,unsigned int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct rev_info*) ;
 int FUNC_11 (struct pretty_print_context*,struct commit*,struct strbuf*) ;
 int FUNC_12 (struct repository*,struct rev_info*,int *) ;
 int FUNC_13 (int,char const**,struct rev_info*,int *) ;
 int FUNC_14 (struct strbuf*,char) ;
 int FUNC_15 (struct strbuf*,char*,char const*,...) ;
 char* FUNC_16 (char*) ;

int FUNC_17(struct repository *VAR_6, struct strbuf *VAR_7, int VAR_8,
     const char **VAR_9, unsigned VAR_10)
{
 char *VAR_11 = ((void*)0);
 struct pretty_print_context VAR_12 = {0};
 struct rev_info VAR_13;
 struct commit *VAR_14;
 int VAR_15 = VAR_10 & VAR_3;
 const char *VAR_16 = VAR_10 & VAR_2 ? "p" : "pick";
 int VAR_17 = VAR_10 & VAR_4;

 FUNC_12(VAR_6, &VAR_13, ((void*)0));
 VAR_13.verbose_header = 1;
 if (!VAR_17)
  VAR_13.max_parents = 1;
 VAR_13.cherry_mark = 1;
 VAR_13.limited = 1;
 VAR_13.reverse = 1;
 VAR_13.right_only = 1;
 VAR_13.sort_order = VAR_1;
 VAR_13.topo_order = 1;

 VAR_13.pretty_given = 1;
 FUNC_6("rebase.instructionFormat", &VAR_11);
 if (!VAR_11 || !*VAR_11) {
  FUNC_2(VAR_11);
  VAR_11 = FUNC_16("%s");
 }
 FUNC_3(VAR_11, &VAR_13);
 FUNC_2(VAR_11);
 VAR_12.fmt = VAR_13.commit_format;
 VAR_12.output_encoding = FUNC_4();

 if (FUNC_13(VAR_8, VAR_9, &VAR_13, ((void*)0)) > 1)
  return FUNC_1(FUNC_0("make_script: unhandled options"));

 if (FUNC_10(&VAR_13) < 0)
  return FUNC_1(FUNC_0("make_script: error preparing revisions"));

 if (VAR_17)
  return FUNC_8(&VAR_12, &VAR_13, VAR_7, VAR_10);

 while ((VAR_14 = FUNC_5(&VAR_13))) {
  int VAR_18 = FUNC_7(VAR_14);

  if (!VAR_18 && (VAR_14->object.flags & VAR_0))
   continue;
  if (!VAR_15 && VAR_18)
   FUNC_15(VAR_7, "%c ", VAR_5);
  FUNC_15(VAR_7, "%s %s ", VAR_16,
       FUNC_9(&VAR_14->object.oid));
  FUNC_11(&VAR_12, VAR_14, VAR_7);
  FUNC_14(VAR_7, '\n');
 }
 return 0;
}
