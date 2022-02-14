
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_info {int summary; int committer_tz; int committer_mail; int committer; int author_tz; int author_mail; int author; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct commit_info *VAR_0)
{

 FUNC_0(&VAR_0->author);
 FUNC_0(&VAR_0->author_mail);
 FUNC_0(&VAR_0->author_tz);
 FUNC_0(&VAR_0->committer);
 FUNC_0(&VAR_0->committer_mail);
 FUNC_0(&VAR_0->committer_tz);
 FUNC_0(&VAR_0->summary);
}
