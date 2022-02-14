
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t count; char** strings; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_refspec ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int **,int *,char*) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12(git_buf *VAR_5, git_repository *VAR_6, const char *VAR_7)
{
 git_strarray VAR_8 = {0};
 size_t VAR_9;
 git_remote *VAR_10;
 const git_refspec *VAR_11;
 int VAR_12 = 0;
 char *VAR_13 = ((void*)0);

 FUNC_0(VAR_5 && VAR_6 && VAR_7);

 FUNC_4(VAR_5);


 if (!FUNC_6(VAR_7)) {
  FUNC_5(VAR_3, "reference '%s' is not a remote branch.",
   VAR_7);
  VAR_12 = VAR_2;
  goto cleanup;
 }


 if ((VAR_12 = FUNC_9(&VAR_8, VAR_6)) < 0)
  goto cleanup;


 for (VAR_9 = 0; VAR_9 < VAR_8.count; VAR_9++) {
  if ((VAR_12 = FUNC_10(&VAR_10, VAR_6, VAR_8.strings[VAR_9])) < 0)
   continue;

  VAR_11 = FUNC_7(VAR_10, VAR_7);
  if (VAR_11) {




   if (!VAR_13) {
    VAR_13 = VAR_8.strings[VAR_9];
   } else {
    FUNC_8(VAR_10);

    FUNC_5(VAR_4,
     "reference '%s' is ambiguous", VAR_7);
    VAR_12 = VAR_0;
    goto cleanup;
   }
  }

  FUNC_8(VAR_10);
 }

 if (VAR_13) {
  FUNC_1(VAR_5);
  VAR_12 = FUNC_3(VAR_5, VAR_13);
 } else {
  FUNC_5(VAR_4,
   "could not determine remote for '%s'", VAR_7);
  VAR_12 = VAR_1;
 }

cleanup:
 if (VAR_12 < 0)
  FUNC_2(VAR_5);

 FUNC_11(&VAR_8);
 return VAR_12;
}
