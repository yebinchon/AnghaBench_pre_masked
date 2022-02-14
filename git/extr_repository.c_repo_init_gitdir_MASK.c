
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_gitdir_args {int * member_0; } ;
struct repository {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct repository*,char const*,struct set_gitdir_args*) ;
 char* FUNC_3 (char*,int*) ;

__attribute__((used)) static int FUNC_4(struct repository *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 char *VAR_4 = ((void*)0);
 const char *VAR_5;
 struct set_gitdir_args VAR_6 = { ((void*)0) };

 VAR_4 = FUNC_1(VAR_1, 0);
 if (!VAR_4) {
  VAR_2 = -1;
  goto out;
 }


 VAR_5 = FUNC_3(VAR_4, &VAR_3);
 if (!VAR_5) {
  VAR_2 = -1;
  goto out;
 }

 FUNC_2(VAR_0, VAR_5, &VAR_6);

out:
 FUNC_0(VAR_4);
 return VAR_2;
}
