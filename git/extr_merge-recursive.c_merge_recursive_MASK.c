
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_options {int repo; int * ancestor; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct merge_options*) ;
 int FUNC_2 (struct merge_options*,struct commit*,struct commit*,struct commit_list*,struct commit**) ;
 scalar_t__ FUNC_3 (struct merge_options*,int ) ;
 int FUNC_4 (int ,struct commit*) ;
 int FUNC_5 (int *,char*) ;

int FUNC_6(struct merge_options *VAR_0,
      struct commit *VAR_1,
      struct commit *VAR_2,
      struct commit_list *VAR_3,
      struct commit **VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_0->ancestor == ((void*)0) ||
        !FUNC_5(VAR_0->ancestor, "constructed merge base"));

 if (FUNC_3(VAR_0, FUNC_4(VAR_0->repo, VAR_1)))
  return -1;
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_0);

 return VAR_5;
}
