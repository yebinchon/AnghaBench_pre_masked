
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static jv FUNC_4(jv VAR_0) {
  const char *VAR_1 = FUNC_2(VAR_0);
  const char *VAR_2 = FUNC_3(VAR_1, '/');
  if (!VAR_2)
    return VAR_0;
  jv VAR_3 = FUNC_1("%s", VAR_2);
  FUNC_0(VAR_0);
  return VAR_3;
}
