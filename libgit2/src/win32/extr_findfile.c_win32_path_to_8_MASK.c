
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int git_win32_utf8_path ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int const*) ;

__attribute__((used)) static int FUNC_4(git_buf *VAR_1, const wchar_t *VAR_2)
{
 git_win32_utf8_path VAR_3;

 if (FUNC_3(VAR_3, VAR_2) < 0) {
  FUNC_1(VAR_0, "unable to convert path to UTF-8");
  return -1;
 }


 FUNC_2(VAR_3);

 return FUNC_0(VAR_1, VAR_3);
}
