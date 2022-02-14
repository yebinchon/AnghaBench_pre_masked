
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 char const** VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static jv
FUNC_8(jv VAR_1)
{
  if (FUNC_1(VAR_1))
    return FUNC_0(VAR_1);
  jv VAR_2 = FUNC_2();
  if (VAR_0 == ((void*)0))
    return VAR_2;
  for (size_t VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++) {
    const char *VAR_4;

    if ((VAR_4 = FUNC_7(VAR_0[VAR_3], '=')) == ((void*)0))
      VAR_2 = FUNC_3(VAR_2, FUNC_5(VAR_0[VAR_3]));
    else
      VAR_2 = FUNC_4(VAR_2, FUNC_6(VAR_0[VAR_3], VAR_4 - VAR_0[VAR_3]), FUNC_5(VAR_4 + 1));
  }
  return FUNC_0(VAR_2);
}
