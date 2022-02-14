
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_filebuf ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int FUNC_7(git_repository *VAR_5)
{
 git_filebuf VAR_6 = VAR_2;
 git_buf VAR_7 = VAR_0;
 int VAR_8 = 0;

 FUNC_0(VAR_5);

 if ((VAR_8 = FUNC_2(&VAR_7, VAR_5->gitdir, VAR_4)) < 0 ||
  (VAR_8 = FUNC_5(&VAR_6, VAR_7.ptr, VAR_1, VAR_3)) < 0)
  goto cleanup;

 if ((VAR_8 = FUNC_6(&VAR_6, "no-ff", 5)) < 0)
  goto cleanup;

 VAR_8 = FUNC_4(&VAR_6);

cleanup:
 if (VAR_8 < 0)
  FUNC_3(&VAR_6);

 FUNC_1(&VAR_7);

 return VAR_8;
}
