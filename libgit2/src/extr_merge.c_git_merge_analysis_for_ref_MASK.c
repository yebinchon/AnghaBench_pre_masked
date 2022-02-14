
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_merge_preference_t ;
typedef int git_merge_analysis_t ;
typedef int const git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int *,int *) ;
 int FUNC_6 (int const**,int const**,int *,int *,int const**,size_t) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(
 git_merge_analysis_t *VAR_6,
 git_merge_preference_t *VAR_7,
 git_repository *VAR_8,
 git_reference *VAR_9,
 const git_annotated_commit **VAR_10,
 size_t VAR_11)
{
 git_annotated_commit *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 bool VAR_15;

 FUNC_0(VAR_6 && VAR_7 && VAR_8 && VAR_10 && VAR_11 > 0);

 if (VAR_11 != 1) {
  FUNC_3(VAR_0, "can only merge a single branch");
  VAR_14 = -1;
  goto done;
 }

 *VAR_6 = VAR_2;

 if ((VAR_14 = FUNC_7(VAR_7, VAR_8)) < 0)
  goto done;

 if ((VAR_14 = FUNC_5(&VAR_15, VAR_9, VAR_8)) < 0)
  goto done;

 if (VAR_15) {
  *VAR_6 |= VAR_1 | VAR_4;
  VAR_14 = 0;
  goto done;
 }

 if ((VAR_14 = FUNC_6(&VAR_12, &VAR_13, VAR_8, VAR_9, VAR_10, VAR_11)) < 0)
  goto done;


 if (VAR_12 && FUNC_4(
  FUNC_2(VAR_12), FUNC_2(VAR_10[0])))
  *VAR_6 |= VAR_5;


 else if (VAR_12 && FUNC_4(
  FUNC_2(VAR_12), FUNC_2(VAR_13)))
  *VAR_6 |= VAR_1 | VAR_3;


 else
  *VAR_6 |= VAR_3;

done:
 FUNC_1(VAR_12);
 FUNC_1(VAR_13);
 return VAR_14;
}
