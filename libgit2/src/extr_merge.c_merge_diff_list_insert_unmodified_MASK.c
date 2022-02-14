
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int staged; int pool; } ;
typedef TYPE_1__ git_merge_diff_list ;
typedef int git_index_entry ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int const*) ;

__attribute__((used)) static int FUNC_4(
 git_merge_diff_list *VAR_0,
 const git_index_entry *VAR_1[3])
{
 int VAR_2 = 0;
 git_index_entry *VAR_3;

 VAR_3 = FUNC_1(&VAR_0->pool, sizeof(git_index_entry));
 FUNC_0(VAR_3);

 if ((VAR_2 = FUNC_3(VAR_3, &VAR_0->pool, VAR_1[0])) >= 0)
  VAR_2 = FUNC_2(&VAR_0->staged, VAR_3);

 return VAR_2;
}
