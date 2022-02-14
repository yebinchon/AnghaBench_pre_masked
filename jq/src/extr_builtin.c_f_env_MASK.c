
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static jv FUNC_7(jq_state *VAR_2, jv VAR_3) {
  FUNC_0(VAR_3);
  jv VAR_4 = FUNC_2();
  const char *VAR_5, *VAR_6;
  for (char **VAR_7 = VAR_1; *VAR_7 != ((void*)0); VAR_7++) {
    VAR_5 = VAR_7[0];
    VAR_6 = FUNC_6(VAR_7[0], '=');
    if (VAR_6 == ((void*)0))
      VAR_4 = FUNC_3(VAR_4, FUNC_4(VAR_5), FUNC_1());
    else if (VAR_5 - VAR_6 < VAR_0)
      VAR_4 = FUNC_3(VAR_4, FUNC_5(VAR_5, VAR_6 - VAR_5), FUNC_4(VAR_6 + 1));
  }
  return VAR_4;
}
