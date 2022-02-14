
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {scalar_t__ keep_redundant_commits; int allow_empty; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct repository*) ;
 int FUNC_1 (struct commit*) ;

__attribute__((used)) static int FUNC_2(struct repository *VAR_0,
         struct replay_opts *VAR_1,
         struct commit *VAR_2)
{
 int VAR_3, VAR_4;
 if (!VAR_1->allow_empty)
  return 0;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 if (!VAR_3)
  return 0;

 if (VAR_1->keep_redundant_commits)
  return 1;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 if (!VAR_4)
  return 0;
 else
  return 1;
}
