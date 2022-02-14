
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int ) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, git_buf *VAR_2)
{
 const char *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_1);

 if (FUNC_2(VAR_3, ".git") == 0)
  return 0;

 if (FUNC_5(VAR_3))
  FUNC_1(FUNC_4(VAR_3, ((void*)0), VAR_0));
 else
  FUNC_1(FUNC_6(FUNC_3(VAR_2)));

 return 0;
}
