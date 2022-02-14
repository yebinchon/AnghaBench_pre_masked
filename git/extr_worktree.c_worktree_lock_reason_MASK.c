
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int lock_reason_valid; char const* lock_reason; } ;
struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct worktree*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 char const* FUNC_6 (struct strbuf*,int *) ;
 scalar_t__ FUNC_7 (struct strbuf*,int ,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct worktree*,char*) ;

const char *FUNC_11(struct worktree *VAR_1)
{
 FUNC_1(!FUNC_4(VAR_1));

 if (!VAR_1->lock_reason_valid) {
  struct strbuf VAR_2 = VAR_0;

  FUNC_5(&VAR_2, FUNC_10(VAR_1, "locked"));
  if (FUNC_3(VAR_2.buf)) {
   struct strbuf VAR_3 = VAR_0;
   if (FUNC_7(&VAR_3, VAR_2.buf, 0) < 0)
    FUNC_2(FUNC_0("failed to read '%s'"), VAR_2.buf);
   FUNC_9(&VAR_3);
   VAR_1->lock_reason = FUNC_6(&VAR_3, ((void*)0));
  } else
   VAR_1->lock_reason = ((void*)0);
  VAR_1->lock_reason_valid = 1;
  FUNC_8(&VAR_2);
 }

 return VAR_1->lock_reason;
}
