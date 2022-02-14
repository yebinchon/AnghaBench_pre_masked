
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_4__ {int file; int use_color; int output_format; } ;
struct rev_info {int diff; int disable_stdin; int no_commit_id; TYPE_2__ diffopt; scalar_t__ abbrev; } ;
struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef int log_tree_opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,char const**) ;
 int FUNC_6 (int ,char*) ;
 char* FUNC_7 (struct commit*,int *) ;
 int FUNC_8 (struct replay_opts*) ;
 int FUNC_9 (struct rev_info*,struct commit*) ;
 int FUNC_10 (struct rev_info*,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 (struct repository*,struct rev_info*,int *) ;
 char* FUNC_13 (struct commit*) ;
 int FUNC_14 (struct strbuf*,char*,int ) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (struct commit*,char const*) ;
 scalar_t__ FUNC_19 (char*,char*,int *,int *,int ,int ) ;
 int FUNC_20 (char const*,int ,int ,int) ;

__attribute__((used)) static int FUNC_21(struct repository *VAR_5,
        struct commit *VAR_6,
        struct replay_opts *VAR_7)
{
 struct strbuf VAR_8 = VAR_3;
 struct rev_info VAR_9;
 const char *VAR_10, *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_13(VAR_6);
 if (FUNC_20(VAR_11, FUNC_17(VAR_11), FUNC_11(), 1) < 0)
  return -1;
 if (FUNC_19("rebase", "REBASE_HEAD", &VAR_6->object.oid,
         ((void*)0), VAR_2, VAR_4))
  VAR_12 |= FUNC_1(FUNC_0("could not update %s"), "REBASE_HEAD");

 FUNC_14(&VAR_8, "%s/patch", FUNC_8(VAR_7));
 FUNC_10(&VAR_9, 0, sizeof(VAR_9));
 FUNC_12(VAR_5, &VAR_9, ((void*)0));
 VAR_9.abbrev = 0;
 VAR_9.diff = 1;
 VAR_9.diffopt.output_format = VAR_0;
 VAR_9.disable_stdin = 1;
 VAR_9.no_commit_id = 1;
 VAR_9.diffopt.file = FUNC_6(VAR_8.buf, "w");
 VAR_9.diffopt.use_color = VAR_1;
 if (!VAR_9.diffopt.file)
  VAR_12 |= FUNC_2(FUNC_0("could not open '%s'"), VAR_8.buf);
 else {
  VAR_12 |= FUNC_9(&VAR_9, VAR_6);
  FUNC_3(VAR_9.diffopt.file);
 }
 FUNC_16(&VAR_8);

 FUNC_14(&VAR_8, "%s/message", FUNC_8(VAR_7));
 if (!FUNC_4(VAR_8.buf)) {
  const char *VAR_13 = FUNC_7(VAR_6, ((void*)0));
  FUNC_5(VAR_13, &VAR_10);
  VAR_12 |= FUNC_20(VAR_10, FUNC_17(VAR_10), VAR_8.buf, 1);
  FUNC_18(VAR_6, VAR_13);
 }
 FUNC_15(&VAR_8);

 return VAR_12;
}
