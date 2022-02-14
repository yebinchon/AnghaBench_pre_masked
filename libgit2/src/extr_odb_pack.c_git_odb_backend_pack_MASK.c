
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_backend {int pack_folder; } ;
typedef int git_odb_backend ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct pack_backend**,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(git_odb_backend **VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 struct pack_backend *VAR_4 = ((void*)0);
 git_buf VAR_5 = VAR_0;

 if (FUNC_5(&VAR_4, 8) < 0)
  return -1;

 if (!(VAR_3 = FUNC_3(&VAR_5, VAR_2, "pack")) &&
  FUNC_4(FUNC_0(&VAR_5)))
 {
  VAR_4->pack_folder = FUNC_1(&VAR_5);
  VAR_3 = FUNC_7((git_odb_backend *)VAR_4);
 }

 if (VAR_3 < 0) {
  FUNC_6((git_odb_backend *)VAR_4);
  VAR_4 = ((void*)0);
 }

 *VAR_1 = (git_odb_backend *)VAR_4;

 FUNC_2(&VAR_5);

 return VAR_3;
}
