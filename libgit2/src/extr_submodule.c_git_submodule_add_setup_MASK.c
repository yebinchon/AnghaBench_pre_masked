
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_repository ;
typedef int git_config_backend ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char const*) ;
 int FUNC_5 (TYPE_1__*,char*,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char const*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int **,int *,char const*) ;
 int FUNC_18 (TYPE_1__*,int *,char const*) ;
 int FUNC_19 (int*,int *,char const*) ;
 int * FUNC_20 (int *,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_1__*,char*) ;
 int FUNC_23 (int **,int *,char const*,int ,int) ;

int FUNC_24(
 git_submodule **VAR_5,
 git_repository *VAR_6,
 const char *VAR_7,
 const char *VAR_8,
 int VAR_9)
{
 int VAR_10 = 0;
 git_config_backend *VAR_11 = ((void*)0);
 git_submodule *VAR_12 = ((void*)0);
 git_buf VAR_13 = VAR_2, VAR_14 = VAR_2;
 git_repository *VAR_15 = ((void*)0);
 bool VAR_16;

 FUNC_0(VAR_6 && VAR_7 && VAR_8);



 if (FUNC_17(((void*)0), VAR_6, VAR_8) < 0)
  FUNC_8();
 else {
  FUNC_9(VAR_4,
   "attempt to add submodule '%s' that already exists", VAR_8);
  return VAR_3;
 }



 if (FUNC_1(VAR_8, FUNC_14(VAR_6)) == 0)
  VAR_8 += FUNC_21(FUNC_14(VAR_6));

 if (FUNC_12(VAR_8) >= 0) {
  FUNC_9(VAR_4, "submodule path must be a relative path");
  VAR_10 = -1;
  goto cleanup;
 }

 if ((VAR_10 = FUNC_19(&VAR_16, VAR_6, VAR_8)) < 0)
  goto cleanup;

 if (VAR_16) {
  VAR_10 = VAR_3;
  goto cleanup;
 }



 if (!(VAR_11 = FUNC_20(VAR_6, VAR_1))) {
  FUNC_9(VAR_4,
   "adding submodules to a bare repository is not supported");
  return -1;
 }

 if ((VAR_10 = FUNC_5(&VAR_13, "submodule.%s.path", VAR_8)) < 0 ||
  (VAR_10 = FUNC_7(VAR_11, VAR_13.ptr, VAR_8)) < 0)
  goto cleanup;

 if ((VAR_10 = FUNC_22(&VAR_13, "url")) < 0 ||
  (VAR_10 = FUNC_7(VAR_11, VAR_13.ptr, VAR_7)) < 0)
  goto cleanup;

 FUNC_2(&VAR_13);



 VAR_10 = FUNC_4(&VAR_13, FUNC_14(VAR_6), VAR_8);
 if (VAR_10 < 0)
  goto cleanup;




 if (!(FUNC_11(VAR_13.ptr) &&
  FUNC_10(&VAR_13, VAR_0))) {


  if ((VAR_10 = FUNC_18(&VAR_14, VAR_6, VAR_7)) < 0)
   goto cleanup;

   if ((VAR_10 = FUNC_23(&VAR_15, VAR_6, VAR_8, VAR_14.ptr, VAR_9)) < 0)
   goto cleanup;
 }

 if ((VAR_10 = FUNC_17(&VAR_12, VAR_6, VAR_8)) < 0)
  goto cleanup;

 VAR_10 = FUNC_16(VAR_12, 0);

cleanup:
 if (VAR_10 && VAR_12) {
  FUNC_15(VAR_12);
  VAR_12 = ((void*)0);
 }
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_12;

 FUNC_6(VAR_11);
 FUNC_13(VAR_15);
 FUNC_3(&VAR_14);
 FUNC_3(&VAR_13);

 return VAR_10;
}
