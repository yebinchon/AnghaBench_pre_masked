
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_data {char const* old_remote_name; char const* new_remote_name; int config; int * member_0; } ;
typedef int git_repository ;


 int FUNC_0 (int ,char*,int ,struct update_data*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 int VAR_4;
 struct update_data VAR_5 = { ((void*)0) };

 if ((VAR_4 = FUNC_1(&VAR_5.config, VAR_1)) < 0)
  return VAR_4;

 VAR_5.old_remote_name = VAR_2;
 VAR_5.new_remote_name = VAR_3;

 return FUNC_0(
  VAR_5.config, "branch\\..+\\.remote", VAR_0, &VAR_5);
}
