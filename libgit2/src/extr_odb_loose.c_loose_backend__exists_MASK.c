
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loose_backend ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int const*) ;

__attribute__((used)) static int FUNC_3(git_odb_backend *VAR_1, const git_oid *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 int VAR_4;

 FUNC_0(VAR_1 && VAR_2);

 VAR_4 = FUNC_2(&VAR_3, (loose_backend *)VAR_1, VAR_2);

 FUNC_1(&VAR_3);

 return !VAR_4;
}
