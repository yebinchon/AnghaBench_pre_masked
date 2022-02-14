
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int tm ;
struct weekdays {int** names; } ;
struct tm {int tm_wday; } ;
typedef int buf ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (char*,int,char*,struct tm*) ;
 int FUNC_2 (int*,char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct weekdays *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0;
 struct tm VAR_4;
 wchar_t VAR_5[20];

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));

 for (VAR_1 = 0; VAR_1 != 7; VAR_1++) {
  VAR_4.tm_wday = (VAR_1+1) % 7;
  FUNC_1(VAR_5, sizeof(VAR_5)/sizeof(VAR_5[0]), L"%a", &VAR_4);
  for (VAR_2 = 2; VAR_2 > 0; --VAR_2) {
   if ((VAR_3 = FUNC_3(VAR_5, VAR_2)) <= 2)
    break;
  }
  FUNC_4(VAR_0->names[VAR_1], L'\0', 4);
  if (VAR_3 == 1)
   VAR_0->names[VAR_1][0] = L' ';
  FUNC_2(VAR_0->names[VAR_1], VAR_5, VAR_2);
  FUNC_2(VAR_0->names[VAR_1], L" ", 1);
 }
}
