
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int **,char const*,size_t,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char const*,size_t*) ;
 int FUNC_6 (int*,char const*,size_t*) ;
 int FUNC_7 (int *,char const*,size_t*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int **,char const*,size_t,int *,char*) ;
 int FUNC_14 (int **,int *,char*) ;
 int FUNC_15 (int **,int *,int) ;
 int FUNC_16 (int **,int *,char*) ;
 int FUNC_17 (int **,int *,int *,int ) ;
 int FUNC_18 (int **,int *,int) ;

int FUNC_19(
 git_object **VAR_4,
 git_reference **VAR_5,
 size_t *VAR_6,
 git_repository *VAR_7,
 const char *VAR_8)
{
 size_t VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = -1, VAR_12;
 git_buf VAR_13 = VAR_0;

 git_reference *VAR_14 = ((void*)0);
 git_object *VAR_15 = ((void*)0);

 bool VAR_16 = 1;

 FUNC_1(VAR_4 && VAR_5 && VAR_7 && VAR_8);

 *VAR_4 = ((void*)0);
 *VAR_5 = ((void*)0);

 while (VAR_8[VAR_9]) {
  switch (VAR_8[VAR_9]) {
  case '^':
   VAR_16 = 0;

   if ((VAR_11 = FUNC_3(&VAR_15, &VAR_14, VAR_8, VAR_10, VAR_7, 0)) < 0)
    goto cleanup;

   if (VAR_8[VAR_9+1] == '{') {
    git_object *VAR_17 = ((void*)0);

    if ((VAR_11 = FUNC_5(&VAR_13, VAR_8, &VAR_9)) < 0)
     goto cleanup;

    if ((VAR_11 = FUNC_14(&VAR_17, VAR_15, FUNC_8(&VAR_13))) < 0)
     goto cleanup;

    FUNC_11(VAR_15);
    VAR_15 = VAR_17;
   } else {
    git_object *VAR_18 = ((void*)0);

    if ((VAR_11 = FUNC_6(&VAR_12, VAR_8, &VAR_9)) < 0)
     goto cleanup;

    if ((VAR_11 = FUNC_15(&VAR_18, VAR_15, VAR_12)) < 0)
     goto cleanup;

    FUNC_11(VAR_15);
    VAR_15 = VAR_18;
   }
   break;

  case '~':
  {
   git_object *VAR_19 = ((void*)0);

   VAR_16 = 0;

   if ((VAR_11 = FUNC_6(&VAR_12, VAR_8, &VAR_9)) < 0)
    goto cleanup;

   if ((VAR_11 = FUNC_3(&VAR_15, &VAR_14, VAR_8, VAR_10, VAR_7, 0)) < 0)
    goto cleanup;

   if ((VAR_11 = FUNC_18(&VAR_19, VAR_15, VAR_12)) < 0)
    goto cleanup;

   FUNC_11(VAR_15);
   VAR_15 = VAR_19;
   break;
  }

  case ':':
  {
   git_object *VAR_20 = ((void*)0);

   VAR_16 = 0;

   if ((VAR_11 = FUNC_7(&VAR_13, VAR_8, &VAR_9)) < 0)
    goto cleanup;

   if (FUNC_0(VAR_15, VAR_14, VAR_10)) {
    if ((VAR_11 = FUNC_3(&VAR_15, &VAR_14, VAR_8, VAR_10, VAR_7, 1)) < 0)
     goto cleanup;

    if ((VAR_11 = FUNC_16(&VAR_20, VAR_15, FUNC_8(&VAR_13))) < 0)
     goto cleanup;
   } else {
    if (*FUNC_8(&VAR_13) == '/') {
     if ((VAR_11 = FUNC_17(&VAR_20, VAR_7, ((void*)0), FUNC_8(&VAR_13) + 1)) < 0)
      goto cleanup;
    } else {





     FUNC_10(VAR_3, "unimplemented");
     VAR_11 = VAR_2;
     goto cleanup;
    }
   }

   FUNC_11(VAR_15);
   VAR_15 = VAR_20;
   break;
  }

  case '@':
   if (VAR_8[VAR_9+1] == '{') {
    git_object *VAR_21 = ((void*)0);

    if ((VAR_11 = FUNC_5(&VAR_13, VAR_8, &VAR_9)) < 0)
     goto cleanup;

    if ((VAR_11 = FUNC_2(VAR_15)) < 0)
     goto cleanup;

    if ((VAR_11 = FUNC_13(&VAR_21, &VAR_14, VAR_8, VAR_10, VAR_7, FUNC_8(&VAR_13))) < 0)
     goto cleanup;

    if (VAR_21 != ((void*)0))
     VAR_15 = VAR_21;
    break;
   }


  default:
   if ((VAR_11 = FUNC_4(VAR_15, VAR_14)) < 0)
    goto cleanup;

   VAR_9++;
   VAR_10++;
  }
 }

 if ((VAR_11 = FUNC_3(&VAR_15, &VAR_14, VAR_8, VAR_10, VAR_7, 0)) < 0)
  goto cleanup;

 if (!VAR_16) {
  FUNC_12(VAR_14);
  VAR_14 = ((void*)0);
 }

 *VAR_4 = VAR_15;
 *VAR_5 = VAR_14;
 *VAR_6 = VAR_10;
 VAR_11 = 0;

cleanup:
 if (VAR_11) {
  if (VAR_11 == VAR_1)
   FUNC_10(VAR_3,
    "failed to parse revision specifier - Invalid pattern '%s'", VAR_8);

  FUNC_11(VAR_15);
  FUNC_12(VAR_14);
 }

 FUNC_9(&VAR_13);
 return VAR_11;
}
