
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; int workdir_path; } ;
typedef TYPE_1__ git_repository_init_options ;
typedef int git_repository ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char const*) ;
 int FUNC_2 (int **,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
 git_repository **VAR_7,
 git_repository *VAR_8,
 const char *VAR_9)
{
 int VAR_10 = 0;
 git_buf VAR_11 = VAR_0, VAR_12 = VAR_0;
 git_repository_init_options VAR_13 = VAR_4;
 git_repository *VAR_14 = ((void*)0);

 VAR_13.flags =
  VAR_1 |
  VAR_3 |
  VAR_2 |
  VAR_5;


 VAR_10 = FUNC_1(&VAR_11, FUNC_4(VAR_8), VAR_9);
 if (VAR_10 < 0)
  goto cleanup;

 VAR_13.workdir_path = VAR_11.ptr;






 VAR_10 = FUNC_3(&VAR_12, VAR_8, VAR_6);
 if (VAR_10 < 0)
  goto cleanup;
 VAR_10 = FUNC_1(&VAR_12, VAR_12.ptr, VAR_9);
 if (VAR_10 < 0)
  goto cleanup;

 VAR_10 = FUNC_2(&VAR_14, VAR_12.ptr, &VAR_13);

cleanup:
 FUNC_0(&VAR_11);
 FUNC_0(&VAR_12);

 *VAR_7 = VAR_14;

 return VAR_10;
}
