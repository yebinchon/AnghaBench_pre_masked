
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char) ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_2 (char const*,char const*,int ,char) ;

__attribute__((used)) static void FUNC_3(const char *VAR_5, const char *VAR_6)
{
 int VAR_7;

 if (VAR_0 == VAR_1) {
  for (VAR_7 = 1; VAR_7 < 4; VAR_7++) {
   if (VAR_7 > 1)
    FUNC_1(' ');
   if (VAR_4[VAR_7][0])
    FUNC_0(VAR_4[VAR_7], VAR_3);
   else
    FUNC_1('.');
  }
 } else
  FUNC_0(VAR_4[VAR_1], VAR_3);

 FUNC_1('\t');
 FUNC_2(VAR_5, VAR_6, VAR_3,
       VAR_2 ? '\0' : '\n');

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_4[VAR_7][0] = 0;
 }
}
