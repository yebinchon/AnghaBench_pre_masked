
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; scalar_t__ len; } ;
struct object_id {int dummy; } ;
struct merge_remote_desc {TYPE_1__* obj; } ;
struct TYPE_4__ {struct object_id oid; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {scalar_t__ type; struct object_id oid; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,int,struct object_id*,char**) ;
 struct commit* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const) ;
 struct merge_remote_desc* FUNC_5 (struct commit*) ;
 int FUNC_6 (struct object_id*) ;
 int FUNC_7 (struct object_id*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (struct strbuf*,char*,char const*,...) ;
 int FUNC_11 (struct strbuf*,char const*,int ) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct strbuf*,scalar_t__) ;
 int FUNC_14 (char const*) ;
 char* FUNC_15 (char const*,char) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static void FUNC_17(const char *VAR_2, struct strbuf *VAR_3)
{
 struct commit *VAR_4;
 struct object_id VAR_5;
 struct strbuf VAR_6 = VAR_1;
 struct strbuf VAR_7 = VAR_1;
 struct merge_remote_desc *VAR_8;
 const char *VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12;

 FUNC_11(&VAR_7, VAR_2, 0);
 VAR_2 = VAR_7.buf;

 FUNC_7(&VAR_5);
 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4)
  FUNC_1(FUNC_0("'%s' does not point to a commit"), VAR_2);

 if (FUNC_2(VAR_2, FUNC_14(VAR_2), &VAR_5, &VAR_10) > 0) {
  if (FUNC_9(VAR_10, "refs/heads/")) {
   FUNC_10(VAR_3, "%s\t\tbranch '%s' of .\n",
        FUNC_6(&VAR_5), VAR_2);
   goto cleanup;
  }
  if (FUNC_9(VAR_10, "refs/tags/")) {
   FUNC_10(VAR_3, "%s\t\ttag '%s' of .\n",
        FUNC_6(&VAR_5), VAR_2);
   goto cleanup;
  }
  if (FUNC_9(VAR_10, "refs/remotes/")) {
   FUNC_10(VAR_3, "%s\t\tremote-tracking branch '%s' of .\n",
        FUNC_6(&VAR_5), VAR_2);
   goto cleanup;
  }
 }


 for (VAR_11 = 0, VAR_9 = VAR_2 + FUNC_14(VAR_2);
      VAR_2 < VAR_9 && VAR_9[-1] == '^';
      VAR_9--)
  VAR_11++;
 if (VAR_11)
  VAR_12 = 1;
 else {
  VAR_12 = 0;
  VAR_9 = FUNC_15(VAR_2, '~');
  if (VAR_9) {
   int VAR_13 = 0;

   VAR_11++;
   while (*++VAR_9 && FUNC_4(*VAR_9)) {
    VAR_13 |= (*VAR_9 != '0');
    VAR_11++;
   }
   if (*VAR_9)
    VAR_11 = 0;
   else if (VAR_13)
    VAR_12 = 1;
   else if (VAR_11 == 1)
    VAR_12 = 1;
  }
 }
 if (VAR_11) {
  struct strbuf VAR_14 = VAR_1;
  FUNC_10(&VAR_14, "refs/heads/%s", VAR_2);
  FUNC_13(&VAR_14, VAR_14.len - VAR_11);
  if (FUNC_8(VAR_14.buf)) {
   FUNC_10(VAR_3,
        "%s\t\tbranch '%s'%s of .\n",
        FUNC_6(&VAR_4->object.oid),
        VAR_14.buf + 11,
        (VAR_12 ? " (early part)" : ""));
   FUNC_12(&VAR_14);
   goto cleanup;
  }
  FUNC_12(&VAR_14);
 }

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8 && VAR_8->obj && VAR_8->obj->type == VAR_0) {
  FUNC_10(VAR_3, "%s\t\t%s '%s'\n",
       FUNC_6(&VAR_8->obj->oid),
       FUNC_16(VAR_8->obj->type),
       VAR_2);
  goto cleanup;
 }

 FUNC_10(VAR_3, "%s\t\tcommit '%s'\n",
  FUNC_6(&VAR_4->object.oid), VAR_2);
cleanup:
 FUNC_12(&VAR_6);
 FUNC_12(&VAR_7);
}
