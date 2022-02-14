
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,char) ;
 char FUNC_4 (char) ;

__attribute__((used)) static unsigned FUNC_5 (char VAR_0) {
  if (!FUNC_2 (VAR_0)) {
    FUNC_3 ("'%c' isn't hex digit\n", VAR_0);
    FUNC_0 (1);
  }
  if (FUNC_1 (VAR_0)) {
    return VAR_0 - 48;
  }
  VAR_0 = FUNC_4 (VAR_0);
  return VAR_0 - 87;
}
