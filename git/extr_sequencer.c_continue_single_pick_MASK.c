
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct repository*) ;
 int FUNC_4 (struct repository*) ;
 int FUNC_5 (char const**,int ) ;

__attribute__((used)) static int FUNC_6(struct repository *VAR_1)
{
 const char *VAR_2[] = { "commit", ((void*)0) };

 if (!FUNC_2(FUNC_3(VAR_1)) &&
     !FUNC_2(FUNC_4(VAR_1)))
  return FUNC_1(FUNC_0("no cherry-pick or revert in progress"));
 return FUNC_5(VAR_2, VAR_0);
}
