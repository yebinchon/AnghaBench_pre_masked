
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 scalar_t__ FUNC_0 (scalar_t__*) ;

__attribute__((used)) static WCHAR* FUNC_1(WCHAR *VAR_0) {
  for (; VAR_0 != ((void*)0) && *VAR_0 != 0; VAR_0 += FUNC_0(VAR_0) + 1) {
    if ((VAR_0[0] == L'P' || VAR_0[0] == L'p') &&
        (VAR_0[1] == L'A' || VAR_0[1] == L'a') &&
        (VAR_0[2] == L'T' || VAR_0[2] == L't') &&
        (VAR_0[3] == L'H' || VAR_0[3] == L'h') &&
        (VAR_0[4] == L'=')) {
      return &VAR_0[5];
    }
  }

  return ((void*)0);
}
