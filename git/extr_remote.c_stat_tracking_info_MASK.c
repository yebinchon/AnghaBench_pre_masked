
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int refname; } ;
typedef enum ahead_behind_flags { ____Placeholder_ahead_behind_flags } ahead_behind_flags ;


 char* FUNC_0 (struct branch*,int *) ;
 char* FUNC_1 (struct branch*,int *) ;
 int FUNC_2 (int ,char const*,int*,int*,int) ;

int FUNC_3(struct branch *VAR_0, int *VAR_1, int *VAR_2,
         const char **VAR_3, int VAR_4,
         enum ahead_behind_flags VAR_5)
{
 const char *VAR_6;


 VAR_6 = VAR_4 ? FUNC_0(VAR_0, ((void*)0)) :
  FUNC_1(VAR_0, ((void*)0));
 if (VAR_3)
  *VAR_3 = VAR_6;
 if (!VAR_6)
  return -1;

 return FUNC_2(VAR_0->refname, VAR_6, VAR_1, VAR_2, VAR_5);
}
