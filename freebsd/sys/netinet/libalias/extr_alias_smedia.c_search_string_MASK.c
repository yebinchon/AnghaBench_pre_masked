
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, int VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1 - VAR_6; VAR_3++) {
  for (VAR_4 = VAR_3, VAR_5 = 0; VAR_4 < VAR_1 - VAR_6; VAR_4++, VAR_5++) {
   if (VAR_0[VAR_4] != VAR_2[VAR_5] &&
       VAR_0[VAR_4] != VAR_2[VAR_5] - ('a' - 'A')) {
    break;
   }
   if (VAR_5 == VAR_6 - 1) {
    return (VAR_4 + 1);
   }
  }
 }
 return (-1);
}
