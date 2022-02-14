
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int git_win32_path ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(
 git_win32_path VAR_8,
 const wchar_t *VAR_9)
{
 HANDLE VAR_10;
 DWORD VAR_11;




 VAR_10 = FUNC_1(VAR_9, VAR_4, VAR_3 | VAR_2,
  ((void*)0), VAR_7, VAR_0, ((void*)0));

 if (VAR_6 == VAR_10)
  return -1;


 VAR_11 = FUNC_2(VAR_10, VAR_8, VAR_5, VAR_1);
 FUNC_0(VAR_10);

 if (!VAR_11 || VAR_11 >= VAR_5)
  return -1;


 return (int)FUNC_3(VAR_8, VAR_11);
}
