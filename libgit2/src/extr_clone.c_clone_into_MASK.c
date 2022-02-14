
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_remote ;
struct TYPE_6__ {int download_tags; scalar_t__ update_fetchhead; } ;
typedef TYPE_1__ git_fetch_options ;
typedef int git_checkout_options ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int const*,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__ const*,int) ;

__attribute__((used)) static int FUNC_12(git_repository *VAR_3, git_remote *VAR_4, const git_fetch_options *VAR_5, const git_checkout_options *VAR_6, const char *VAR_7)
{
 int VAR_8;
 git_buf VAR_9 = VAR_0;
 git_fetch_options VAR_10;
 git_remote *VAR_11;

 FUNC_0(VAR_3 && VAR_4);

 if (!FUNC_10(VAR_3)) {
  FUNC_5(VAR_1, "the repository is not empty");
  return -1;
 }

 if ((VAR_8 = FUNC_6(&VAR_11, VAR_4)) < 0)
  return VAR_8;

 FUNC_11(&VAR_10, VAR_5, sizeof(git_fetch_options));
 VAR_10.update_fetchhead = 0;
 VAR_10.download_tags = VAR_2;
 FUNC_4(&VAR_9, "clone: from %s", FUNC_9(VAR_11));

 if ((VAR_8 = FUNC_7(VAR_11, ((void*)0), &VAR_10, FUNC_2(&VAR_9))) != 0)
  goto cleanup;

 VAR_8 = FUNC_1(VAR_3, VAR_11, VAR_6, VAR_7, FUNC_2(&VAR_9));

cleanup:
 FUNC_8(VAR_11);
 FUNC_3(&VAR_9);

 return VAR_8;
}
