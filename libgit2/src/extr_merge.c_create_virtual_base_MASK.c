
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_16__ {int flags; } ;
typedef TYPE_1__ git_merge_options ;
typedef int git_index ;
struct TYPE_17__ {int parents; int * index; int type; } ;
typedef TYPE_2__ git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int) ;
 scalar_t__ FUNC_4 (int **,int *,int *,TYPE_2__*,TYPE_2__*,size_t,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(
 git_annotated_commit **VAR_4,
 git_repository *VAR_5,
 git_annotated_commit *VAR_6,
 git_annotated_commit *VAR_7,
 const git_merge_options *VAR_8,
 size_t VAR_9)
{
 git_annotated_commit *VAR_10 = ((void*)0);
 git_index *VAR_11 = ((void*)0);
 git_merge_options VAR_12 = VAR_2;




 if (VAR_8)
  FUNC_3(&VAR_12, VAR_8, sizeof(git_merge_options));

 VAR_12.flags &= ~VAR_1;
 VAR_12.flags |= VAR_3;

 if ((FUNC_4(&VAR_11, ((void*)0), VAR_5, VAR_6, VAR_7,
   VAR_9 + 1, &VAR_12)) < 0)
  return -1;

 VAR_10 = FUNC_1(1, sizeof(git_annotated_commit));
 FUNC_0(VAR_10);
 VAR_10->type = VAR_0;
 VAR_10->index = VAR_11;

 FUNC_2(&VAR_10->parents, VAR_6);
 FUNC_2(&VAR_10->parents, VAR_7);

 *VAR_4 = VAR_10;
 return 0;
}
