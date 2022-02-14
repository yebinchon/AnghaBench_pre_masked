
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct strbuf {int dummy; } ;
struct repository {int index; } ;
struct replay_opts {char** xopts; int xopts_nr; int default_msg_cleanup; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int buf; } ;
struct merge_options {char const* ancestor; char* branch1; char const* branch2; int buffer_output; int show_rename_progress; TYPE_1__ obuf; } ;
struct lock_file {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 struct lock_file VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct replay_opts*) ;
 int FUNC_2 (int ,struct strbuf*,int ) ;
 struct tree* FUNC_3 (struct repository*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct tree* FUNC_6 (struct commit*) ;
 int FUNC_7 (struct merge_options*,struct repository*) ;
 scalar_t__ FUNC_8 (struct replay_opts*) ;
 int FUNC_9 (struct merge_options*,struct tree*,struct tree*,struct tree*) ;
 int FUNC_10 (struct merge_options*,char*) ;
 struct tree* FUNC_11 (struct object_id*) ;
 scalar_t__ FUNC_12 (struct repository*,struct lock_file*,int ) ;
 int FUNC_13 (struct repository*) ;
 int FUNC_14 (struct lock_file*) ;
 int VAR_4 ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (int ,struct lock_file*,int) ;

__attribute__((used)) static int FUNC_17(struct repository *VAR_5,
         struct commit *VAR_6, struct commit *VAR_7,
         const char *VAR_8, const char *VAR_9,
         struct object_id *VAR_10, struct strbuf *VAR_11,
         struct replay_opts *VAR_12)
{
 struct merge_options VAR_13;
 struct tree *VAR_14, *VAR_15, *VAR_16;
 int VAR_17;
 char **VAR_18;
 struct lock_file VAR_19 = VAR_1;

 if (FUNC_12(VAR_5, &VAR_19, VAR_2) < 0)
  return -1;

 FUNC_13(VAR_5);

 FUNC_7(&VAR_13, VAR_5);
 VAR_13.ancestor = VAR_6 ? VAR_8 : "(empty tree)";
 VAR_13.branch1 = "HEAD";
 VAR_13.branch2 = VAR_7 ? VAR_9 : "(empty tree)";
 if (FUNC_8(VAR_12))
  VAR_13.buffer_output = 2;
 VAR_13.show_rename_progress = 1;

 VAR_16 = FUNC_11(VAR_10);
 VAR_14 = VAR_7 ? FUNC_6(VAR_7) : FUNC_3(VAR_5);
 VAR_15 = VAR_6 ? FUNC_6(VAR_6) : FUNC_3(VAR_5);

 for (VAR_18 = VAR_12->xopts; VAR_18 != VAR_12->xopts + VAR_12->xopts_nr; VAR_18++)
  FUNC_10(&VAR_13, *VAR_18);

 VAR_17 = FUNC_9(&VAR_13,
       VAR_16,
       VAR_14, VAR_15);
 if (FUNC_8(VAR_12) && VAR_17 <= 0)
  FUNC_5(VAR_13.obuf.buf, VAR_4);
 FUNC_15(&VAR_13.obuf);
 if (VAR_17 < 0) {
  FUNC_14(&VAR_19);
  return VAR_17;
 }

 if (FUNC_16(VAR_5->index, &VAR_19,
          VAR_0 | VAR_3))




  return FUNC_4(FUNC_0("%s: Unable to write new index file"),
   FUNC_0(FUNC_1(VAR_12)));

 if (!VAR_17)
  FUNC_2(VAR_5->index, VAR_11,
          VAR_12->default_msg_cleanup);

 return !VAR_17;
}
