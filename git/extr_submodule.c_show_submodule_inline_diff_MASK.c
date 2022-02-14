
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {scalar_t__ reverse_diff; } ;
struct diff_options {int b_prefix; int a_prefix; TYPE_1__ flags; int use_color; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;
struct child_process {int git_cmd; char const* dir; int out; int no_stdin; int env_array; int args; } ;
struct TYPE_4__ {struct object_id* empty_tree; } ;


 struct child_process VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,char*,...) ;
 int FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (struct commit*,int ) ;
 int FUNC_4 (struct diff_options*,char*) ;
 int FUNC_5 (struct diff_options*,int ,int ) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 int FUNC_7 (struct repository*) ;
 int FUNC_8 (struct commit_list*) ;
 scalar_t__ FUNC_9 (struct object_id*) ;
 int FUNC_10 (struct object_id const*) ;
 struct repository* FUNC_11 (char const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct repository*) ;
 int FUNC_14 (struct diff_options*,char const*,struct object_id*,struct object_id*,unsigned int,struct repository*,struct commit**,struct commit**,struct commit_list**) ;
 scalar_t__ FUNC_15 (struct child_process*) ;
 scalar_t__ FUNC_16 (struct strbuf*,int,char) ;
 int FUNC_17 (struct strbuf*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_18 (int ) ;

void FUNC_19(struct diff_options *VAR_5, const char *VAR_6,
  struct object_id *VAR_7, struct object_id *VAR_8,
  unsigned VAR_9)
{
 const struct object_id *VAR_10 = VAR_4->empty_tree, *VAR_11 = VAR_4->empty_tree;
 struct commit *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct commit_list *VAR_14 = ((void*)0);
 struct child_process VAR_15 = VAR_0;
 struct strbuf VAR_16 = VAR_3;
 struct repository *VAR_17;

 VAR_17 = FUNC_11(VAR_6);
 FUNC_14(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_17, &VAR_12, &VAR_13, &VAR_14);


 if (!(VAR_12 || FUNC_9(VAR_7)) ||
     !(VAR_13 || FUNC_9(VAR_8)))
  goto done;

 if (VAR_12)
  VAR_10 = VAR_7;
 if (VAR_13)
  VAR_11 = VAR_8;

 VAR_15.git_cmd = 1;
 VAR_15.dir = VAR_6;
 VAR_15.out = -1;
 VAR_15.no_stdin = 1;


 FUNC_2(&VAR_15.args, "diff", "--submodule=diff", ((void*)0));
 FUNC_1(&VAR_15.args, "--color=%s", FUNC_18(VAR_5->use_color) ?
    "always" : "never");

 if (VAR_5->flags.reverse_diff) {
  FUNC_1(&VAR_15.args, "--src-prefix=%s%s/",
     VAR_5->b_prefix, VAR_6);
  FUNC_1(&VAR_15.args, "--dst-prefix=%s%s/",
     VAR_5->a_prefix, VAR_6);
 } else {
  FUNC_1(&VAR_15.args, "--src-prefix=%s%s/",
     VAR_5->a_prefix, VAR_6);
  FUNC_1(&VAR_15.args, "--dst-prefix=%s%s/",
     VAR_5->b_prefix, VAR_6);
 }
 FUNC_0(&VAR_15.args, FUNC_10(VAR_10));






 if (!(VAR_9 & VAR_1))
  FUNC_0(&VAR_15.args, FUNC_10(VAR_11));

 FUNC_12(&VAR_15.env_array);
 if (FUNC_15(&VAR_15))
  FUNC_4(VAR_5, "(diff failed)\n");

 while (FUNC_16(&VAR_16, VAR_15.out, '\n') != VAR_2)
  FUNC_5(VAR_5, VAR_16.buf, VAR_16.len);

 if (FUNC_6(&VAR_15))
  FUNC_4(VAR_5, "(diff failed)\n");

done:
 FUNC_17(&VAR_16);
 if (VAR_14)
  FUNC_8(VAR_14);
 if (VAR_12)
  FUNC_3(VAR_12, ~0);
 if (VAR_13)
  FUNC_3(VAR_13, ~0);
 if (VAR_17) {
  FUNC_13(VAR_17);
  FUNC_7(VAR_17);
 }
}
