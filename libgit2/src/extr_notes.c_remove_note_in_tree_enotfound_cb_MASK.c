
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_2(
 git_tree **VAR_1,
 git_repository *VAR_2,
 git_tree *VAR_3,
 git_oid *VAR_4,
 const char *VAR_5,
 int VAR_6,
 int VAR_7)
{
 FUNC_0(VAR_1);
 FUNC_0(*VAR_2);
 FUNC_0(*VAR_3);
 FUNC_0(*VAR_4);
 FUNC_0(VAR_6);

 FUNC_1(VAR_0, "object '%s' has no note", VAR_5);
 return VAR_7;
}
