
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(int VAR_1, char **VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 bool VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_8 = 1;

 while ((VAR_3 = FUNC_0(VAR_1, VAR_2, "hn")) != -1) {
  switch (VAR_3) {
  case 'h':
   VAR_7 = 1;
   break;
  case 'n':
   VAR_8 = 0;
   break;
  default:
   FUNC_2();
   return (2);
  }
 }
 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = FUNC_1(VAR_2[VAR_4], VAR_7, VAR_8);
  if (VAR_6 != 0 && VAR_5 == 0)
   VAR_5 = VAR_6;
 }
 return (VAR_5);
}
