
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_odb ;
typedef int git_index ;
struct TYPE_7__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (int **,char const*,unsigned int,char const*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,int *) ;

__attribute__((used)) static int FUNC_18(
 git_repository **VAR_8,
 const char *VAR_9)
{
 git_repository *VAR_10 = ((void*)0);
 git_index *VAR_11 = ((void*)0);
 git_odb *VAR_12 = ((void*)0);
 git_buf VAR_13 = VAR_0;
 git_buf VAR_14 = VAR_0;
 git_buf VAR_15 = VAR_0;
 git_buf VAR_16 = VAR_0;
 git_buf VAR_17 = VAR_0;
 git_buf VAR_18 = VAR_0;
 git_buf VAR_19 = VAR_0;
 git_buf VAR_20 = VAR_0;
 git_buf VAR_21 = VAR_0;
 const char *VAR_22 = ((void*)0);
 unsigned VAR_23 = 0;
 int VAR_24;

 if (!VAR_9) {
  VAR_24 = FUNC_0(&VAR_13, "GIT_DIR");
  if (VAR_24 == VAR_1) {
   FUNC_5();
   VAR_9 = ".";
  } else if (VAR_24 < 0)
   goto error;
  else {
   VAR_9 = FUNC_1(&VAR_13);
   VAR_23 |= VAR_7;
   VAR_23 |= VAR_6;
  }
 }

 VAR_24 = FUNC_0(&VAR_14, "GIT_CEILING_DIRECTORIES");
 if (VAR_24 == VAR_1)
  FUNC_5();
 else if (VAR_24 < 0)
  goto error;
 else
  VAR_22 = FUNC_1(&VAR_14);

 VAR_24 = FUNC_0(&VAR_15, "GIT_DISCOVERY_ACROSS_FILESYSTEM");
 if (VAR_24 == VAR_1)
  FUNC_5();
 else if (VAR_24 < 0)
  goto error;
 else {
  int VAR_25 = 0;
  VAR_24 = FUNC_4(&VAR_25, FUNC_1(&VAR_15));
  if (VAR_24 < 0)
   goto error;
  if (VAR_25)
   VAR_23 |= VAR_5;
 }

 VAR_24 = FUNC_0(&VAR_16, "GIT_INDEX_FILE");
 if (VAR_24 == VAR_1)
  FUNC_5();
 else if (VAR_24 < 0)
  goto error;
 else {
  VAR_24 = FUNC_8(&VAR_11, FUNC_1(&VAR_16));
  if (VAR_24 < 0)
   goto error;
 }

 VAR_24 = FUNC_0(&VAR_17, "GIT_NAMESPACE");
 if (VAR_24 == VAR_1)
  FUNC_5();
 else if (VAR_24 < 0)
  goto error;

 VAR_24 = FUNC_0(&VAR_18, "GIT_OBJECT_DIRECTORY");
 if (VAR_24 == VAR_1)
  FUNC_5();
 else if (VAR_24 < 0)
  goto error;
 else {
  VAR_24 = FUNC_11(&VAR_12, FUNC_1(&VAR_18));
  if (VAR_24 < 0)
   goto error;
 }

 VAR_24 = FUNC_0(&VAR_20, "GIT_WORK_TREE");
 if (VAR_24 == VAR_1)
  FUNC_5();
 else if (VAR_24 < 0)
  goto error;
 else {
  FUNC_6(VAR_3, "GIT_WORK_TREE unimplemented");
  VAR_24 = VAR_2;
  goto error;
 }

 VAR_24 = FUNC_0(&VAR_20, "GIT_COMMON_DIR");
 if (VAR_24 == VAR_1)
  FUNC_5();
 else if (VAR_24 < 0)
  goto error;
 else {
  FUNC_6(VAR_3, "GIT_COMMON_DIR unimplemented");
  VAR_24 = VAR_2;
  goto error;
 }

 VAR_24 = FUNC_14(&VAR_10, VAR_9, VAR_23, VAR_22);
 if (VAR_24 < 0)
  goto error;

 if (VAR_12)
  FUNC_17(VAR_10, VAR_12);

 VAR_24 = FUNC_0(&VAR_19, "GIT_ALTERNATE_OBJECT_DIRECTORIES");
 if (VAR_24 == VAR_1) {
  FUNC_5();
  VAR_24 = 0;
 } else if (VAR_24 < 0)
  goto error;
        else {
  const char *VAR_26;
  char *VAR_27, *VAR_28;
  if (!VAR_12) {
   VAR_24 = FUNC_13(&VAR_12, VAR_10);
   if (VAR_24 < 0)
    goto error;
  }

  VAR_26 = FUNC_1(&VAR_19) + FUNC_3(&VAR_19);
  for (VAR_28 = VAR_27 = VAR_19.ptr; VAR_28 != VAR_26; VAR_27 = VAR_28+1) {
   for (VAR_28 = VAR_27; *VAR_28 && *VAR_28 != VAR_4; VAR_28++)
    ;
   if (*VAR_28)
    *VAR_28 = '\0';
   VAR_24 = FUNC_9(VAR_12, VAR_27);
   if (VAR_24 < 0)
    goto error;
  }
 }

 if (FUNC_3(&VAR_17)) {
  VAR_24 = FUNC_16(VAR_10, FUNC_1(&VAR_17));
  if (VAR_24 < 0)
   goto error;
 }

 FUNC_15(VAR_10, VAR_11);

 if (VAR_8) {
  *VAR_8 = VAR_10;
  goto success;
 }
error:
 FUNC_12(VAR_10);
success:
 FUNC_10(VAR_12);
 FUNC_7(VAR_11);
 FUNC_2(&VAR_21);
 FUNC_2(&VAR_20);
 FUNC_2(&VAR_19);
 FUNC_2(&VAR_18);
 FUNC_2(&VAR_17);
 FUNC_2(&VAR_16);
 FUNC_2(&VAR_15);
 FUNC_2(&VAR_14);
 FUNC_2(&VAR_13);
 return VAR_24;
}
