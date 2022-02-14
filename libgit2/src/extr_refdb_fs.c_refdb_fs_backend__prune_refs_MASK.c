
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int commonpath; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char,int ,char const*,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (char const*,int ,int) ;
 size_t FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(
 refdb_fs_backend *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 git_buf VAR_6 = VAR_0;
 git_buf VAR_7 = VAR_0;
 size_t VAR_8;

 FUNC_0(VAR_3 && VAR_4);

 if (FUNC_5(&VAR_6, VAR_4) < 0)
  goto cleanup;

 FUNC_9(&VAR_6);
 if ((VAR_8 = FUNC_8("refs/heads/", FUNC_1(&VAR_6))) == FUNC_10("refs/heads/") ||
  (VAR_8 = FUNC_8("refs/tags/", FUNC_1(&VAR_6))) == FUNC_10("refs/tags/") ||
  (VAR_8 = FUNC_8("refs/remotes/", FUNC_1(&VAR_6))) == FUNC_10("refs/remotes/")) {

  FUNC_6(&VAR_6, VAR_8);

  if (VAR_5) {
   if (FUNC_3(&VAR_7, '/', VAR_3->commonpath, VAR_5, FUNC_1(&VAR_6)) < 0)
    goto cleanup;
  } else {
   if (FUNC_4(&VAR_7, VAR_3->commonpath, FUNC_1(&VAR_6)) < 0)
    goto cleanup;
  }

  FUNC_7(VAR_4 + VAR_8, FUNC_1(&VAR_7), VAR_1 | VAR_2);
 }

cleanup:
 FUNC_2(&VAR_6);
 FUNC_2(&VAR_7);
}
