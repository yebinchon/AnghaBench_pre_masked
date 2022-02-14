
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct am_state {int cur; int orig_commit; scalar_t__ msg_len; int msg; int author_date; int author_email; int author_name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct am_state*,char*) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (char*,struct object_id*) ;
 char* FUNC_4 (struct object_id*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct am_state*,char*,int ) ;
 int FUNC_8 (struct am_state*,char*,char*) ;

__attribute__((used)) static void FUNC_9(struct am_state *VAR_1)
{
 struct object_id VAR_2;

 FUNC_0(VAR_1->author_name);
 FUNC_0(VAR_1->author_email);
 FUNC_0(VAR_1->author_date);
 FUNC_0(VAR_1->msg);
 VAR_1->msg_len = 0;

 FUNC_6(FUNC_1(VAR_1, "author-script"));
 FUNC_6(FUNC_1(VAR_1, "final-commit"));

 FUNC_5(&VAR_1->orig_commit);
 FUNC_6(FUNC_1(VAR_1, "original-commit"));
 FUNC_2(((void*)0), "REBASE_HEAD", ((void*)0), VAR_0);

 if (!FUNC_3("HEAD", &VAR_2))
  FUNC_8(VAR_1, "abort-safety", FUNC_4(&VAR_2));
 else
  FUNC_8(VAR_1, "abort-safety", "");

 VAR_1->cur++;
 FUNC_7(VAR_1, "next", VAR_1->cur);
}
