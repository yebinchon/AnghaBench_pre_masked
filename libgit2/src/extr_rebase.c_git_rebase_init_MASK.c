
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_13__ {int inmemory; } ;
typedef TYPE_1__ git_rebase_options ;
struct TYPE_14__ {int inmemory; int type; int * repo; } ;
typedef TYPE_2__ git_rebase ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int **,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__**,TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int,int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,int *,int const*,int const*,int const*) ;
 int FUNC_13 (TYPE_2__*,int *,int const*,int const*,int const*) ;
 int FUNC_14 (TYPE_2__*,int *,int const*,int const*,int const*) ;

int FUNC_15(
 git_rebase **VAR_2,
 git_repository *VAR_3,
 const git_annotated_commit *VAR_4,
 const git_annotated_commit *VAR_5,
 const git_annotated_commit *VAR_6,
 const git_rebase_options *VAR_7)
{
 git_rebase *VAR_8 = ((void*)0);
 git_annotated_commit *VAR_9 = ((void*)0);
 git_reference *VAR_10 = ((void*)0);
 bool VAR_11 = (VAR_7 && VAR_7->inmemory);
 int VAR_12;

 FUNC_0(VAR_3 && (VAR_5 || VAR_6));

 *VAR_2 = ((void*)0);

 if (!VAR_6)
  VAR_6 = VAR_5;

 if ((VAR_12 = FUNC_8(VAR_7)) < 0)
  goto done;

 if (!VAR_11) {
  if ((VAR_12 = FUNC_5(VAR_3, "rebase")) < 0 ||
   (VAR_12 = FUNC_11(VAR_3)) < 0 ||
   (VAR_12 = FUNC_10(VAR_3, 1, 1, VAR_0)) < 0)
   goto done;
 }

 if (!VAR_4) {
  if ((VAR_12 = FUNC_6(&VAR_10, VAR_3)) < 0 ||
   (VAR_12 = FUNC_2(&VAR_9, VAR_3, VAR_10)) < 0)
   goto done;

  VAR_4 = VAR_9;
 }

 if (FUNC_7(&VAR_8, VAR_7) < 0)
  return -1;

 VAR_8->repo = VAR_3;
 VAR_8->inmemory = VAR_11;
 VAR_8->type = VAR_1;

 if ((VAR_12 = FUNC_14(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
  goto done;

 if (VAR_11)
  VAR_12 = FUNC_12(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_12 = FUNC_13(VAR_8, VAR_3, VAR_4 ,VAR_5, VAR_6);

 if (VAR_12 == 0)
  *VAR_2 = VAR_8;

done:
 FUNC_4(VAR_10);
 FUNC_1(VAR_9);

 if (VAR_12 < 0) {
  FUNC_9(VAR_8);
  FUNC_3(VAR_8);
 }

 return VAR_12;
}
