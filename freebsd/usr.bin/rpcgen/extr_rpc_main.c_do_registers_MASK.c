
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, const char *VAR_5[])
{
 int VAR_6;

 if (VAR_0 || !VAR_1) {
  for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
   if (FUNC_1(VAR_5[VAR_6], "-s")) {
    if (!FUNC_0(VAR_5[VAR_6 + 1],
          VAR_2))
     return (0);
    FUNC_2(VAR_5[VAR_6 + 1]);
    VAR_6++;
   }
  }
 } else {
  for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++)
   if (FUNC_1(VAR_5[VAR_6], "-s")) {
    if (!FUNC_0(VAR_5[VAR_6 + 1],
          VAR_3))
     return (0);
    FUNC_4(VAR_5[VAR_6 + 1]);
    VAR_6++;
   } else if (FUNC_1(VAR_5[VAR_6], "-n")) {
    FUNC_3(VAR_5[VAR_6 + 1]);
    VAR_6++;
   }
 }
 return (1);
}
