
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int path ;
typedef scalar_t__ git_win32_path ;
typedef int git_buf ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const,int const*,int ,int ,int *) ;
 int FUNC_2 (int ,char*,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_7(
 git_buf *VAR_3, const HKEY VAR_4, const wchar_t *VAR_5, const wchar_t *VAR_6)
{
 HKEY VAR_7;
 int VAR_8 = VAR_0;

 FUNC_3(VAR_3);

 if (!FUNC_1(VAR_4, VAR_5, 0, VAR_1, &VAR_7)) {
  DWORD VAR_9, VAR_10;
  git_win32_path VAR_11;



  VAR_10 = (DWORD)(sizeof(VAR_11) - FUNC_5(VAR_6) * sizeof(wchar_t));


  if (!FUNC_2(VAR_7, L"InstallLocation", ((void*)0), &VAR_9, (LPBYTE)VAR_11, &VAR_10) &&
   VAR_9 == VAR_2) {


   FUNC_4(VAR_11, VAR_6);



   if (!FUNC_6(VAR_3, VAR_11))
    VAR_8 = 0;
  }

  FUNC_0(VAR_7);
 }

 return VAR_8;
}
