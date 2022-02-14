
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loose_backend ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(
 git_oid *VAR_2, git_odb_backend *VAR_3, const git_oid *VAR_4, size_t VAR_5)
{
 git_buf VAR_6 = VAR_0;
 int VAR_7;

 FUNC_0(VAR_3 && VAR_2 && VAR_4 && VAR_5 >= VAR_1);

 VAR_7 = FUNC_2(
  &VAR_6, VAR_2, (loose_backend *)VAR_3, VAR_4, VAR_5);

 FUNC_1(&VAR_6);

 return VAR_7;
}
