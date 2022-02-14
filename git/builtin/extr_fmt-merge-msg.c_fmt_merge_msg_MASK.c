
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; char* buf; } ;
struct rev_info {int ignore_merges; int limited; int commit_format; } ;
struct object_id {int dummy; } ;
struct merge_parents {void* item; } ;
struct fmt_merge_msg_opts {scalar_t__ shortlog_len; scalar_t__ add_title; } ;
struct commit {int dummy; } ;
typedef int merge_parents ;
struct TYPE_6__ {int nr; TYPE_1__* items; } ;
struct TYPE_5__ {scalar_t__ nr; } ;
struct TYPE_4__ {int util; int string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct merge_parents*,struct strbuf*,struct object_id*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (char*,struct merge_parents*) ;
 struct commit* FUNC_6 (struct object_id*,char*) ;
 int FUNC_7 (struct merge_parents*,int ,int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_8 (int ,struct rev_info*,int *) ;
 void* FUNC_9 (char*,int ,struct object_id*,int *) ;
 int FUNC_10 (int ,int ,struct commit*,struct rev_info*,struct fmt_merge_msg_opts*,struct strbuf*) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (struct strbuf*) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*) ;
 int VAR_4 ;

int FUNC_15(struct strbuf *VAR_5, struct strbuf *VAR_6,
    struct fmt_merge_msg_opts *VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 struct object_id VAR_10;
 const char *VAR_11;
 void *VAR_12;
 struct merge_parents VAR_13;

 FUNC_7(&VAR_13, 0, sizeof(VAR_13));


 VAR_11 = VAR_12 =
  FUNC_9("HEAD", VAR_1, &VAR_10, ((void*)0));
 if (!VAR_11)
  FUNC_0("No current branch");
 if (FUNC_11(VAR_11, "refs/heads/"))
  VAR_11 += 11;

 FUNC_1(&VAR_13, VAR_5, &VAR_10);


 while (VAR_9 < VAR_5->len) {
  int VAR_14;
  char *VAR_15, *VAR_16 = VAR_5->buf + VAR_9;

  VAR_15 = FUNC_13(VAR_16, '\n');
  VAR_14 = VAR_15 ? VAR_15 - VAR_16 : FUNC_14(VAR_16);
  VAR_9 += VAR_14 + !!VAR_15;
  VAR_8++;
  VAR_16[VAR_14] = 0;
  if (FUNC_5(VAR_16, &VAR_13))
   FUNC_0("error in line %d: %.*s", VAR_8, VAR_14, VAR_16);
 }

 if (VAR_7->add_title && VAR_3.nr)
  FUNC_3(VAR_6, VAR_11);

 if (VAR_2.nr)
  FUNC_2(VAR_6);

 if (VAR_7->shortlog_len) {
  struct commit *VAR_17;
  struct rev_info VAR_18;

  VAR_17 = FUNC_6(&VAR_10, "HEAD");
  FUNC_8(VAR_4, &VAR_18, ((void*)0));
  VAR_18.commit_format = VAR_0;
  VAR_18.ignore_merges = 1;
  VAR_18.limited = 1;

  FUNC_12(VAR_6);

  for (VAR_8 = 0; VAR_8 < VAR_2.nr; VAR_8++)
   FUNC_10(VAR_2.items[VAR_8].string,
     VAR_2.items[VAR_8].util,
     VAR_17, &VAR_18, VAR_7, VAR_6);
 }

 FUNC_12(VAR_6);
 FUNC_4(VAR_12);
 FUNC_4(VAR_13.item);
 return 0;
}
