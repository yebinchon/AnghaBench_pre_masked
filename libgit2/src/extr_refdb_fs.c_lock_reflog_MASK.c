
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * repo; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_repository ;
typedef int git_filebuf ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_7(git_filebuf *VAR_5, refdb_fs_backend *VAR_6, const char *VAR_7)
{
 git_repository *VAR_8;
 git_buf VAR_9 = VAR_0;
 int VAR_10;

 VAR_8 = VAR_6->repo;

 if (!FUNC_5(VAR_6->repo, VAR_7, 0, VAR_3)) {
  FUNC_2(VAR_2, "invalid reference name '%s'", VAR_7);
  return VAR_1;
 }

 if (FUNC_6(&VAR_9, VAR_8, VAR_7) < 0)
  return -1;

 if (!FUNC_4(FUNC_0(&VAR_9))) {
  FUNC_2(VAR_2,
   "log file for reference '%s' doesn't exist", VAR_7);
  VAR_10 = -1;
  goto cleanup;
 }

 VAR_10 = FUNC_3(VAR_5, FUNC_0(&VAR_9), 0, VAR_4);

cleanup:
 FUNC_1(&VAR_9);

 return VAR_10;
}
