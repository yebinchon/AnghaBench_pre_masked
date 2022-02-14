
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_filebuf ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_6(
 git_repository *VAR_5,
 const char *VAR_6,
 const char *VAR_7)
{
 git_filebuf VAR_8 = VAR_2;
 git_buf VAR_9 = VAR_0;
 int VAR_10 = 0;

 if ((VAR_10 = FUNC_1(&VAR_9, VAR_5->gitdir, VAR_3)) < 0 ||
  (VAR_10 = FUNC_4(&VAR_8, VAR_9.ptr, VAR_1, VAR_4)) < 0 ||
  (VAR_10 = FUNC_5(&VAR_8, "Revert \"%s\"\n\nThis reverts commit %s.\n",
  VAR_7, VAR_6)) < 0)
  goto cleanup;

 VAR_10 = FUNC_3(&VAR_8);

cleanup:
 if (VAR_10 < 0)
  FUNC_2(&VAR_8);

 FUNC_0(&VAR_9);

 return VAR_10;
}
