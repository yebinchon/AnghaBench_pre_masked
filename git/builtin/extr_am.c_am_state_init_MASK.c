
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_state {int prec; int threeway; int utf8; int message_id; char* sign_commit; int git_apply_opts; int scissors; int dir; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct am_state*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct am_state *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->dir = FUNC_2("rebase-apply");

 VAR_1->prec = 4;

 FUNC_1("am.threeway", &VAR_1->threeway);

 VAR_1->utf8 = 1;

 FUNC_1("am.messageid", &VAR_1->message_id);

 VAR_1->scissors = VAR_0;

 FUNC_0(&VAR_1->git_apply_opts);

 if (!FUNC_1("commit.gpgsign", &VAR_2))
  VAR_1->sign_commit = VAR_2 ? "" : ((void*)0);
}
