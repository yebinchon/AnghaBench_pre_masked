
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct pack_backend {int packs; int * pack_folder; } ;
typedef int git_odb_backend ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (int *,int ,int ,struct pack_backend*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct stat*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(git_odb_backend *VAR_2)
{
 int VAR_3;
 struct stat VAR_4;
 git_buf VAR_5 = VAR_0;
 struct pack_backend *VAR_6 = (struct pack_backend *)VAR_2;

 if (VAR_6->pack_folder == ((void*)0))
  return 0;

 if (FUNC_6(VAR_6->pack_folder, &VAR_4) < 0 || !FUNC_0(VAR_4.st_mode))
  return FUNC_3("failed to refresh packfiles", ((void*)0), 0);

 FUNC_2(&VAR_5, VAR_6->pack_folder);


 VAR_3 = FUNC_4(&VAR_5, 0, VAR_1, VAR_6);

 FUNC_1(&VAR_5);
 FUNC_5(&VAR_6->packs);

 return VAR_3;
}
