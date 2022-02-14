
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int pathspec; int repo; } ;
struct rev_info {struct diff_options diffopt; int prune_data; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct rev_info*,struct object_id const*,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct rev_info*,int *) ;

int FUNC_4(const struct object_id *VAR_0, struct diff_options *VAR_1)
{
 struct rev_info VAR_2;

 FUNC_3(VAR_1->repo, &VAR_2, ((void*)0));
 FUNC_0(&VAR_2.prune_data, &VAR_1->pathspec);
 VAR_2.diffopt = *VAR_1;

 if (FUNC_1(&VAR_2, VAR_0, ((void*)0), 1))
  FUNC_2(128);
 return 0;
}
