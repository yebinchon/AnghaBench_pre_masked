
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,size_t) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int ,char*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_6(const WCHAR* VAR_1,
                             const WCHAR* VAR_2,
                             WCHAR** VAR_3) {
  size_t VAR_4;
  size_t VAR_5 = FUNC_4(VAR_1);
  size_t VAR_6 = FUNC_4(VAR_2);
  FUNC_1(!FUNC_0(VAR_1, VAR_2, VAR_6));
  if (VAR_6 > 0 && VAR_2[VAR_6 - 1] == '\\')
    VAR_6--;
  VAR_4 = VAR_5 - VAR_6 - 1;
  *VAR_3 = FUNC_2((VAR_4 + 1) * sizeof(WCHAR));
  if (!*VAR_3)
    FUNC_3(VAR_0, "uv__malloc");
  FUNC_5(*VAR_3, VAR_1 + VAR_6 + 1, VAR_4);
  (*VAR_3)[VAR_4] = L'\0';
}
