
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char const*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_7(const WCHAR* VAR_2, WCHAR** VAR_3,
    WCHAR** VAR_4) {
  size_t VAR_5, VAR_6;

  if (VAR_2 == ((void*)0)) {
    if (VAR_3 != ((void*)0))
      *VAR_3 = ((void*)0);
    *VAR_4 = ((void*)0);
    return 0;
  }

  VAR_5 = FUNC_5(VAR_2);
  VAR_6 = VAR_5;
  while (VAR_6 > 0 && VAR_2[--VAR_6] != '\\' && VAR_2[VAR_6] != '/');

  if (VAR_6 == 0) {
    if (VAR_3) {
      *VAR_3 = (WCHAR*)FUNC_2((VAR_1 + 1) * sizeof(WCHAR));
      if (!*VAR_3) {
        FUNC_3(VAR_0, "uv__malloc");
      }

      if (!FUNC_0(VAR_1, *VAR_3)) {
        FUNC_1(*VAR_3);
        *VAR_3 = ((void*)0);
        return -1;
      }
    }

    *VAR_4 = FUNC_4(VAR_2);
  } else {
    if (VAR_3) {
      *VAR_3 = (WCHAR*)FUNC_2((VAR_6 + 2) * sizeof(WCHAR));
      if (!*VAR_3) {
        FUNC_3(VAR_0, "uv__malloc");
      }
      FUNC_6(*VAR_3, VAR_2, VAR_6 + 1);
      (*VAR_3)[VAR_6 + 1] = L'\0';
    }

    *VAR_4 = (WCHAR*)FUNC_2((VAR_5 - VAR_6) * sizeof(WCHAR));
    if (!*VAR_4) {
      FUNC_3(VAR_0, "uv__malloc");
    }
    FUNC_6(*VAR_4, VAR_2 + VAR_6 + 1, VAR_5 - VAR_6 - 1);
    (*VAR_4)[VAR_5 - VAR_6 - 1] = L'\0';
  }

  return 0;
}
