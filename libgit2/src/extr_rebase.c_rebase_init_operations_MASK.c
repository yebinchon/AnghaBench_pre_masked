
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_rebase_operation ;
struct TYPE_4__ {int repo; } ;
typedef TYPE_1__ git_rebase ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_12(
 git_rebase *VAR_2,
 git_repository *VAR_3,
 const git_annotated_commit *VAR_4,
 const git_annotated_commit *VAR_5,
 const git_annotated_commit *VAR_6)
{
 git_revwalk *VAR_7 = ((void*)0);
 git_commit *VAR_8;
 git_oid VAR_9;
 bool VAR_10;
 git_rebase_operation *VAR_11;
 int VAR_12;

 if (!VAR_5)
  VAR_5 = VAR_6;

 if ((VAR_12 = FUNC_7(&VAR_7, VAR_2->repo)) < 0 ||
  (VAR_12 = FUNC_9(VAR_7, FUNC_1(VAR_4))) < 0 ||
  (VAR_12 = FUNC_6(VAR_7, FUNC_1(VAR_5))) < 0)
  goto done;

 FUNC_10(VAR_7, VAR_1);

 while ((VAR_12 = FUNC_8(&VAR_9, VAR_7)) == 0) {
  if ((VAR_12 = FUNC_3(&VAR_8, VAR_3, &VAR_9)) < 0)
   goto done;

  VAR_10 = (FUNC_4(VAR_8) > 1);
  FUNC_2(VAR_8);

  if (VAR_10)
   continue;

  VAR_11 = FUNC_11(VAR_2, VAR_0, &VAR_9, ((void*)0));
  FUNC_0(VAR_11);
 }

 VAR_12 = 0;

done:
 FUNC_5(VAR_7);
 return VAR_12;
}
