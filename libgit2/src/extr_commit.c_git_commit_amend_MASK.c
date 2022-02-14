
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_commit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int *,int const*,int const*,char const*,char const*,int *,int ,void*,int) ;
 int * FUNC_3 (int const*) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 char* FUNC_6 (int const*) ;
 char* FUNC_7 (int const*) ;
 int * FUNC_8 (int const*) ;
 int FUNC_9 (int const**,int const*) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *,int *,int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *,char const*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (int const*) ;
 int * FUNC_19 (int const*) ;

int FUNC_20(
 git_oid *VAR_2,
 const git_commit *VAR_3,
 const char *VAR_4,
 const git_signature *VAR_5,
 const git_signature *VAR_6,
 const char *VAR_7,
 const char *VAR_8,
 const git_tree *VAR_9)
{
 git_repository *VAR_10;
 git_oid VAR_11;
 git_reference *VAR_12;
 int VAR_13;

 FUNC_1(VAR_2 && VAR_3);

 VAR_10 = FUNC_8(VAR_3);

 if (!VAR_5)
  VAR_5 = FUNC_3(VAR_3);
 if (!VAR_6)
  VAR_6 = FUNC_4(VAR_3);
 if (!VAR_7)
  VAR_7 = FUNC_7(VAR_3);
 if (!VAR_8)
  VAR_8 = FUNC_6(VAR_3);

 if (!VAR_9) {
  git_tree *VAR_14;
  FUNC_0( FUNC_9(&VAR_14, VAR_3) );
  FUNC_12(&VAR_11, FUNC_18(VAR_14));
  FUNC_17(VAR_14);
 } else {
  FUNC_1(FUNC_19(VAR_9) == VAR_10);
  FUNC_12(&VAR_11, FUNC_18(VAR_9));
 }

 if (VAR_4) {
  if ((VAR_13 = FUNC_15(&VAR_12, VAR_10, VAR_4, 5)) < 0)
   return VAR_13;

  if (FUNC_11(FUNC_5(VAR_3), FUNC_16(VAR_12))) {
   FUNC_14(VAR_12);
   FUNC_10(VAR_0, "commit to amend is not the tip of the given branch");
   return -1;
  }
 }

 VAR_13 = FUNC_2(
  VAR_2, VAR_10, ((void*)0), VAR_5, VAR_6, VAR_7, VAR_8,
  &VAR_11, VAR_1, (void *)VAR_3, 0);

 if (!VAR_13 && VAR_4) {
  VAR_13 = FUNC_13(
   VAR_10, VAR_12, ((void*)0), VAR_2, "commit");
  FUNC_14(VAR_12);
 }

 return VAR_13;
}
