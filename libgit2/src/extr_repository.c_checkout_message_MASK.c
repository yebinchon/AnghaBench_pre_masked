
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 char const* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 char const* FUNC_6 (char const*) ;
 char const* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(git_buf *VAR_1, git_reference *VAR_2, const char *VAR_3)
{
 FUNC_1(VAR_1, "checkout: moving from ");

 if (FUNC_9(VAR_2) == VAR_0)
  FUNC_1(VAR_1, FUNC_6(FUNC_7(VAR_2)));
 else
  FUNC_1(VAR_1, FUNC_2(FUNC_8(VAR_2)));

 FUNC_1(VAR_1, " to ");

 if (FUNC_3(VAR_3) ||
  FUNC_5(VAR_3) ||
  FUNC_4(VAR_3))
  FUNC_1(VAR_1, FUNC_6(VAR_3));
 else
  FUNC_1(VAR_1, VAR_3);

 if (FUNC_0(VAR_1))
  return -1;

 return 0;
}
