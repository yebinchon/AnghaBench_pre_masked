
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_backend {int packs; } ;
struct git_pack_file {int dummy; } ;
typedef int git_odb_backend ;


 scalar_t__ FUNC_0 (struct git_pack_file**,char const*) ;
 scalar_t__ FUNC_1 (int *,struct git_pack_file*) ;
 scalar_t__ FUNC_2 (struct pack_backend**,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(git_odb_backend **VAR_0, const char *VAR_1)
{
 struct pack_backend *VAR_2 = ((void*)0);
 struct git_pack_file *VAR_3 = ((void*)0);

 if (FUNC_2(&VAR_2, 1) < 0)
  return -1;

 if (FUNC_0(&VAR_3, VAR_1) < 0 ||
  FUNC_1(&VAR_2->packs, VAR_3) < 0)
 {
  FUNC_3((git_odb_backend *)VAR_2);
  return -1;
 }

 *VAR_0 = (git_odb_backend *)VAR_2;
 return 0;
}
