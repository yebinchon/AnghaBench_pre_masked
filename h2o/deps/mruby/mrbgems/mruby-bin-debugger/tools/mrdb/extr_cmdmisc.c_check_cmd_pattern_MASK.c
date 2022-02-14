
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static mrb_bool
FUNC_3(const char *VAR_2, const char *VAR_3)
{
  const char *VAR_4, *VAR_5, *VAR_6, *VAR_7;

  if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0)) {
    return VAR_1;
  }
  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
    return VAR_0;
  }
  if ((VAR_4 = FUNC_0(VAR_2, '[')) == ((void*)0)) {
    return !FUNC_1(VAR_2, VAR_3);
  }
  if ((VAR_5 = FUNC_0(VAR_2, ']')) == ((void*)0)) {
    return VAR_0;
  }
  if (FUNC_2(VAR_2, VAR_3, VAR_4 - VAR_2)) {
    return VAR_0;
  }

  VAR_6 = VAR_4 + 1;
  VAR_7 = (char *)VAR_3 + (VAR_4 - VAR_2);

  for ( ; VAR_6 < VAR_5 && *VAR_7 != '\0'; VAR_6++, VAR_7++) {
    if (*VAR_6 != *VAR_7) {
      break;
    }
  }
  return *VAR_7 == '\0';
}
