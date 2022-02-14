
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int *,int *,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int **,int *,int *,int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(
 git_tree **VAR_3,
 git_repository *VAR_4,
 git_tree *VAR_5,
 git_oid *VAR_6,
 const char *VAR_7,
 int VAR_8,
 int (*VAR_9)(
  git_tree **VAR_10,
  git_repository *VAR_11,
  git_tree *VAR_12,
  git_oid *VAR_13,
  const char *VAR_14,
  int VAR_15,
  int VAR_16),
 int (*VAR_17)(
  git_tree **VAR_18,
  git_repository *VAR_19,
  git_tree *VAR_20,
  git_oid *VAR_21,
  const char *VAR_22,
  int VAR_23,
  int VAR_24))
{
 int VAR_25;
 git_tree *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
 char VAR_28[3];

 VAR_25 = FUNC_0(
  &VAR_26, VAR_4, VAR_5, VAR_7, VAR_8);

 if (VAR_25 == VAR_0) {
  VAR_25 = VAR_9(
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_25);
  goto cleanup;
 }

 if (VAR_25 == VAR_1) {
  VAR_25 = VAR_17(
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_25);
  goto cleanup;
 }

 if (VAR_25 < 0)
  goto cleanup;


 VAR_25 = FUNC_5(
  &VAR_27, VAR_4, VAR_26, VAR_6, VAR_7,
  VAR_8 + 2, VAR_9, VAR_17);

 if (VAR_25 < 0)
  goto cleanup;

 FUNC_3(VAR_28, VAR_7 + VAR_8, 2);
 VAR_28[2] = '\0';

 VAR_25 = FUNC_4(VAR_3, VAR_4, VAR_5, FUNC_2(VAR_27),
      VAR_28, VAR_2);


cleanup:
 FUNC_1(VAR_27);
 FUNC_1(VAR_26);
 return VAR_25;
}
