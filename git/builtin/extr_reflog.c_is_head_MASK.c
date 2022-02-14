
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;


 int FUNC_1 (char const*,int *,int *,char const**) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0)
{
 switch (FUNC_2(VAR_0)) {
 case 128:
 case 129:
  if (FUNC_1(VAR_0, ((void*)0), ((void*)0), &VAR_0))
   FUNC_0("not a worktree ref: %s", VAR_0);
  break;
 default:
  break;
 }
 return !FUNC_3(VAR_0, "HEAD");
}
