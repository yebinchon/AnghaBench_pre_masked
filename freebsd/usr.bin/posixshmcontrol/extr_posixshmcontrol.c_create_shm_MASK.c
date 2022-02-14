
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,long) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long FUNC_4 (int ,char**,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(int VAR_3, char **VAR_4)
{
 char *VAR_5;
 long VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = 0600;
 while ((VAR_7 = FUNC_3(VAR_3, VAR_4, "m:")) != -1) {
  switch (VAR_7) {
  case 'm':
   VAR_0 = 0;
   VAR_6 = FUNC_4(VAR_1, &VAR_5, 0);
   if (VAR_6 == 0 && VAR_0 != 0)
    FUNC_1(1, "mode:");
   if (*VAR_5 != '\0')
    FUNC_2(1, "non-integer mode");
   break;
  case '?':
  default:
   FUNC_5();
   return (2);
  }
 }

 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_10 = FUNC_0(VAR_4[VAR_8], VAR_6);
  if (VAR_10 != 0 && VAR_9 == 0)
   VAR_9 = VAR_10;
 }
 return (VAR_9);
}
