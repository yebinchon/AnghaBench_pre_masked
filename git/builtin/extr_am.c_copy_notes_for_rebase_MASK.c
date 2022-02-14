
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct notes_rewrite_cfg {int dummy; } ;
struct am_state {int rebasing; } ;
struct TYPE_2__ {int hexsz; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct am_state const*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct notes_rewrite_cfg*,struct object_id*,struct object_id*) ;
 int FUNC_4 (char const*,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct notes_rewrite_cfg*,char const*) ;
 scalar_t__ FUNC_7 (char const*,struct object_id*) ;
 struct notes_rewrite_cfg* FUNC_8 (char*) ;
 char* FUNC_9 (struct object_id*) ;
 scalar_t__ FUNC_10 (int ,struct object_id*,char const**) ;
 int FUNC_11 (struct strbuf*,int *) ;
 int FUNC_12 (struct strbuf*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int * FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(const struct am_state *VAR_3)
{
 struct notes_rewrite_cfg *VAR_4;
 struct strbuf VAR_5 = VAR_0;
 const char *VAR_6 = FUNC_0("Malformed input line: '%s'.");
 const char *VAR_7 = "Notes added by 'git rebase'";
 FILE *VAR_8;
 int VAR_9 = 0;

 FUNC_2(VAR_3->rebasing);

 VAR_4 = FUNC_8("rebase");
 if (!VAR_4)
  return 0;

 VAR_8 = FUNC_13(FUNC_1(VAR_3, "rewritten"), "r");

 while (!FUNC_11(&VAR_5, VAR_8)) {
  struct object_id VAR_10, VAR_11;
  const char *VAR_12;

  if (VAR_5.len != VAR_1->hexsz * 2 + 1) {
   VAR_9 = FUNC_4(VAR_6, VAR_5.buf);
   goto finish;
  }

  if (FUNC_10(VAR_5.buf, &VAR_10, &VAR_12)) {
   VAR_9 = FUNC_4(VAR_6, VAR_5.buf);
   goto finish;
  }

  if (*VAR_12 != ' ') {
   VAR_9 = FUNC_4(VAR_6, VAR_5.buf);
   goto finish;
  }

  if (FUNC_7(VAR_12 + 1, &VAR_11)) {
   VAR_9 = FUNC_4(VAR_6, VAR_5.buf);
   goto finish;
  }

  if (FUNC_3(VAR_4, &VAR_10, &VAR_11))
   VAR_9 = FUNC_4(FUNC_0("Failed to copy notes from '%s' to '%s'"),
     FUNC_9(&VAR_10), FUNC_9(&VAR_11));
 }

finish:
 FUNC_6(VAR_2, VAR_4, VAR_7);
 FUNC_5(VAR_8);
 FUNC_12(&VAR_5);
 return VAR_9;
}
