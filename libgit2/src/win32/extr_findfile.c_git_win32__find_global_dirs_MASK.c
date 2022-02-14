
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int git_buf ;


 int FUNC_0 (int *,char const**) ;

int FUNC_1(git_buf *VAR_0)
{
 static const wchar_t *VAR_1[4] = {
  L"%HOME%\\",
  L"%HOMEDRIVE%%HOMEPATH%\\",
  L"%USERPROFILE%\\",
  ((void*)0),
 };

 return FUNC_0(VAR_0, VAR_1);
}
