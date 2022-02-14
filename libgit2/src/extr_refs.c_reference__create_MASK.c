
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;
typedef int git_refname_t ;
typedef int git_reference ;
typedef int git_refdb ;
typedef int git_oid ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int *,int *,int,int const*,char const*,int const*,char const*) ;
 int * FUNC_5 (int ,int const*,int *) ;
 int * FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int ,int *,char const*,int) ;

__attribute__((used)) static int FUNC_10(
 git_reference **VAR_3,
 git_repository *VAR_4,
 const char *VAR_5,
 const git_oid *VAR_6,
 const char *VAR_7,
 int VAR_8,
 const git_signature *VAR_9,
 const char *VAR_10,
 const git_oid *VAR_11,
 const char *VAR_12)
{
 git_refname_t VAR_13;
 git_refdb *VAR_14;
 git_reference *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 FUNC_1(VAR_4 && VAR_5);
 FUNC_1(VAR_7 || VAR_9);

 if (VAR_3)
  *VAR_3 = ((void*)0);

 VAR_16 = FUNC_9(VAR_13, VAR_4, VAR_5, 1);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_8(&VAR_14, VAR_4);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_6 != ((void*)0)) {
  FUNC_1(VAR_7 == ((void*)0));

  if (!FUNC_3(VAR_4, VAR_6, VAR_1)) {
   FUNC_2(VAR_0,
    "target OID for the reference doesn't exist on the repository");
   return -1;
  }

  VAR_15 = FUNC_5(VAR_13, VAR_6, ((void*)0));
 } else {
  git_refname_t VAR_17;

  VAR_16 = FUNC_9(VAR_17, VAR_4,
   VAR_7, VAR_2);

  if (VAR_16 < 0)
   return VAR_16;

  VAR_15 = FUNC_6(VAR_13, VAR_17);
 }

 FUNC_0(VAR_15);

 if ((VAR_16 = FUNC_4(VAR_14, VAR_15, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12)) < 0) {
  FUNC_7(VAR_15);
  return VAR_16;
 }

 if (VAR_3 == ((void*)0))
  FUNC_7(VAR_15);
 else
  *VAR_3 = VAR_15;

 return 0;
}
