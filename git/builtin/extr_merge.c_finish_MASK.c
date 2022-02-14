
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct diff_options {int stat_width; int stat_graph_width; int output_format; int detect_rename; } ;
struct commit_list {int dummy; } ;
struct TYPE_5__ {struct object_id oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int objects; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct diff_options*) ;
 int FUNC_3 (struct diff_options*) ;
 int FUNC_4 (struct object_id const*,struct object_id const*,char*,struct diff_options*) ;
 int FUNC_5 (struct diff_options*) ;
 int FUNC_6 (char*) ;
 TYPE_4__ VAR_6 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_2__*,struct diff_options*) ;
 int FUNC_9 (char const**,int ) ;
 int FUNC_10 (int *,char*,char*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (struct commit*,struct commit_list*) ;
 int FUNC_12 (struct strbuf*,char*,int ,char const*) ;
 int FUNC_13 (struct strbuf*,int ) ;
 int FUNC_14 (struct strbuf*) ;
 TYPE_2__* VAR_9 ;
 int FUNC_15 (int ,char*,struct object_id const*,struct object_id const*,int ,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_16(struct commit *VAR_11,
     struct commit_list *VAR_12,
     const struct object_id *VAR_13, const char *VAR_14)
{
 struct strbuf VAR_15 = VAR_4;
 const struct object_id *VAR_16 = &VAR_11->object.oid;

 if (!VAR_14)
  FUNC_13(&VAR_15, FUNC_6("GIT_REFLOG_ACTION"));
 else {
  if (VAR_10 >= 0)
   FUNC_7("%s\n", VAR_14);
  FUNC_12(&VAR_15, "%s: %s",
   FUNC_6("GIT_REFLOG_ACTION"), VAR_14);
 }
 if (VAR_8) {
  FUNC_11(VAR_11, VAR_12);
 } else {
  if (VAR_10 >= 0 && !VAR_6.len)
   FUNC_7(FUNC_0("No merge message -- not updating HEAD\n"));
  else {
   const char *VAR_17[] = { "gc", "--auto", ((void*)0) };
   FUNC_15(VAR_15.buf, "HEAD", VAR_13, VAR_16,
       0, VAR_5);




   FUNC_1(VAR_9->objects);
   FUNC_9(VAR_17, VAR_3);
  }
 }
 if (VAR_13 && VAR_7) {
  struct diff_options VAR_18;
  FUNC_8(VAR_9, &VAR_18);
  VAR_18.stat_width = -1;
  VAR_18.stat_graph_width = -1;
  VAR_18.output_format |=
   VAR_2 | VAR_1;
  VAR_18.detect_rename = VAR_0;
  FUNC_3(&VAR_18);
  FUNC_4(VAR_16, VAR_13, "", &VAR_18);
  FUNC_5(&VAR_18);
  FUNC_2(&VAR_18);
 }


 FUNC_10(((void*)0), "post-merge", VAR_8 ? "1" : "0", ((void*)0));

 FUNC_14(&VAR_15);
}
