
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ,int *,scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int const*,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int const*,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (intptr_t,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static void FUNC_11(const wchar_t *VAR_7, DWORD VAR_8, int VAR_9,
          DWORD VAR_10, DWORD VAR_11)
{
 DWORD VAR_12 = VAR_9 ? VAR_2 : VAR_3;
 wchar_t VAR_13[VAR_1];
 DWORD VAR_14 = FUNC_0(VAR_13);
 HANDLE VAR_15;
 DWORD VAR_16 = FUNC_3(VAR_7, VAR_13, VAR_14);

 if (!VAR_16 || VAR_16 >= VAR_14)
  return;


 FUNC_5(VAR_7, ((void*)0));
 if (!FUNC_10(VAR_13, L"off")) {
  FUNC_8(VAR_9);
  VAR_15 = FUNC_4(VAR_8);
  if (VAR_15 != VAR_0)
   FUNC_1(VAR_15);
  return;
 }
 if (VAR_8 == VAR_5 && !FUNC_10(VAR_13, L"2>&1")) {
  VAR_15 = FUNC_4(VAR_6);
  if (VAR_15 == VAR_0) {
   FUNC_8(VAR_9);
   VAR_15 = FUNC_4(VAR_8);
   if (VAR_15 != VAR_0)
    FUNC_1(VAR_15);
  } else {
   int VAR_17 = FUNC_7((intptr_t)VAR_15, VAR_4);
   FUNC_6(VAR_8, VAR_15);
   FUNC_9(VAR_17, VAR_9);

  }
  return;
 }
 VAR_15 = FUNC_2(VAR_13, VAR_10, 0, ((void*)0), VAR_12,
        VAR_11, ((void*)0));
 if (VAR_15 != VAR_0) {
  int VAR_18 = FUNC_7((intptr_t)VAR_15, VAR_4);
  FUNC_6(VAR_8, VAR_15);
  FUNC_9(VAR_18, VAR_9);
  FUNC_8(VAR_18);
 }
}
