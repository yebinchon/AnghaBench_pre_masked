
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_oid ;
typedef int git_filebuf ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,char*,int,char*) ;
 int FUNC_6 (char*,int const*) ;

int FUNC_7(git_repository *VAR_6, const git_oid *VAR_7)
{
 git_filebuf VAR_8 = VAR_2;
 git_buf VAR_9 = VAR_0;
 char VAR_10[VAR_4];
 int VAR_11 = 0;

 FUNC_6(VAR_10, VAR_7);

 if ((VAR_11 = FUNC_1(&VAR_9, VAR_6->gitdir, VAR_5)) == 0 &&
  (VAR_11 = FUNC_4(&VAR_8, VAR_9.ptr, VAR_1, VAR_3)) == 0 &&
  (VAR_11 = FUNC_5(&VAR_8, "%.*s\n", VAR_4, VAR_10)) == 0)
  VAR_11 = FUNC_3(&VAR_8);

 if (VAR_11 < 0)
  FUNC_2(&VAR_8);

 FUNC_0(&VAR_9);

 return VAR_11;
}
