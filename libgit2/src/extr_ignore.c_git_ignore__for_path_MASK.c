
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_20__ {int ptr; } ;
struct TYPE_17__ {int ign_global; TYPE_7__ dir; int ign_internal; int dir_root; int ignore_case; int * repo; } ;
typedef TYPE_1__ git_ignores ;
struct TYPE_18__ {char* ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_19__ {int * cfg_excl_file; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_7__*,char const*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,char const*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_7__*,char const*,int ,TYPE_1__*) ;
 int FUNC_12 (int *,int *,int ) ;
 TYPE_6__* FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*,int *,int ) ;
 char* FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*,int ,int) ;
 int FUNC_17 (TYPE_1__*,int *,char*,int *) ;
 int VAR_5 ;
 int FUNC_18 (char const*) ;

int FUNC_19(
 git_repository *VAR_6,
 const char *VAR_7,
 git_ignores *VAR_8)
{
 int VAR_9 = 0;
 const char *VAR_10 = FUNC_15(VAR_6);
 git_buf VAR_11 = VAR_0;

 FUNC_0(VAR_6 && VAR_8 && VAR_7);

 FUNC_16(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->repo = VAR_6;


 if ((VAR_9 = FUNC_12(
   &VAR_8->ignore_case, VAR_6, VAR_1)) < 0)
  goto cleanup;

 if ((VAR_9 = FUNC_3(VAR_6)) < 0)
  goto cleanup;


 if (VAR_10 && FUNC_9(VAR_7) < 0) {
  git_buf VAR_12 = VAR_0;

  if ((VAR_9 = FUNC_7(&VAR_12, VAR_7)) < 0 ||
      (VAR_9 = FUNC_8(&VAR_12, 0)) < 0 ||
      (VAR_9 = FUNC_10(&VAR_12)) < 0 ||
      (VAR_9 = FUNC_5(&VAR_8->dir, VAR_10, VAR_12.ptr)) < 0)
  {;}
  FUNC_4(&VAR_12);
 } else {
  VAR_9 = FUNC_5(&VAR_8->dir, VAR_7, "");
 }
 if (VAR_9 < 0)
  goto cleanup;

 if (VAR_10 && !FUNC_2(VAR_8->dir.ptr, VAR_10))
  VAR_8->dir_root = FUNC_18(VAR_10);


 if ((VAR_9 = FUNC_1(&VAR_8->ign_internal, VAR_6)) < 0)
  goto cleanup;


 if (VAR_10 != ((void*)0)) {
  VAR_9 = FUNC_11(
   &VAR_8->dir, VAR_10, VAR_5, VAR_8);
  if (VAR_9 < 0)
   goto cleanup;
 }


 if ((VAR_9 = FUNC_14(&VAR_11, VAR_6, VAR_4)) < 0 ||
  (VAR_9 = FUNC_17(VAR_8, &VAR_8->ign_global, VAR_11.ptr, VAR_3)) < 0) {
  if (VAR_9 != VAR_2)
   goto cleanup;
  VAR_9 = 0;
 }


 if (FUNC_13(VAR_6)->cfg_excl_file != ((void*)0))
  VAR_9 = FUNC_17(
   VAR_8, &VAR_8->ign_global, ((void*)0),
   FUNC_13(VAR_6)->cfg_excl_file);

cleanup:
 FUNC_4(&VAR_11);
 if (VAR_9 < 0)
  FUNC_6(VAR_8);

 return VAR_9;
}
