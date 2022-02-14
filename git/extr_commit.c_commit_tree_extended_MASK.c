
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit_extra_header {struct commit_extra_header* next; } ;
struct TYPE_2__ {struct object_id const oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,struct commit_extra_header*) ;
 int FUNC_2 (struct object_id const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (int ) ;
 char const* VAR_4 ;
 char const* FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char,size_t) ;
 char const* FUNC_10 (struct object_id const*) ;
 struct commit* FUNC_11 (struct commit_list**) ;
 int VAR_5 ;
 int FUNC_12 (struct strbuf*,char const*,size_t) ;
 int FUNC_13 (struct strbuf*,char) ;
 int FUNC_14 (struct strbuf*,char*,char const*) ;
 int FUNC_15 (struct strbuf*,int) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (int ,int ,int ,struct object_id*) ;

int FUNC_19(const char *VAR_6, size_t VAR_7,
    const struct object_id *VAR_8,
    struct commit_list *VAR_9, struct object_id *VAR_10,
    const char *VAR_11, const char *VAR_12,
    struct commit_extra_header *VAR_13)
{
 int VAR_14;
 int VAR_15;
 struct strbuf VAR_16;

 FUNC_2(VAR_8, VAR_1);

 if (FUNC_9(VAR_6, '\0', VAR_7))
  return FUNC_4("a NUL byte in commit log message not allowed.");


 VAR_15 = FUNC_8(VAR_4);

 FUNC_15(&VAR_16, 8192);
 FUNC_14(&VAR_16, "tree %s\n", FUNC_10(VAR_8));






 while (VAR_9) {
  struct commit *VAR_17 = FUNC_11(&VAR_9);
  FUNC_14(&VAR_16, "parent %s\n",
       FUNC_10(&VAR_17->object.oid));
 }


 if (!VAR_11)
  VAR_11 = FUNC_6(VAR_0);
 FUNC_14(&VAR_16, "author %s\n", VAR_11);
 FUNC_14(&VAR_16, "committer %s\n", FUNC_7(VAR_0));
 if (!VAR_15)
  FUNC_14(&VAR_16, "encoding %s\n", VAR_4);

 while (VAR_13) {
  FUNC_1(&VAR_16, VAR_13);
  VAR_13 = VAR_13->next;
 }
 FUNC_13(&VAR_16, '\n');


 FUNC_12(&VAR_16, VAR_6, VAR_7);


 if (VAR_15 && !FUNC_17(&VAR_16))
  FUNC_5(VAR_5, "%s", FUNC_0(VAR_3));

 if (VAR_12 && FUNC_3(&VAR_16, VAR_12)) {
  VAR_14 = -1;
  goto out;
 }

 VAR_14 = FUNC_18(VAR_16.buf, VAR_16.len, VAR_2, VAR_10);
out:
 FUNC_16(&VAR_16);
 return VAR_14;
}
