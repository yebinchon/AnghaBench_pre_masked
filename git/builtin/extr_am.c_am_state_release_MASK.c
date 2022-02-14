
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_state {int git_apply_opts; int msg; int author_date; int author_email; int author_name; int dir; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct am_state *VAR_0)
{
 FUNC_1(VAR_0->dir);
 FUNC_1(VAR_0->author_name);
 FUNC_1(VAR_0->author_email);
 FUNC_1(VAR_0->author_date);
 FUNC_1(VAR_0->msg);
 FUNC_0(&VAR_0->git_apply_opts);
}
