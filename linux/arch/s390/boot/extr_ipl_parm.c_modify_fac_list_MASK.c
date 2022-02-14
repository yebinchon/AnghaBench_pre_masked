
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,int) ;
 unsigned long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_3(char *VAR_0)
{
 unsigned long VAR_1, VAR_2;
 char *VAR_3;
 bool VAR_4;

 while (*VAR_0) {
  VAR_4 = 0;
  if (*VAR_0 == '!') {
   VAR_4 = 1;
   VAR_0++;
  }
  VAR_1 = FUNC_2(VAR_0, &VAR_3, 0);
  if (VAR_0 == VAR_3)
   break;
  VAR_0 = VAR_3;
  if (*VAR_0 == '-') {
   VAR_0++;
   VAR_2 = FUNC_2(VAR_0, &VAR_3, 0);
   if (VAR_0 == VAR_3)
    break;
   VAR_0 = VAR_3;
   while (VAR_1 <= VAR_2) {
    FUNC_1(VAR_1, VAR_4);
    VAR_1++;
   }
  } else {
   FUNC_1(VAR_1, VAR_4);
  }
  if (*VAR_0 != ',')
   break;
  VAR_0++;
 }
 FUNC_0();
}
