
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(const char *VAR_2)
{
 if (VAR_0) {
  int VAR_3 = '\'', VAR_4;

  FUNC_1(VAR_3);
  while ((VAR_4 = *VAR_2++)) {
   if (VAR_4 == VAR_3)
    FUNC_0("'\\'", VAR_1);
   FUNC_1(VAR_4);
  }
  FUNC_1(VAR_3);
  FUNC_1(' ');
 }
 else
  FUNC_2(VAR_2);
}
